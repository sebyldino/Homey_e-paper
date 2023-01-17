void readData() {
  lang = preferences.getString("lang", "");
  if (lang == "") {
   // error = true;
    firstStartTime = true;
  }
  setLanguage();

  displayMode = preferences.getString("displayMode", "");
  if (displayMode == "") displayMode = "horizontal 4";

  //===============   NAMES   ====================
  nameZ1 = preferences.getString("nameZ1", "");
  if (nameZ1 == "") nameZ1 = NAME_Z1;
  nameZ2 = preferences.getString("nameZ2", "");
  if (nameZ2 == "") nameZ2 = NAME_Z2;
  nameZ3 = preferences.getString("nameZ3", "");
  if (nameZ3 == "") nameZ3 = NAME_Z3;
  nameZ4 = preferences.getString("nameZ4", "");
  if (nameZ4 == "") nameZ4 = NAME_Z4;
  nameZ5 = preferences.getString("nameZ5", "");
  if (nameZ5 == "") nameZ5 = NAME_Z5;
  nameZ6 = preferences.getString("nameZ6", "");
  if (nameZ6 == "") nameZ6 = NAME_Z6;


  //===============   ICONS   ====================
  deviceIconChooseZ1 = preferences.getString("iconChooseZ1", "");
  if (deviceIconChooseZ1 == "") deviceIconChooseZ1 = "logo";
  deviceIconChooseZ2 = preferences.getString("iconChooseZ2", "");
  if (deviceIconChooseZ2 == "") deviceIconChooseZ2 = "logo";
  deviceIconChooseZ3 = preferences.getString("iconChooseZ3", "");
  if (deviceIconChooseZ3 == "") deviceIconChooseZ3 = "logo";
  deviceIconChooseZ4 = preferences.getString("iconChooseZ4", "");
  if (deviceIconChooseZ4 == "") deviceIconChooseZ4 = "logo";
  deviceIconChooseZ5 = preferences.getString("iconChooseZ5", "");
  if (deviceIconChooseZ5 == "") deviceIconChooseZ5 = "logo";
  deviceIconChooseZ6 = preferences.getString("iconChooseZ6", "");
  if (deviceIconChooseZ6 == "") deviceIconChooseZ6 = "logo";


  //===============   VALUES   ====================
  valueZ1 = preferences.getString("valueZ1", "");
  if (valueZ1 == "") valueZ1 = VALUE_Z1;
  valueZ2 = preferences.getString("valueZ2", "");
  if (valueZ2 == "") valueZ2 = VALUE_Z2;
  valueZ3 = preferences.getString("valueZ3", "");
  if (valueZ3 == "") valueZ3 = VALUE_Z3;
  valueZ4 = preferences.getString("valueZ4", "");
  if (valueZ4 == "") valueZ4 = VALUE_Z4;
  valueZ5 = preferences.getString("valueZ5", "");
  if (valueZ5 == "") valueZ5 = VALUE_Z5;
  valueZ6 = preferences.getString("valueZ6", "");
  if (valueZ6 == "") valueZ6 = VALUE_Z6;

  //===============   VALUES 2   ====================
  value2Z1 = preferences.getString("value2Z1", "");
  if (value2Z1 == "") value2Z1 = VALUE_Z1;
  value2Z2 = preferences.getString("value2Z2", "");
  if (value2Z2 == "") value2Z2 = VALUE_Z2;
  value2Z3 = preferences.getString("value2Z3", "");
  if (value2Z3 == "") value2Z3 = VALUE_Z3;
  value2Z4 = preferences.getString("value2Z4", "");
  if (value2Z4 == "") value2Z4 = VALUE_Z4;
  value2Z5 = preferences.getString("value2Z5", "");
  if (value2Z5 == "") value2Z5 = VALUE_Z5;
  value2Z6 = preferences.getString("value2Z6", "");
  if (value2Z6 == "") value2Z6 = VALUE_Z6;


  //===============   WEATHER   ====================
  lastWeatherIcon = preferences.getString("lastWeatherIcon", "");
  if (lastWeatherIcon == "") {
    lastWeatherIcon = "logo";
  }

  lastWeatherText = preferences.getString("lastWeatherText", "");
  if (lastWeatherText == "") {
    lastWeatherText = WEATHER;
  }
  lastTemperature = preferences.getString("lastTemperature", "");
  if (lastTemperature == "") lastTemperature = "--°C";



  //===============   SETTINGS   ====================
  timeToSleep = preferences.getInt("timeToSleep", 0);
  if(timeToSleep == 0) deepSleepEnable = false;
  if(timeToSleep >= 60) deepSleepEnable = true;

  batteryIconShowPercent = preferences.getBool("batteryIconShowPercent", false);
  if ((batteryIconShowPercent != false) && (batteryIconShowPercent != true)){
    batteryIconShowPercent = false; 
  }

  customWeatherIcon = preferences.getBool("customWeatherIcon", false);
  if (customWeatherIcon != true){
    customWeatherIcon = false;
  }
  customWeatherIconChoose = preferences.getString("weatherIconChoose", "");
  if(customWeatherIconChoose = ""){
    customWeatherIconChoose = "logo";
  }
}
