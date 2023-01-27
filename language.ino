void setLanguage() {
    //==================  FRENCH  ==================
  if (lang == "FR") {
    //ERROR_MESSAGE = "Mode deep sleep forcé!";
    ERROR_WIFI = "La connexion Wifi à échouée. Vérifiez votre SSID et PASSWORD!";
    ERROR_CONNECT_HOMEY = "Echec de connexion avec Homey!";
    ERROR_TIME_TO_SLEEP = "Deep Sleep n'a pas été activé, il doit être de 60 sec minimum!";
    ERROR_TIME_TO_SLEEP_2 = "Changez 'Time_Deep_Sleep'. 0 désactive le Deep Sleep.";
    ERROR_TIME_TO_SLEEP_3 = "Vous avez défini: " + String(timeToSleep) + " secondes";

    if (displayMode == "horizontal 4") {
      ERROR_COUNTER = String(counter) + "/15 actions transmises par Homey. Vérifiez vos flow!";
    }
    if (displayMode == "horizontal 6") {
      ERROR_COUNTER = String(counter) + " /21 actions transmises par Homey. Vérifiez vos flow!";
    }
    
    LIGHT_ON = "Allumé";
    LIGHT_OFF = "Éteint";
    OPEN = "Ouvert";
    CLOSE = "Fermé";
    LOCK = "Verrouillée";
    UNLOCK = "Déverrouillée";
    ON = "On";
    OFF = "Off";
    ARMED = "Armée";
    PARTIALLY_ARMED = "Nuit";
    DISARMED = "Désarmée";
    VALUE_Z1 = "Valeur Zone 1";
    VALUE_Z2 = "Valeur Zone 2";
    VALUE_Z3 = "Valeur Zone 3";
    VALUE_Z4 = "Valeur Zone 4";
    VALUE_Z5 = "Valeur Zone 5";
    VALUE_Z6 = "Valeur Zone 6";
    NAME_Z1 = "Nom Zone 1";
    NAME_Z2 = "Nom Zone 2";
    NAME_Z3 = "Nom Zone 3";
    NAME_Z4 = "Nom Zone 4";
    NAME_Z5 = "Nom Zone 5";
    NAME_Z6 = "Nom Zone 6";
    WEATHER = "Météo Actuelle";
    HEATER_ON = "Allumé";
    HEATER_OFF = "Éteint";
    WET = "Mouillé";
    DRY = "Sec";
    DETECTOR_ON = "Alerte!";
    DETECTOR_OFF = "Pas d'alerte";
    PRESENT = "Présent";
    ABSENT = "Absent";
  }



  
  //==================  ENGLISH  ==================
  if (lang == "EN") {

    ERROR_WIFI = "Wifi connection failed. Please check your SSID and PASSWORD!";
    ERROR_CONNECT_HOMEY = "Failed to connect with Homey!";
    ERROR_TIME_TO_SLEEP = "Deep Sleep hasn't been activated, must be at least 60 seconds!";
    ERROR_TIME_TO_SLEEP_2 = "Change 'Time_Deep_Sleep'. 0 disable Deep Sleep.";
    ERROR_TIME_TO_SLEEP_3 = "You defined: " + String(timeToSleep) + " seconds.";

    if (displayMode == "horizontal 4") {
      ERROR_COUNTER = String(counter) + "/15 sended from Homey. Check your flow!";
    }
    if (displayMode == "horizontal 6") {
      ERROR_COUNTER = String(counter) + " /21 sended from Homey. Check your flow!";
    }

    LIGHT_ON = "ON";
    LIGHT_OFF = "OFF";
    OPEN = "Open";
    CLOSE = "Close";
    LOCK = "Lock";
    UNLOCK = "Unlock";
    ON = "On";
    OFF = "Off";
    ARMED = "Armed";
    PARTIALLY_ARMED = "Night";
    DISARMED = "Disarmed";
    VALUE_Z1 = "Value Zone 1";
    VALUE_Z2 = "Value Zone 2";
    VALUE_Z3 = "Value Zone 3";
    VALUE_Z4 = "Value Zone 4";
    VALUE_Z5 = "Value Zone 5";
    VALUE_Z6 = "Value Zone 6";
    NAME_Z1 = "Name Zone 1";
    NAME_Z2 = "Name Zone 2";
    NAME_Z3 = "Name Zone 3";
    NAME_Z4 = "Name Zone 4";
    NAME_Z5 = "Name Zone 5";
    NAME_Z6 = "Name Zone 6";
    WEATHER = "Actual Weather";
    HEATER_ON = "On";
    HEATER_OFF = "Off";
    WET = "Wet";
    DRY = "Dry";
    DETECTOR_ON = "Alert!";
    DETECTOR_OFF = "No alert";
    PRESENT = "Present";
    ABSENT = "Absent";
  }
}//end
