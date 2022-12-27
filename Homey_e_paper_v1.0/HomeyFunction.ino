/*================================================================================================================================================
                                                                         LANGUAGE
  ==============================================================================================================================================*/
void defineLanguage() {
  String value = Homey.value;
  lang = value;
  preferences.putString("lang", value);
  //delay(1000);
  //ESP.restart();
}

/*================================================================================================================================================
                                                                         DEEP SLEEP
  ==============================================================================================================================================*/

void enableDeepSleep() {
  //Read the argument sent from the homey flow
  String value = Homey.value;
  if (value == "enable") {
    deepSleepEnable = true,
    preferences.putBool("deepSleepEnable", true);
  }
  if (value == "disable") {
    deepSleepEnable = false;
    preferences.putBool("deepSleepEnable", false);
  }
}

void setTimeDeepSleep() {
  String value = Homey.value;
  timeToSleep = value.toInt();
  preferences.putInt("timeToSleep", value.toInt());
}
/*================================================================================================================================================
                                                                         BATTERY & UPDATE
  ==============================================================================================================================================*/
void actionBatteryPercent() {
  getBatteryPercent();
  epd_poweron();
  epd_clear_area(batteryValue);
  writeln((GFXfont *)&OpenSans10, batteryPercent.c_str(), &batteryValue_x, &batteryValue_y, NULL);
  epd_poweroff();
}

void actionLastUpdate() {
  //Read the argument sent from the homey flow
  String value = Homey.value;
  epd_poweron();
  epd_clear_area(updateValue);
  writeln((GFXfont *)&OpenSans10, value.c_str(),  &updateValue_x, &updateValue_y, NULL);
  epd_poweroff();
}
/*================================================================================================================================================
                                                                         HEADER
  ==============================================================================================================================================*/


void actionIconHeader() {
  String value = Homey.value;
  if (lastWeatherText != weather) {
    //preferences.putString("lastWeatherIcon", value);
    epd_poweron();
    epd_clear_area(headerClearIcon);
    weatherIconNumber();
    epd_draw_image(headerIcon, (uint8_t *) weatherIconList[weatherIcon], BLACK_ON_WHITE);
    epd_poweroff();
  }
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
    epd_clear_area(iconClearZ1);
    epd_draw_image(iconZ1, (uint8_t *)deviceIconList[deviceIcon], BLACK_ON_WHITE);
    epd_poweroff();
  }
}


void actionNameZ1() {
  String value = Homey.value;
  if (nameZ1 != value) {
    preferences.putString("nameZ1", value);
    epd_poweron();
    epd_clear_area(nameZ1area);
    writeln((GFXfont *)&OpenSans18B, value.c_str(), &nameZ1_x, &nameZ1_y, NULL);
    epd_poweroff();
  }
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
    preferences.putString("value2Z1", value2Z1);
    epd_poweron();
    epd_clear_area(valueZ1area);
    writeln((GFXfont *)&OpenSans18, value2Z1.c_str(), &valueZ1_x, &valueZ1_y, NULL);
    epd_poweroff();
  }
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
    epd_clear_area(iconClearZ2);
    epd_draw_image(iconZ2, (uint8_t *)deviceIconList[deviceIcon], BLACK_ON_WHITE);
    epd_poweroff();
  }
}


void actionNameZ2() {
  String value = Homey.value;
  if (nameZ2 != value) {
    preferences.putString("nameZ2", value);
    epd_poweron();
    epd_clear_area(nameZ2area);
    writeln((GFXfont *)&OpenSans18B, value.c_str(), &nameZ2_x, &nameZ2_y, NULL);
    epd_poweroff();
  }
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
    preferences.putString("value2Z2", value2Z2);
    epd_poweron();
    epd_clear_area(valueZ2area);
    writeln((GFXfont *)&OpenSans18, value2Z2.c_str(), &valueZ2_x, &valueZ2_y, NULL);
    epd_poweroff();
  }
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
    epd_clear_area(iconClearZ3);
    epd_draw_image(iconZ3, (uint8_t *)deviceIconList[deviceIcon], BLACK_ON_WHITE);
    epd_poweroff();
  }
}

void actionNameZ3() {
  String value = Homey.value;
  if (nameZ3 != value) {
    preferences.putString("nameZ3", value);
    epd_poweron();
    epd_clear_area(nameZ3area);
    writeln((GFXfont *)&OpenSans18B, value.c_str(), &nameZ3_x, &nameZ3_y, NULL);
    epd_poweroff();
  }
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
    preferences.putString("value2Z3", value2Z3);
    epd_poweron();
    epd_clear_area(valueZ3area);
    writeln((GFXfont *)&OpenSans18, value2Z3.c_str(), &valueZ3_x, &valueZ3_y, NULL);
    epd_poweroff();
  }
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
    epd_clear_area(iconClearZ4);
    epd_draw_image(iconZ4, (uint8_t *)deviceIconList[deviceIcon], BLACK_ON_WHITE);
    epd_poweroff();
  }
}

void actionNameZ4() {
  String value = Homey.value;
  if (nameZ4 != value) {
    preferences.putString("nameZ4", value);
    epd_poweron();
    epd_clear_area(nameZ4area);
    writeln((GFXfont *)&OpenSans18B, value.c_str(), &nameZ4_x, &nameZ4_y, NULL);
    epd_poweroff();
  }
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
    preferences.putString("value2Z4", value2Z4);
    epd_poweron();
    epd_clear_area(valueZ4area);
    writeln((GFXfont *)&OpenSans18, value2Z4.c_str(), &valueZ4_x, &valueZ4_y, NULL);
    epd_poweroff();
  }
}
