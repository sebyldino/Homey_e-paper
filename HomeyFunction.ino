/*================================================================================================================================================
                                                                 DISPLAY MODE
  ==============================================================================================================================================*/
void defineDisplayMode() {
  String value = Homey.value;
  displayMode = value;
  preferences.putString("displayMode", value); //possible value: horizontal 4, horizontal 6
  delay(1000);
  ESP.restart();
}

/*================================================================================================================================================
                                                                  LANGUAGE
  ==============================================================================================================================================*/
void defineLanguage() {
  String value = Homey.value;
  lang = value;
  preferences.putString("lang", value);
  delay(1000);
  ESP.restart();

}

/*================================================================================================================================================
                                                                         DEEP SLEEP
  ==============================================================================================================================================*/


void setTimeDeepSleep() {
  String value = Homey.value;
  timeToSleep = value.toInt();
  if ((value.toInt() >= 1) && (value.toInt() <= 59)) {
    ERROR_MESSAGE == ERROR_TIME_TO_SLEEP;
    error = true;
    errorMessage();
  }
  if (value.toInt() >= 60) {
    preferences.putInt("timeToSleep", value.toInt());
    preferences.putBool("deepSleepEnable", true);
    delay(1000);
    ESP.restart();
  }
  if (value.toInt() == 0) {
    preferences.putBool("deepSleepEnable", false);
    ESP.restart();
  }
}
/*================================================================================================================================================
                                                                         BATTERY & UPDATE
  ==============================================================================================================================================*/
void actionBatteryPercent() {
  epd_poweron();
  epd_clear_area(batteryAreaPlug);
  getBatteryPercent();
}



void selectBatteryIcon() {
  String value = Homey.value;
  if (value == "percent") {
    batteryIconShowPercent = true;
    preferences.putBool("batteryIconShowPercent", batteryIconShowPercent);
  }
  if (value == "dynamic") {
    batteryIconShowPercent = false;
    preferences.putBool("batteryIconShowPercent", batteryIconShowPercent);
  }
  epd_poweron();
  epd_clear_area(batteryAreaPlug);
  getBatteryPercent();
}



void actionLastUpdate() {
  //Read the argument sent from the homey flow
  String value = Homey.value;
  epd_poweron();
  epd_clear_area(updateValue);
  writeln((GFXfont *)&OpenSans10, value.c_str(),  &updateValue_x, &updateValue_y, NULL);
  epd_poweroff();
  counter++;
  paperScreenOnline = true;
  lastUpdateError = false;

}
/*================================================================================================================================================
                                                                         HEADER
  ==============================================================================================================================================*/


void actionIconHeader() {
  if (lastWeatherText != weather) {
    epd_poweron();
    epd_clear_area(headerClearIcon);
    weatherIconNumber();
    epd_draw_image(headerIcon, (uint8_t *) weatherIconList[weatherIcon], BLACK_ON_WHITE);
    epd_poweroff();
  }
  paperScreenOnline = true;
  counter++;
  weatherIconError = false;
}



void actionTextHeader() {
  String value = Homey.value;
  weather = Homey.value;
  if (lastWeatherText != value) {
    preferences.putString("lastWeatherText", value);
    weather = Homey.value;
    epd_poweron();
    epd_clear_area(headerClearText);
    writeln((GFXfont *)&OpenSans18, value.c_str(), &headerText_x, &headerText_y, NULL);
    epd_poweroff();
  }
  paperScreenOnline = true;
  counter++;
  weatherTextError = false;
  actionIconHeader();
}


void actionValueHeader() {
  String value = Homey.value;
  if (lastTemperature != value) {
    preferences.putString("lastTemperature", value);
    epd_poweron();
    epd_clear_area(headerClearValue);
    writeln((GFXfont *)&OpenSans18, value.c_str(), &headerValue_x, &headerValue_y, NULL);
    epd_poweroff();
  }
  paperScreenOnline = true;
  counter++;
  weatherValueError = false;
}

/*================================================================================================================================================
                                                                         ZONE 1
  ==============================================================================================================================================*/
void deviceTypeZ1() {
  String value = Homey.value;
  typeZ1 = value;
}

void actionIconZ1() {

  String value = Homey.value;
  if (deviceIconChooseZ1 != value) {
    preferences.putString("iconChooseZ1", value);
    deviceIconChoose = value;
    deviceIconNumber();
    delay(100);
    epd_poweron();
    if (displayMode == "horizontal 4") {
      epd_clear_area(iconClearZ1);
      epd_draw_image(iconZ1, (uint8_t *)deviceIconList[deviceIcon], BLACK_ON_WHITE);
      epd_poweroff();
    }

    if (displayMode == "horizontal 6") {
      epd_clear_area(iconClearZ1_H6);
      epd_draw_image(iconZ1_H6, (uint8_t *)deviceIconList80[deviceIcon], BLACK_ON_WHITE);
      epd_poweroff();
    }
  }
  paperScreenOnline = true;
  counter++;
  iconZ1Error = false;
}



void actionNameZ1() {

  String value = Homey.value;
  if (nameZ1 != value) {
    preferences.putString("nameZ1", value);
    epd_poweron();
    if (displayMode == "horizontal 4") {
      epd_clear_area(nameZ1area);
      writeln((GFXfont *)&OpenSans18B, value.c_str(), &nameZ1_x, &nameZ1_y, NULL);
      epd_poweroff();
    }
    if (displayMode == "horizontal 6") {
      epd_clear_area(nameZ1_H6area);
      writeln((GFXfont *)&OpenSans14B, value.c_str(), &nameZ1_H6_x, &nameZ1_H6_y, NULL);
      epd_poweroff();
    }
  }
  paperScreenOnline = true;
  counter++;
  nameZ1Error = false;

}


void actionValueZ1() {
  String value = Homey.value;
  if (valueZ1 != value) {
    preferences.putString("valueZ1", value);
    value2Z1 = value;
    if ((typeZ1 == "open/close") && (value == "true")) value2Z1 = OPEN;
    if ((typeZ1 == "open/close") && (value == "false")) value2Z1 = CLOSE;
    if ((typeZ1 == "light") && (value == "true")) value2Z1 = LIGHT_ON;
    if ((typeZ1 == "light") && (value == "false")) value2Z1 = LIGHT_OFF;
    if ((typeZ1 == "on/off") && (value == "true")) value2Z1 = ON;
    if ((typeZ1 == "on/off") && (value == "false")) value2Z1 = OFF;
    if ((typeZ1 == "lock") && (value == "true")) value2Z1 = LOCK;
    if ((typeZ1 == "lock") && (value == "false")) value2Z1 = UNLOCK;
    if ((typeZ1 == "heater") && (value == "true")) value2Z1 = HEATER_OFF;
    if ((typeZ1 == "heater") && (value == "false")) value2Z1 = HEATER_ON;
    if ((typeZ1 == "water sensor") && (value == "true")) value2Z1 = WET;
    if ((typeZ1 == "water sensor") && (value == "false")) value2Z1 = DRY;
    if ((typeZ1 == "detector") && (value == "true")) value2Z1 = DETECTOR_ON;
    if ((typeZ1 == "detector") && (value == "false")) value2Z1 = DETECTOR_OFF;
    if ((typeZ1 == "presence") && (value == "true")) value2Z1 = PRESENT;
    if ((typeZ1 == "presence") && (value == "false")) value2Z1 = ABSENT;
    preferences.putString("value2Z1", value2Z1);
    epd_poweron();
    if (displayMode == "horizontal 4") {
      epd_clear_area(valueZ1area);
      writeln((GFXfont *)&OpenSans16, value2Z1.c_str(), &valueZ1_x, &valueZ1_y, NULL);
      epd_poweroff();
    }
    if (displayMode == "horizontal 6") {
      epd_clear_area(valueZ1_H6area);
      writeln((GFXfont *)&OpenSans12, value2Z1.c_str(), &valueZ1_H6_x, &valueZ1_H6_y, NULL);
      epd_poweroff();
    }
  }
  paperScreenOnline = true;
  counter++;
  valueZ1Error = false;
}

/*================================================================================================================================================
                                                                       ZONE 2
  ==============================================================================================================================================*/
void deviceTypeZ2() {
  String value = Homey.value;
  typeZ2 = value;
}

void actionIconZ2() {
  String value = Homey.value;
  if (deviceIconChooseZ2 != value) {
    preferences.putString("iconChooseZ2", value);
    deviceIconChoose = Homey.value;
    deviceIconNumber();
    delay(100);
    epd_poweron();
    if (displayMode == "horizontal 4") {
      epd_clear_area(iconClearZ2);
      epd_draw_image(iconZ2, (uint8_t *)deviceIconList[deviceIcon], BLACK_ON_WHITE);
      epd_poweroff();
    }
    if (displayMode == "horizontal 6") {
      epd_clear_area(iconClearZ2_H6);
      epd_draw_image(iconZ2_H6, (uint8_t *)deviceIconList80[deviceIcon], BLACK_ON_WHITE);
      epd_poweroff();
    }
  }
  paperScreenOnline = true;
  counter++;
  iconZ2Error = false;
}


void actionNameZ2() {
  String value = Homey.value;
  if (nameZ2 != value) {
    preferences.putString("nameZ2", value);
    epd_poweron();
    if (displayMode == "horizontal 4") {
      epd_clear_area(nameZ2area);
      writeln((GFXfont *)&OpenSans18B, value.c_str(), &nameZ2_x, &nameZ2_y, NULL);
      epd_poweroff();
    }
    if (displayMode == "horizontal 6") {
      epd_clear_area(nameZ2_H6area);
      writeln((GFXfont *)&OpenSans14B, value.c_str(), &nameZ2_H6_x, &nameZ2_H6_y, NULL);
      epd_poweroff();
    }
  }
  paperScreenOnline = true;
  counter++;
  nameZ2Error = false;
}

void actionValueZ2() {
  String value = Homey.value;
  if (valueZ2 != value) {
    preferences.putString("valueZ2", value);
    value2Z2 = value;
    if ((typeZ2 == "open/close") && (value == "true")) value2Z2 = OPEN;
    if ((typeZ2 == "open/close") && (value == "false")) value2Z2 = CLOSE;
    if ((typeZ2 == "light") && (value == "true")) value2Z2 = LIGHT_ON;
    if ((typeZ2 == "light") && (value == "false")) value2Z2 = LIGHT_OFF;
    if ((typeZ2 == "on/off") && (value == "true")) value2Z2 = ON;
    if ((typeZ2 == "on/off") && (value == "false")) value2Z2 = OFF;
    if ((typeZ2 == "lock") && (value == "true")) value2Z2 = LOCK;
    if ((typeZ2 == "lock") && (value == "false")) value2Z2 = UNLOCK;
    if ((typeZ2 == "heater") && (value == "true")) value2Z2 = HEATER_OFF;
    if ((typeZ2 == "heater") && (value == "false")) value2Z2 = HEATER_ON;
    if ((typeZ2 == "water sensor") && (value == "true")) value2Z2 = WET;
    if ((typeZ2 == "water sensor") && (value == "false")) value2Z2 = DRY;
    if ((typeZ2 == "detector") && (value == "true")) value2Z2 = DETECTOR_ON;
    if ((typeZ2 == "detector") && (value == "false")) value2Z2 = DETECTOR_OFF;
    if ((typeZ2 == "presence") && (value == "true")) value2Z2 = PRESENT;
    if ((typeZ2 == "presence") && (value == "false")) value2Z2 = ABSENT;
    preferences.putString("value2Z2", value2Z2);
    epd_poweron();
    if (displayMode == "horizontal 4") {
      epd_clear_area(valueZ2area);
      writeln((GFXfont *)&OpenSans16, value2Z2.c_str(), &valueZ2_x, &valueZ2_y, NULL);
      epd_poweroff();
    }
    if (displayMode == "horizontal 6") {
      epd_clear_area(valueZ2_H6area);
      writeln((GFXfont *)&OpenSans12, value2Z2.c_str(), &valueZ2_H6_x, &valueZ2_H6_y, NULL);
      epd_poweroff();
    }
  }
  paperScreenOnline = true;
  counter++;
  valueZ2Error = false;
}
/*================================================================================================================================================
                                                                       ZONE 3
  ==============================================================================================================================================*/
void deviceTypeZ3() {
  String value = Homey.value;
  typeZ3 = value;
}

void actionIconZ3() {
  String value = Homey.value;
  if (deviceIconChooseZ3 != value) {
    preferences.putString("iconChooseZ3", value);
    deviceIconChoose = Homey.value;
    deviceIconNumber();
    delay(100);
    epd_poweron();
    if (displayMode == "horizontal 4") {
      epd_clear_area(iconClearZ3);
      epd_draw_image(iconZ3, (uint8_t *)deviceIconList[deviceIcon], BLACK_ON_WHITE);
      epd_poweroff();
    }
    if (displayMode == "horizontal 6") {
      epd_clear_area(iconClearZ3_H6);
      epd_draw_image(iconZ3_H6, (uint8_t *)deviceIconList80[deviceIcon], BLACK_ON_WHITE);
      epd_poweroff();
    }
  }
  paperScreenOnline = true;
  counter++;
  iconZ3Error = false;
}

void actionNameZ3() {
  String value = Homey.value;
  if (nameZ3 != value) {
    preferences.putString("nameZ3", value);
    epd_poweron();
    if (displayMode == "horizontal 4") {
      epd_clear_area(nameZ3area);
      writeln((GFXfont *)&OpenSans18B, value.c_str(), &nameZ3_x, &nameZ3_y, NULL);
      epd_poweroff();
    }
    if (displayMode == "horizontal 6") {
      epd_clear_area(nameZ3_H6area);
      writeln((GFXfont *)&OpenSans14B, value.c_str(), &nameZ3_H6_x, &nameZ3_H6_y, NULL);
      epd_poweroff();
    }
  }
  paperScreenOnline = true;
  counter++;
  nameZ3Error = false;
}

void actionValueZ3() {
  String value = Homey.value;
  if (valueZ3 != value) {
    preferences.putString("valueZ3", value);
    value2Z3 = value;
    if ((typeZ3 == "open/close") && (value == "true")) value2Z3 = OPEN;
    if ((typeZ3 == "open/close") && (value == "false")) value2Z3 = CLOSE;
    if ((typeZ3 == "light") && (value == "true")) value2Z3 = LIGHT_ON;
    if ((typeZ3 == "light") && (value == "false")) value2Z3 = LIGHT_OFF;
    if ((typeZ3 == "on/off") && (value == "true")) value2Z3 = ON;
    if ((typeZ3 == "on/off") && (value == "false")) value2Z3 = OFF;
    if ((typeZ3 == "lock") && (value == "true")) value2Z3 = LOCK;
    if ((typeZ3 == "lock") && (value == "false")) value2Z3 = UNLOCK;
    if ((typeZ3 == "heater") && (value == "true")) value2Z3 = HEATER_OFF;
    if ((typeZ3 == "heater") && (value == "false")) value2Z3 = HEATER_ON;
    if ((typeZ3 == "water sensor") && (value == "true")) value2Z3 = WET;
    if ((typeZ3 == "water sensor") && (value == "false")) value2Z3 = DRY;
    if ((typeZ3 == "detector") && (value == "true")) value2Z3 = DETECTOR_ON;
    if ((typeZ3 == "detector") && (value == "false")) value2Z3 = DETECTOR_OFF;
    if ((typeZ3 == "presence") && (value == "true")) value2Z3 = PRESENT;
    if ((typeZ3 == "presence") && (value == "false")) value2Z3 = ABSENT;
    preferences.putString("value2Z3", value2Z3);
    epd_poweron();
    if (displayMode == "horizontal 4") {
      epd_clear_area(valueZ3area);
      writeln((GFXfont *)&OpenSans16, value2Z3.c_str(), &valueZ3_x, &valueZ3_y, NULL);
      epd_poweroff();
    }
    if (displayMode == "horizontal 6") {
      epd_clear_area(valueZ3_H6area);
      writeln((GFXfont *)&OpenSans12, value2Z3.c_str(), &valueZ3_H6_x, &valueZ3_H6_y, NULL);
      epd_poweroff();
    }
  }
  paperScreenOnline = true;
  counter++;
  valueZ3Error = false;
}
/*================================================================================================================================================
                                                                       ZONE 4
  ==============================================================================================================================================*/
void deviceTypeZ4() {
  String value = Homey.value;
  typeZ4 = value;
}

void actionIconZ4() {
  String value = Homey.value;
  if (deviceIconChooseZ4 != value) {
    preferences.putString("iconChooseZ4", value);
    deviceIconChoose = Homey.value;
    deviceIconNumber();
    delay(100);
    epd_poweron();
    if (displayMode == "horizontal 4") {
      epd_clear_area(iconClearZ4);
      epd_draw_image(iconZ4, (uint8_t *)deviceIconList[deviceIcon], BLACK_ON_WHITE);
      epd_poweroff();
    }
    if (displayMode == "horizontal 6") {
      epd_clear_area(iconClearZ4_H6);
      epd_draw_image(iconZ4_H6, (uint8_t *)deviceIconList80[deviceIcon], BLACK_ON_WHITE);
      epd_poweroff();
    }
  }
  paperScreenOnline = true;
  counter++;
  iconZ4Error = false;
}

void actionNameZ4() {
  String value = Homey.value;
  if (nameZ4 != value) {
    preferences.putString("nameZ4", value);
    epd_poweron();
    if (displayMode == "horizontal 4") {
      epd_clear_area(nameZ4area);
      writeln((GFXfont *)&OpenSans18B, value.c_str(), &nameZ4_x, &nameZ4_y, NULL);
      epd_poweroff();
    }
    if (displayMode == "horizontal 6") {
      epd_clear_area(nameZ4_H6area);
      writeln((GFXfont *)&OpenSans14B, value.c_str(), &nameZ4_H6_x, &nameZ4_H6_y, NULL);
      epd_poweroff();
    }
  }
  paperScreenOnline = true;
  counter++;
  nameZ4Error = false;
}

void actionValueZ4() {
  String value = Homey.value;
  if (valueZ4 != value) {
    preferences.putString("valueZ4", value);
    value2Z4 = value;
    if ((typeZ4 == "open/close") && (value == "true")) value2Z4 = OPEN;
    if ((typeZ4 == "open/close") && (value == "false")) value2Z4 = CLOSE;
    if ((typeZ4 == "light") && (value == "true")) value2Z4 = LIGHT_ON;
    if ((typeZ4 == "light") && (value == "false")) value2Z4 = LIGHT_OFF;
    if ((typeZ4 == "on/off") && (value == "true")) value2Z4 = ON;
    if ((typeZ4 == "on/off") && (value == "false")) value2Z4 = OFF;
    if ((typeZ4 == "lock") && (value == "true")) value2Z4 = LOCK;
    if ((typeZ4 == "lock") && (value == "false")) value2Z4 = UNLOCK;
    if ((typeZ4 == "heater") && (value == "true")) value2Z4 = HEATER_OFF;
    if ((typeZ4 == "heater") && (value == "false")) value2Z4 = HEATER_ON;
    if ((typeZ4 == "water sensor") && (value == "true")) value2Z4 = WET;
    if ((typeZ4 == "water sensor") && (value == "false")) value2Z4 = DRY;
    if ((typeZ4 == "detector") && (value == "true")) value2Z4 = DETECTOR_ON;
    if ((typeZ4 == "detector") && (value == "false")) value2Z4 = DETECTOR_OFF;
    if ((typeZ4 == "presence") && (value == "true")) value2Z4 = PRESENT;
    if ((typeZ4 == "presence") && (value == "false")) value2Z4 = ABSENT;
    preferences.putString("value2Z4", value2Z4);
    epd_poweron();
    if (displayMode == "horizontal 4") {
      epd_clear_area(valueZ4area);
      writeln((GFXfont *)&OpenSans16, value2Z4.c_str(), &valueZ4_x, &valueZ4_y, NULL);
      epd_poweroff();
    }
    if (displayMode == "horizontal 6") {
      epd_clear_area(valueZ4_H6area);
      writeln((GFXfont *)&OpenSans12, value2Z4.c_str(), &valueZ4_H6_x, &valueZ4_H6_y, NULL);
      epd_poweroff();
    }
  }
  paperScreenOnline = true;
  counter++;
  valueZ4Error = false;
}

/*================================================================================================================================================
                                                                       ZONE 5_H6
  ==============================================================================================================================================*/
void deviceTypeZ5() {
  String value = Homey.value;
  typeZ5 = value;
}

void actionIconZ5() {
  String value = Homey.value;
  if (deviceIconChooseZ5 != value) {
    preferences.putString("iconChooseZ5", value);
    deviceIconChoose = Homey.value;
    deviceIconNumber();
    delay(100);
    epd_poweron();
    if (displayMode == "horizontal 6") {
      epd_clear_area(iconClearZ5_H6);
      epd_draw_image(iconZ5_H6, (uint8_t *)deviceIconList80[deviceIcon], BLACK_ON_WHITE);
      epd_poweroff();
    }
  }
  paperScreenOnline = true;
  counter++;
  iconZ5Error = false;
}

void actionNameZ5() {
  String value = Homey.value;
  if (nameZ5 != value) {
    preferences.putString("nameZ5", value);
    epd_poweron();
    if (displayMode == "horizontal 6") {
      epd_clear_area(nameZ5_H6area);
      writeln((GFXfont *)&OpenSans14B, value.c_str(), &nameZ5_H6_x, &nameZ5_H6_y, NULL);
      epd_poweroff();
    }
  }
  paperScreenOnline = true;
  counter++;
  nameZ5Error = false;
}

void actionValueZ5() {
  String value = Homey.value;
  if (valueZ5 != value) {
    preferences.putString("valueZ5", value);
    value2Z5 = value;
    if ((typeZ5 == "open/close") && (value == "true")) value2Z5 = OPEN;
    if ((typeZ5 == "open/close") && (value == "false")) value2Z5 = CLOSE;
    if ((typeZ5 == "light") && (value == "true")) value2Z5 = LIGHT_ON;
    if ((typeZ5 == "light") && (value == "false")) value2Z5 = LIGHT_OFF;
    if ((typeZ5 == "on/off") && (value == "true")) value2Z5 = ON;
    if ((typeZ5 == "on/off") && (value == "false")) value2Z5 = OFF;
    if ((typeZ5 == "lock") && (value == "true")) value2Z5 = LOCK;
    if ((typeZ5 == "lock") && (value == "false")) value2Z5 = UNLOCK;
    if ((typeZ5 == "heater") && (value == "true")) value2Z5 = HEATER_OFF;
    if ((typeZ5 == "heater") && (value == "false")) value2Z5 = HEATER_ON;
    if ((typeZ5 == "water sensor") && (value == "true")) value2Z5 = WET;
    if ((typeZ5 == "water sensor") && (value == "false")) value2Z5 = DRY;
    if ((typeZ5 == "detector") && (value == "true")) value2Z5 = DETECTOR_ON;
    if ((typeZ5 == "detector") && (value == "false")) value2Z5 = DETECTOR_OFF;
    if ((typeZ5 == "presence") && (value == "true")) value2Z5 = PRESENT;
    if ((typeZ5 == "presence") && (value == "false")) value2Z5 = ABSENT;
    preferences.putString("value2Z5", value2Z5);
    epd_poweron();
    if (displayMode == "horizontal 6") {
      epd_clear_area(valueZ5_H6area);
      writeln((GFXfont *)&OpenSans12, value2Z5.c_str(), &valueZ5_H6_x, &valueZ5_H6_y, NULL);
      epd_poweroff();
    }
  }
  paperScreenOnline = true;
  counter++;
  valueZ5Error = false;
}

/*================================================================================================================================================
                                                                       ZONE 6_H6
  ==============================================================================================================================================*/
void deviceTypeZ6() {
  String value = Homey.value;
  typeZ6 = value;
}

void actionIconZ6() {
  String value = Homey.value;
  if (deviceIconChooseZ6 != value) {
    preferences.putString("iconChooseZ6", value);
    deviceIconChoose = Homey.value;
    deviceIconNumber();
    delay(100);
    epd_poweron();
    if (displayMode == "horizontal 6") {
      epd_clear_area(iconClearZ6_H6);
      epd_draw_image(iconZ6_H6, (uint8_t *)deviceIconList80[deviceIcon], BLACK_ON_WHITE);
      epd_poweroff();
    }
  }
  paperScreenOnline = true;
  counter++;
  iconZ6Error = false;
}

void actionNameZ6() {
  String value = Homey.value;
  if (nameZ6 != value) {
    preferences.putString("nameZ6", value);
    epd_poweron();
    if (displayMode == "horizontal 6") {
      epd_clear_area(nameZ6_H6area);
      writeln((GFXfont *)&OpenSans14B, value.c_str(), &nameZ6_H6_x, &nameZ6_H6_y, NULL);
      epd_poweroff();
    }
  }
  paperScreenOnline = true;
  counter++;
  nameZ6Error = false;
}

void actionValueZ6() {
  String value = Homey.value;
  if (valueZ6 != value) {
    preferences.putString("valueZ6", value);
    value2Z6 = value;
    if ((typeZ6 == "open/close") && (value == "true")) value2Z6 = OPEN;
    if ((typeZ6 == "open/close") && (value == "false")) value2Z6 = CLOSE;
    if ((typeZ6 == "light") && (value == "true")) value2Z6 = LIGHT_ON;
    if ((typeZ6 == "light") && (value == "false")) value2Z6 = LIGHT_OFF;
    if ((typeZ6 == "on/off") && (value == "true")) value2Z6 = ON;
    if ((typeZ6 == "on/off") && (value == "false")) value2Z6 = OFF;
    if ((typeZ6 == "lock") && (value == "true")) value2Z6 = LOCK;
    if ((typeZ6 == "lock") && (value == "false")) value2Z6 = UNLOCK;
    if ((typeZ6 == "heater") && (value == "true")) value2Z6 = HEATER_OFF;
    if ((typeZ6 == "heater") && (value == "false")) value2Z6 = HEATER_ON;
    if ((typeZ6 == "water sensor") && (value == "true")) value2Z6 = WET;
    if ((typeZ6 == "water sensor") && (value == "false")) value2Z6 = DRY;
    if ((typeZ6 == "detector") && (value == "true")) value2Z6 = DETECTOR_ON;
    if ((typeZ6 == "detector") && (value == "false")) value2Z6 = DETECTOR_OFF;
    if ((typeZ6 == "presence") && (value == "true")) value2Z6 = PRESENT;
    if ((typeZ6 == "presence") && (value == "false")) value2Z6 = ABSENT;
    preferences.putString("value2Z6", value2Z6);
    epd_poweron();
    if (displayMode == "horizontal 6") {
      epd_clear_area(valueZ6_H6area);
      writeln((GFXfont *)&OpenSans12, value2Z6.c_str(), &valueZ6_H6_x, &valueZ6_H6_y, NULL);
      epd_poweroff();
    }
  }
  paperScreenOnline = true;
  counter++;
  valueZ6Error = false;
}
