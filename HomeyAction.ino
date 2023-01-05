void homeySetup() {
  //list of all Homey actions
  Homey.begin("Paper Screen"); //Get name for your device

  Homey.addAction("Header_Icon", actionIconHeader);
  Homey.addAction("Header_Text", actionTextHeader);
  Homey.addAction("Header_Value", actionValueHeader);

  Homey.addAction("Device_Type_Zone_1", deviceTypeZ1);
  Homey.addAction("Device_Type_Zone_2", deviceTypeZ2);
  Homey.addAction("Device_Type_Zone_3", deviceTypeZ3);
  Homey.addAction("Device_Type_Zone_4", deviceTypeZ4);
  Homey.addAction("Device_Type_Zone_5", deviceTypeZ5);
  Homey.addAction("Device_Type_Zone_6", deviceTypeZ6);

  Homey.addAction("Icon_Zone_1", actionIconZ1);
  Homey.addAction("Icon_Zone_2", actionIconZ2);
  Homey.addAction("Icon_Zone_3", actionIconZ3);
  Homey.addAction("Icon_Zone_4", actionIconZ4);
  Homey.addAction("Icon_Zone_5", actionIconZ5);
  Homey.addAction("Icon_Zone_6", actionIconZ6);

  Homey.addAction("Name_Zone_1", actionNameZ1);
  Homey.addAction("Name_Zone_2", actionNameZ2);
  Homey.addAction("Name_Zone_3", actionNameZ3);
  Homey.addAction("Name_Zone_4", actionNameZ4);
  Homey.addAction("Name_Zone_5", actionNameZ5);
  Homey.addAction("Name_Zone_6", actionNameZ6);

  Homey.addAction("Value_Zone_1", actionValueZ1);
  Homey.addAction("Value_Zone_2", actionValueZ2);
  Homey.addAction("Value_Zone_3", actionValueZ3);
  Homey.addAction("Value_Zone_4", actionValueZ4);
  Homey.addAction("Value_Zone_5", actionValueZ5);
  Homey.addAction("Value_Zone_6", actionValueZ6);

  Homey.addAction("Time_Deep_Sleep", setTimeDeepSleep);

  Homey.addAction("Battery_Percent", actionBatteryPercent);
  Homey.addAction("Battery_Icon", selectBatteryIcon ); //Select which view of battery. Percent or dynamique icon

  Homey.addAction("Last_Update", actionLastUpdate);

  Homey.addAction("Screen_Repair", screenRepair);

  Homey.addAction("Select_Language", defineLanguage);

  Homey.addAction("Display_Mode", defineDisplayMode);
}
