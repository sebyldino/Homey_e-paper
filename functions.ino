void sendBatteryToHomey() {
  if (!batterySended) {
    Homey.setCapabilityValue("measure_battery", (int) batteryState);
    batterySended = true;
  }

  if ((millis() - currentMillis) >= intervalSendBattery) {
    Homey.setCapabilityValue("measure_battery", (int) batteryState);
    currentMillis = millis();
  }

}

void getBatteryPercent() {
  if (!firstStartTime) {
    uint16_t v = analogRead(BATT_PIN);
    float battery_voltage = ((float)v / 4095.0) * 2.0 * 3.3 * (vref / 1000.0);
    voltage = String(battery_voltage) + "V";
    b = battery_voltage * 100;                          //To get accuratie value
    batteryPercent = String(map(b, 300, 420, 0, 100));  //320 for 3.2V and 420 for 4.2V. set 300 because i get negative value when battery low

    if ((batteryPercent.toInt() >= 100) && (batteryPercent.toInt() <= 110)) batteryPercent = "100";  //get 10% error to batterie voltage
    if (batteryPercent.toInt() <= 0) batteryPercent = "0";
    batteryState = batteryPercent.toInt();
    if (batteryPercent.toInt() >= 101) {
      epd_draw_image(batteryAreaPlug, (uint8_t *)batteryPlugUSB_data, BLACK_ON_WHITE);
      batteryState = 100;
    }


    if (!batteryIconShowPercent) {
      if (batteryPercent.toInt() <= 5) {
        epd_draw_image(batteryIcon, (uint8_t *)battery0_data, BLACK_ON_WHITE);
      }
      if ((batteryPercent.toInt() >= 6) && (batteryPercent.toInt() <= 20)) {
        epd_draw_image(batteryIcon, (uint8_t *)battery1_data, BLACK_ON_WHITE);
      }
      if ((batteryPercent.toInt() >= 21) && (batteryPercent.toInt() <= 40)) {
        epd_draw_image(batteryIcon, (uint8_t *)battery2_data, BLACK_ON_WHITE);
      }
      if ((batteryPercent.toInt() >= 41) && (batteryPercent.toInt() <= 60)) {
        epd_draw_image(batteryIcon, (uint8_t *)battery3_data, BLACK_ON_WHITE);
      }
      if ((batteryPercent.toInt() >= 61) && (batteryPercent.toInt() <= 80)) {
        epd_draw_image(batteryIcon, (uint8_t *)battery4_data, BLACK_ON_WHITE);
      }
      if ((batteryPercent.toInt() >= 81) && (batteryPercent.toInt() <= 100)) {
        epd_draw_image(batteryIcon, (uint8_t *)battery5_data, BLACK_ON_WHITE);
      }
    }

    else if (batteryIconShowPercent) {
      epd_draw_image(batteryIcon, (uint8_t *)battery_data, BLACK_ON_WHITE);
      writeln((GFXfont *)&OpenSans10, (batteryPercent + "%").c_str(), &batteryValue_x, &batteryValue_y, NULL);
    }
  }

}


//=======================================================================================================================================

void firstStart() {
  if (firstStartTime) {
    zonesSettings();
    epd_init();
    epd_poweron();
    epd_clear();
    epd_draw_image(backgroundArea, (uint8_t *)firstStart_data, BLACK_ON_WHITE);
    epd_poweroff();
  }
}


void goToDeepSleep() {
  if ((counter == 15) && (displayMode == "horizontal 4") && (deepSleepEnable)) {
    Serial.println("Go to Deep Sleep");
    epd_poweron();
    epd_draw_image(sleepIcon, (uint8_t *)sleep_data, BLACK_ON_WHITE);
    epd_poweroff_all();
    Homey.setCapabilityValue("measure_battery", (int) batteryPercent.toInt());
    delay(1000);
    esp_deep_sleep_start();  //ESP go into deep sleep mode
  }
  if ((counter == 21) && (displayMode == "horizontal 6") && (deepSleepEnable)) {
    Serial.println("Go to Deep Sleep");
    epd_poweron();
    epd_draw_image(sleepIcon, (uint8_t *)sleep_data, BLACK_ON_WHITE);
    epd_poweroff_all();
    Homey.setCapabilityValue("measure_battery", (int) batteryPercent.toInt());
    delay(1000);
    esp_deep_sleep_start();  //ESP go into deep sleep mode
  }
}


void errorMessage() {
  setLanguage();
  if ((millis() >= waitTimeHomey) && (!paperScreenOnline) && (!firstStartTime)) {
    ERROR_MESSAGE = ERROR_CONNECT_HOMEY;
    error = true;
  }
  if ((millis() >= waitTimeCounterAction) && (!firstStartTime) && (counter != 21) && (displayMode == "horizontal 6") && (deepSleepEnable)) {
    error = true;
  }
  if ((millis() >= waitTimeCounterAction) && (!firstStartTime) && (counter != 15) && (displayMode == "horizontal 4") && (deepSleepEnable)) {
    error = true;
  }
  if ((timeToSleep >= 1) && (timeToSleep <= 59)) {
    error = true;
    ERROR_MESSAGE = ERROR_TIME_TO_SLEEP;
    ERROR_MESSAGE_2 = ERROR_TIME_TO_SLEEP_2;
    ERROR_MESSAGE_3 = ERROR_TIME_TO_SLEEP_3;
  }
  if (error) {  //error message ERROR_WIFI was set in wifi() function

    zonesSettings();
    epd_init();
    epd_poweron();
    epd_clear();

    if ((counter != 15) && ((WiFi.status() == WL_CONNECTED)) && (displayMode == "horizontal 4") && (paperScreenOnline) && (ERROR_MESSAGE != ERROR_TIME_TO_SLEEP) && (deepSleepEnable)) {
      ERROR_MESSAGE = ERROR_COUNTER;
    }

    if ((counter != 21) && ((WiFi.status() == WL_CONNECTED)) && (displayMode == "horizontal 6") && (paperScreenOnline) && (ERROR_MESSAGE != ERROR_TIME_TO_SLEEP) && (deepSleepEnable)) {
      ERROR_MESSAGE = ERROR_COUNTER;
    }

    if ((WiFi.status() == WL_CONNECTED) && (ERROR_MESSAGE != ERROR_TIME_TO_SLEEP)) {
      epd_draw_image(warningIcon, (uint8_t *)warning_data, BLACK_ON_WHITE);
      writeln((GFXfont *)&OpenSans14B, ERROR_MESSAGE.c_str(), &errorMessage_x, &errorMessage_y, NULL);  //Print the error message on screen
    }

    if ((WiFi.status() != WL_CONNECTED)) {
      epd_draw_image(backgroundArea, (uint8_t *)wifiError_data, BLACK_ON_WHITE);
      writeln((GFXfont *)&OpenSans14B, ("SSID: " + String(ssid)).c_str(), &errorSsid_x, &errorSsid_y, NULL);
      writeln((GFXfont *)&OpenSans14B, ("PASSWORD: " + String(password)).c_str(), &errorPassword_x, &errorPassword_y, NULL);
    }

    if ((ERROR_MESSAGE == ERROR_TIME_TO_SLEEP) && (WiFi.status() == WL_CONNECTED)) {
      epd_draw_image(warningIcon, (uint8_t *)warning_data, BLACK_ON_WHITE);
      writeln((GFXfont *)&OpenSans14B, ERROR_MESSAGE.c_str(), &errorMessage_x, &errorMessage_y, NULL);  //Print the error message on screen
      writeln((GFXfont *)&OpenSans14B, ERROR_MESSAGE_2.c_str(), &errorSsid_x, &errorSsid_y, NULL);
      writeln((GFXfont *)&OpenSans14B, ERROR_MESSAGE_3.c_str(), &errorPassword_x, &errorPassword_y, NULL);
    }

    debug();
    delay(60000);  // Wait 1 minute before restart ESP
    ESP.restart();
  }
}




void screenRepair() {  //if screen show previous images, call this function in a flow with "Screen_Repair" action
  int32_t i = 0;
  epd_init();
  Rect_t area = epd_full_screen();
  epd_poweron();
  delay(10);
  epd_clear();
  for (i = 0; i < 20; i++) {
    epd_push_pixels(area, 50, 0);
    delay(500);
  }
  epd_clear();
  for (i = 0; i < 40; i++) {
    epd_push_pixels(area, 50, 1);
    delay(500);
  }
  epd_clear();
  epd_poweroff_all();
  ESP.restart();
}


void weatherIconNumber() {
  if (weather == CLEAR) weatherIcon = 1;                //clear
  if (weather == CLEAR2) weatherIcon = 1;               //clear

  if (weather == CLEAR_NIGHT) weatherIcon = 2;          //clear night

  if (weather == CLOUD) weatherIcon = 3;                //cloudy
  if (weather == CLOUD2) weatherIcon = 3;               //cloudy
  if (weather == CLOUD3) weatherIcon = 3;               //cloudy
  if (weather == CLOUD4) weatherIcon = 3;               //cloudy

  if (weather == FOG) weatherIcon = 4;                  //fog
  if (weather == FOG2) weatherIcon = 4;                 //fog
  if (weather == FOG3) weatherIcon = 4;                 //fog
  
  if (weather == HAIL) weatherIcon = 5;                 //hail
  if (weather == HAIL2) weatherIcon = 5;                //hail

  if (weather == PARTLY_CLOUDY) weatherIcon = 6;        //partly cloudy
  if (weather == PARTLY_CLOUDY2) weatherIcon = 6;       //partly cloudy
  if (weather == PARTLY_CLOUDY3) weatherIcon = 6;       //partly cloudy
  if (weather == PARTLY_CLOUDY4) weatherIcon = 6;       //partly cloudy

  if (weather == RAIN) weatherIcon = 7;                 //rainy
  if (weather == RAIN2) weatherIcon = 7;                //rainy
  if (weather == RAIN3) weatherIcon = 7;                //rainy
  if (weather == RAIN4) weatherIcon = 7;                //rainy
  if (weather == RAIN5) weatherIcon = 7;                //rainy

  if (weather == RAINY_CLOUDY) weatherIcon = 8;         //rainy cloudy
  if (weather == RAINY_CLOUDY2) weatherIcon = 8;        //rainy cloudy
  if (weather == RAINY_CLOUDY3) weatherIcon = 8;        //rainy cloudy
  if (weather == RAINY_CLOUDY4) weatherIcon = 8;        //rainy cloudy
  if (weather == RAINY_CLOUDY5) weatherIcon = 8;        //rainy cloudy
  if (weather == RAINY_CLOUDY6) weatherIcon = 8;        //rainy cloudy
  if (weather == RAINY_CLOUDY7) weatherIcon = 8;        //rainy cloudy
  if (weather == RAINY_CLOUDY8) weatherIcon = 8;        //rainy cloudy
  if (weather == RAINY_CLOUDY9) weatherIcon = 8;        //rainy cloudy
  if (weather == RAINY_CLOUDY10) weatherIcon = 8;       //rainy cloudy

  if (weather == SNOW) weatherIcon = 9;                 //snowy
  if (weather == SNOW2) weatherIcon = 9;                //snowy

  if (weather == STORM) weatherIcon = 10;               //storm

  if (weather == STORM_RAIN) weatherIcon = 11;          //storm rainy

  if (weather == TWO_CLOUDS) weatherIcon = 12;          //two clouds
  if (weather == TWO_CLOUDS2) weatherIcon = 12;         //two clouds

  if (weather == WIND) weatherIcon = 13;                //windy
  if (weather == WIND2) weatherIcon = 13;               //windy
  if (weather == WIND3) weatherIcon = 13;               //windy
}



void deviceIconNumber() {
  if (deviceIconChoose == "door") deviceIcon = 0;
  if (deviceIconChoose == "garage door") deviceIcon = 1;
  if (deviceIconChoose == "gate") deviceIcon = 2;
  if (deviceIconChoose == "humidity") deviceIcon = 3;
  if (deviceIconChoose == "light") deviceIcon = 4;
  if (deviceIconChoose == "logo") deviceIcon = 5;
  if (deviceIconChoose == "pressure") deviceIcon = 6;
  if (deviceIconChoose == "roller shutter") deviceIcon = 7;
  if (deviceIconChoose == "thermometer") deviceIcon = 8;
  if (deviceIconChoose == "window") deviceIcon = 9;
  if (deviceIconChoose == "wireless plug") deviceIcon = 10;
  if (deviceIconChoose == "lock") deviceIcon = 11;
  if (deviceIconChoose == "bathroom") deviceIcon = 12;
  if (deviceIconChoose == "bedroom") deviceIcon = 13;
  if (deviceIconChoose == "fan") deviceIcon = 14;
  if (deviceIconChoose == "garden") deviceIcon = 15;
  if (deviceIconChoose == "heater") deviceIcon = 16;
  if (deviceIconChoose == "home") deviceIcon = 17;
  if (deviceIconChoose == "kitchen") deviceIcon = 18;
  if (deviceIconChoose == "lounge") deviceIcon = 19;
  if (deviceIconChoose == "power counter") deviceIcon = 20;
  if (deviceIconChoose == "stove") deviceIcon = 21;
  if (deviceIconChoose == "swimming pool") deviceIcon = 22;
  if (deviceIconChoose == "water counter") deviceIcon = 23;
  if (deviceIconChoose == "alarm") deviceIcon = 24;
  if (deviceIconChoose == "alarm 2") deviceIcon = 25;
  if (deviceIconChoose == "horizontal battery") deviceIcon = 26;
  if (deviceIconChoose == "vertical battery") deviceIcon = 27;
  if (deviceIconChoose == "car") deviceIcon = 28;
  if (deviceIconChoose == "car 2") deviceIcon = 29;
  if (deviceIconChoose == "climate") deviceIcon = 30;
  if (deviceIconChoose == "co") deviceIcon = 31;
  if (deviceIconChoose == "co2") deviceIcon = 32;
  if (deviceIconChoose == "smoke sensor") deviceIcon = 33;
  if (deviceIconChoose == "water plant") deviceIcon = 34;
  if (deviceIconChoose == "water sensor") deviceIcon = 35;
  if (deviceIconChoose == "water sensor 2") deviceIcon = 36;
  if (deviceIconChoose == "wifi") deviceIcon = 37;
  if (deviceIconChoose == "wireless") deviceIcon = 38;
  if (deviceIconChoose == "3D print") deviceIcon = 39;
  if (deviceIconChoose == "lux") deviceIcon = 40;
  if (deviceIconChoose == "dollar") deviceIcon = 41;
  if (deviceIconChoose == "euro") deviceIcon = 42;
  if (deviceIconChoose == "lightbolt") deviceIcon = 43;
  if (deviceIconChoose == "washing machine") deviceIcon = 44;
  if (deviceIconChoose == "weather") deviceIcon = 45;
  if (deviceIconChoose == "wind") deviceIcon = 46;
  if (deviceIconChoose == "open envelope") deviceIcon = 47;
  if (deviceIconChoose == "close envelope") deviceIcon = 48;
}
