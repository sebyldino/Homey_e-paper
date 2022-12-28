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
  //Connect to network
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  //Print IP address
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

void setupDisplay() {
  zonesSettings();


  epd_init();
  epd_poweron();
  epd_clear();

  //Draw separation bars
  epd_draw_image(headerBar, (uint8_t *)line960x3_data, BLACK_ON_WHITE);
  epd_draw_image(horizontalZoneBar, (uint8_t *)line960x1_data, BLACK_ON_WHITE);
  epd_draw_image(verticalZoneBar, (uint8_t *)line440x1_data, BLACK_ON_WHITE);
  epd_draw_image(batteryBar, (uint8_t *)line100x2_data, BLACK_ON_WHITE);

  //Battery and Update time icons
  epd_draw_image(batteryIcon, (uint8_t *)battery_data, BLACK_ON_WHITE);
  epd_draw_image(updateIcon, (uint8_t *)update35_data, BLACK_ON_WHITE);


  //Header icon, text and value
  writeln((GFXfont *)&OpenSans18, lastWeatherText.c_str(), &headerText_x, &headerText_y, NULL);  //Weather forecast
  writeln((GFXfont *)&OpenSans18, lastTemperature.c_str(), &headerValue_x, &headerValue_y, NULL);      //30.5°C
  weather = lastWeatherText;
  weatherIconNumber();
  epd_draw_image(headerIcon, (uint8_t *) weatherIconList[weatherIcon], BLACK_ON_WHITE);


  //Icons Zones
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



  //Devices names zones, 15 characters max per line
  writeln((GFXfont *)&OpenSans18B, nameZ1.c_str(), &nameZ1_x, &nameZ1_y, NULL);  // Name Zone 1
  writeln((GFXfont *)&OpenSans18B, nameZ2.c_str(), &nameZ2_x, &nameZ2_y, NULL);  // Name Zone 2
  writeln((GFXfont *)&OpenSans18B, nameZ3.c_str(), &nameZ3_x, &nameZ3_y, NULL);  // Name Zone 3
  writeln((GFXfont *)&OpenSans18B, nameZ4.c_str(), &nameZ4_x, &nameZ4_y, NULL);  // Name Zone 4

  //Devices values zones, 15 characters max per line
  writeln((GFXfont *)&OpenSans16, value2Z1.c_str(), &valueZ1_x, &valueZ1_y, NULL);  // Value Zone 1
  writeln((GFXfont *)&OpenSans16, value2Z2.c_str(), &valueZ2_x, &valueZ2_y, NULL);  // Value Zone 2
  writeln((GFXfont *)&OpenSans16, value2Z3.c_str(), &valueZ3_x, &valueZ3_y, NULL);  // Value Zone 3
  writeln((GFXfont *)&OpenSans16, value2Z4.c_str(), &valueZ4_x, &valueZ4_y, NULL);  // Value Zone 4

  epd_poweroff();
}
