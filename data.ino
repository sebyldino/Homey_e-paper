void readData() {



  //===============   NAMES   ====================
  nameZ1 = preferences.getString("nameZ1", "");
  if (nameZ1 == "") nameZ1 = NAME_Z1;
  nameZ2 = preferences.getString("nameZ2", "");
  if (nameZ2 == "") nameZ2 = NAME_Z2;
  nameZ3 = preferences.getString("nameZ3", "");
  if (nameZ3 == "") nameZ3 = NAME_Z3;
  nameZ4 = preferences.getString("nameZ4", "");
  if (nameZ4 == "") nameZ4 = NAME_Z4;


  //===============   ICONS   ====================
  deviceIconChooseZ1 = preferences.getString("iconChooseZ1", "");
  if (deviceIconChooseZ1 == "") deviceIconChooseZ1 = "logo";
  deviceIconChooseZ2 = preferences.getString("iconChooseZ2", "");
  if (deviceIconChooseZ2 == "") deviceIconChooseZ2 = "logo";
  deviceIconChooseZ3 = preferences.getString("iconChooseZ3", "");
  if (deviceIconChooseZ3 == "") deviceIconChooseZ3 = "logo";
  deviceIconChooseZ4 = preferences.getString("iconChooseZ4", "");
  if (deviceIconChooseZ4 == "") deviceIconChooseZ4 = "logo";


  //===============   VALUES   ====================
  valueZ1 = preferences.getString("valueZ1", "");
  if (valueZ1 == "") valueZ1 = VALUE_Z1;
  valueZ2 = preferences.getString("valueZ2", "");
  if (valueZ2 == "") valueZ2 = VALUE_Z2;
  valueZ3 = preferences.getString("valueZ3", "");
  if (valueZ3 == "") valueZ3 = VALUE_Z3;
  valueZ4 = preferences.getString("valueZ4", "");
  if (valueZ4 == "") valueZ4 = VALUE_Z4;

  //===============   VALUES   ====================
  value2Z1 = preferences.getString("value2Z1", "");
  if (value2Z1 == "") value2Z1 = VALUE_Z1;
  value2Z2 = preferences.getString("value2Z2", "");
  if (value2Z2 == "") value2Z2 = VALUE_Z2;
  value2Z3 = preferences.getString("value2Z3", "");
  if (value2Z3 == "") value2Z3 = VALUE_Z3;
  value2Z4 = preferences.getString("value2Z4", "");
  if (value2Z4 == "") value2Z4 = VALUE_Z4;

  //===============   WEATHER   ===============)=====
  lastWeatherIcon = preferences.getString("lastWeatherIcon", "");
  if (lastWeatherIcon == "") {
    lastWeatherIcon = "logo";
  }

  lastWeatherText = preferences.getString("lastWeatherText", "");
  if (lastWeatherText == "") {
    lastWeatherText = "Actual Weather";
  }
  lastTemperature = preferences.getString("lastTemperature", "");
  if (lastTemperature == "") lastTemperature = "--°C";

  deepSleepEnable = preferences.getBool("deepSleepEnable", false);

  timeToSleep = preferences.getInt("timeToSleep", 0);

  lang = preferences.getString("lang", "");
  if (lang == "") {
    lang = "EN";
  }
}
