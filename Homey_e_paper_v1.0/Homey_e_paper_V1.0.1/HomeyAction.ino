void homeySetup() {


  Homey.begin("Paper Screen"); //Get name for your device

  Homey.addAction("Time_Deep_Sleep", setTimeDeepSleep);
  Homey.addAction("Deep_Sleep_Enable", enableDeepSleep);

  Homey.addAction("Header_Icon", actionIconHeader);
  Homey.addAction("Header_Text", actionTextHeader);
  Homey.addAction("Header_Value", actionValueHeader);

  Homey.addAction("Device_type_Zone_1", deviceTypeZ1);
  Homey.addAction("Device_type_Zone_2", deviceTypeZ2);
  Homey.addAction("Device_type_Zone_3", deviceTypeZ3);
  Homey.addAction("Device_type_Zone_4", deviceTypeZ4);

  Homey.addAction("Icon_Zone_1", actionIconZ1);
  Homey.addAction("Icon_Zone_2", actionIconZ2);
  Homey.addAction("Icon_Zone_3", actionIconZ3);
  Homey.addAction("Icon_Zone_4", actionIconZ4);

  Homey.addAction("Name_Zone_1", actionNameZ1);
  Homey.addAction("Name_Zone_2", actionNameZ2);
  Homey.addAction("Name_Zone_3", actionNameZ3);
  Homey.addAction("Name_Zone_4", actionNameZ4);

  Homey.addAction("Value_Zone_1", actionValueZ1);
  Homey.addAction("Value_Zone_2", actionValueZ2);
  Homey.addAction("Value_Zone_3", actionValueZ3);
  Homey.addAction("Value_Zone_4", actionValueZ4);

  Homey.addAction("Battery_percent", actionBatteryPercent);

  Homey.addAction("Last_update", actionLastUpdate);

  Homey.addAction("Screen_Repair", screenRepair);

  Homey.addAction("Select_Language", defineLanguage);

}
