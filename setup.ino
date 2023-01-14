/*================================================================================================================================================
                                                                  FUNCTIONS CALL IN SETUP
  ==============================================================================================================================================*/

void setupADC() {
  esp_adc_cal_characteristics_t adc_chars;
  esp_adc_cal_value_t val_type = esp_adc_cal_characterize(
                                   ADC_UNIT_1,
                                   ADC_ATTEN_DB_11,
                                   ADC_WIDTH_BIT_12,
                                   1100,
                                   &adc_chars);

  if (val_type == ESP_ADC_CAL_VAL_EFUSE_VREF) {
    vref = adc_chars.vref;
  }
}



void wifi() {
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    if (millis() >= waitTimeWifi) {
      ERROR_MESSAGE = ERROR_WIFI;
      error = true;
      errorMessage();
    }
  }
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}



void setupDisplay() {
  if (!firstStartTime) {
    zonesSettings();
    epd_init();
    epd_poweron();
    epd_clear();

    //Draw separation bars
    if (displayMode == "horizontal 4") {
      epd_draw_image(backgroundArea, (uint8_t *)backgroundH4_data, BLACK_ON_WHITE);
    }
    if (displayMode == "horizontal 6") {
      epd_draw_image(backgroundArea, (uint8_t *)backgroundH6_data, BLACK_ON_WHITE);
    }

    //Header icon, text and value
    writeln((GFXfont *)&OpenSans18, lastWeatherText.c_str(), &headerText_x, &headerText_y, NULL);
    writeln((GFXfont *)&OpenSans18, lastTemperature.c_str(), &headerValue_x, &headerValue_y, NULL);
    weather = lastWeatherText;
    weatherIconNumber();
    epd_draw_image(headerIcon, (uint8_t *) weatherIconList[weatherIcon], BLACK_ON_WHITE);


    //Icons Zones
    if (displayMode == "horizontal 4") {
      deviceIconChoose = deviceIconChooseZ1;
      deviceIconNumber();
      delay(100);
      epd_draw_image(iconZ1, (uint8_t *)deviceIconList[deviceIcon], BLACK_ON_WHITE);

      deviceIconChoose = deviceIconChooseZ2;
      deviceIconNumber();
      delay(100);
      epd_draw_image(iconZ2, (uint8_t *)deviceIconList[deviceIcon], BLACK_ON_WHITE);

      deviceIconChoose = deviceIconChooseZ3;
      deviceIconNumber();
      delay(100);
      epd_draw_image(iconZ3, (uint8_t *)deviceIconList[deviceIcon], BLACK_ON_WHITE);

      deviceIconChoose = deviceIconChooseZ4;
      deviceIconNumber();
      delay(100);
      epd_draw_image(iconZ4, (uint8_t *)deviceIconList[deviceIcon], BLACK_ON_WHITE);
    }

    if (displayMode == "horizontal 6") {
      deviceIconChoose = deviceIconChooseZ1;
      deviceIconNumber();
      delay(100);
      epd_draw_image(iconZ1_H6, (uint8_t *)deviceIconList80[deviceIcon], BLACK_ON_WHITE);

      deviceIconChoose = deviceIconChooseZ2;
      deviceIconNumber();
      delay(100);
      epd_draw_image(iconZ2_H6, (uint8_t *)deviceIconList80[deviceIcon], BLACK_ON_WHITE);

      deviceIconChoose = deviceIconChooseZ3;
      deviceIconNumber();
      delay(100);
      epd_draw_image(iconZ3_H6, (uint8_t *)deviceIconList80[deviceIcon], BLACK_ON_WHITE);

      deviceIconChoose = deviceIconChooseZ4;
      deviceIconNumber();
      delay(100);
      epd_draw_image(iconZ4_H6, (uint8_t *)deviceIconList80[deviceIcon], BLACK_ON_WHITE);

      deviceIconChoose = deviceIconChooseZ5;
      deviceIconNumber();
      delay(100);
      epd_draw_image(iconZ5_H6, (uint8_t *)deviceIconList80[deviceIcon], BLACK_ON_WHITE);

      deviceIconChoose = deviceIconChooseZ6;
      deviceIconNumber();
      delay(100);
      epd_draw_image(iconZ6_H6, (uint8_t *)deviceIconList80[deviceIcon], BLACK_ON_WHITE);
    }


    //Devices names zones, 15 characters max per line
    if (displayMode == "horizontal 4") {
      writeln((GFXfont *)&OpenSans18B, nameZ1.c_str(), &nameZ1_x, &nameZ1_y, NULL);  // Name Zone 1
      writeln((GFXfont *)&OpenSans18B, nameZ2.c_str(), &nameZ2_x, &nameZ2_y, NULL);  // Name Zone 2
      writeln((GFXfont *)&OpenSans18B, nameZ3.c_str(), &nameZ3_x, &nameZ3_y, NULL);  // Name Zone 3
      writeln((GFXfont *)&OpenSans18B, nameZ4.c_str(), &nameZ4_x, &nameZ4_y, NULL);  // Name Zone 4
    }
    if (displayMode == "horizontal 6") {
      writeln((GFXfont *)&OpenSans14B, nameZ1.c_str(), &nameZ1_H6_x, &nameZ1_H6_y, NULL);  // Name Zone 1
      writeln((GFXfont *)&OpenSans14B, nameZ2.c_str(), &nameZ2_H6_x, &nameZ2_H6_y, NULL);  // Name Zone 2
      writeln((GFXfont *)&OpenSans14B, nameZ3.c_str(), &nameZ3_H6_x, &nameZ3_H6_y, NULL);  // Name Zone 3
      writeln((GFXfont *)&OpenSans14B, nameZ4.c_str(), &nameZ4_H6_x, &nameZ4_H6_y, NULL);  // Name Zone 4
      writeln((GFXfont *)&OpenSans14B, nameZ5.c_str(), &nameZ5_H6_x, &nameZ5_H6_y, NULL);  // Name Zone 5
      writeln((GFXfont *)&OpenSans14B, nameZ6.c_str(), &nameZ6_H6_x, &nameZ6_H6_y, NULL);  // Name Zone 6
    }

    //Devices values zones, 15 characters max per line
    if (displayMode == "horizontal 4") {
      writeln((GFXfont *)&OpenSans16, value2Z1.c_str(), &valueZ1_x, &valueZ1_y, NULL);  // Value Zone 1
      writeln((GFXfont *)&OpenSans16, value2Z2.c_str(), &valueZ2_x, &valueZ2_y, NULL);  // Value Zone 2
      writeln((GFXfont *)&OpenSans16, value2Z3.c_str(), &valueZ3_x, &valueZ3_y, NULL);  // Value Zone 3
      writeln((GFXfont *)&OpenSans16, value2Z4.c_str(), &valueZ4_x, &valueZ4_y, NULL);  // Value Zone 4
    }
    if (displayMode == "horizontal 6") {
      writeln((GFXfont *)&OpenSans12, value2Z1.c_str(), &valueZ1_H6_x, &valueZ1_H6_y, NULL);  // Value Zone 1
      writeln((GFXfont *)&OpenSans12, value2Z2.c_str(), &valueZ2_H6_x, &valueZ2_H6_y, NULL);  // Value Zone 2
      writeln((GFXfont *)&OpenSans12, value2Z3.c_str(), &valueZ3_H6_x, &valueZ3_H6_y, NULL);  // Value Zone 3
      writeln((GFXfont *)&OpenSans12, value2Z4.c_str(), &valueZ4_H6_x, &valueZ4_H6_y, NULL);  // Value Zone 4
      writeln((GFXfont *)&OpenSans12, value2Z5.c_str(), &valueZ5_H6_x, &valueZ5_H6_y, NULL);  // Value Zone 5
      writeln((GFXfont *)&OpenSans12, value2Z6.c_str(), &valueZ6_H6_x, &valueZ6_H6_y, NULL);  // Value Zone 6
    }

    epd_poweroff();
  }
}
