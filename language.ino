void setLanguage() {
  //================================================================================================================
  //                                                  FRENCH
  //================================================================================================================
  if (lang == "FR") {
    //ERROR_MESSAGE = "Mode deep sleep forcé!";
    ERROR_WIFI = "La connexion Wifi à échouée. Vérifiez votre SSID et PASSWORD!";
    ERROR_CONNECT_HOMEY = "Echec de connexion avec Homey!";
    ERROR_TIME_TO_SLEEP = "Deep Sleep n'a pas été activé, il doit être de 60 sec minimum!";
    ERROR_TIME_TO_SLEEP_2 = "Changez 'Time_Deep_Sleep'. 0 désactive le Deep Sleep.";
    ERROR_TIME_TO_SLEEP_3 = "Vous avez défini: " + String(timeToSleep) + " secondes.";

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

    //weather
    CLEAR = "ciel dégagé";
    CLEAR2 = "";
    CLEAR_NIGHT = "nuit dégagée";
    CLOUD = "nuageux";
    CLOUD2 = "";
    CLOUD3 = "";
    CLOUD4 = "";
    FOG = "brume";
    FOG2 = "brouillard";
    FOG3 = "brumeux";
    HAIL = "bruine";
    HAIL2 = "bruine légère";
    PARTLY_CLOUDY = "partiellement nuageux";
    PARTLY_CLOUDY2 = "peu nuageux";
    PARTLY_CLOUDY3 = "";
    PARTLY_CLOUDY4 = "";
    RAIN = "pluvieux";
    RAIN2 = "bruine";
    RAIN3 = "pluie modérée";
    RAIN4 = "";
    RAIN5 = "";
    RAINY_CLOUDY = "légère pluie";
    RAINY_CLOUDY2 = "";
    RAINY_CLOUDY3 = "";
    RAINY_CLOUDY4 = "";
    RAINY_CLOUDY5 = "";
    RAINY_CLOUDY6 = "";
    RAINY_CLOUDY7 = "";
    RAINY_CLOUDY8 = "";
    RAINY_CLOUDY9 = "";
    RAINY_CLOUDY10 = "";
    SNOW = "neige";
    SNOW2 = "neigeux";
    STORM = "orage";
    STORM_RAIN = "orage et pluie";
    TWO_CLOUDS = "couvert";
    TWO_CLOUDS2 = "";
    WIND = "vent";
    WIND2 = "vent fort";
    WIND3 = "venteux";
  }


  //================================================================================================================
  //                                                  ENGLISH
  //================================================================================================================
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


    //weather
    CLEAR = "clear sky";
    CLEAR2 = "";
    CLEAR_NIGHT = "clear night";
    CLOUD = "cloudy";
    CLOUD2 = "scattered clouds";
    CLOUD3 = "cloud";
    CLOUD4 = "";
    FOG = "haze";
    FOG2 = "fog";
    FOG3 = "mist";
    HAIL = "hail";
    HAIL2 = "";
    PARTLY_CLOUDY = "partly cloudy";
    PARTLY_CLOUDY2 = "";
    PARTLY_CLOUDY3 = "";
    PARTLY_CLOUDY4 = "";
    RAIN = "rain";
    RAIN2 = "rainy";
    RAIN3 = "";
    RAIN4 = "";
    RAIN5 = "";
    RAINY_CLOUDY = "shower rain";
    RAINY_CLOUDY2 = "";
    RAINY_CLOUDY3 = "";
    RAINY_CLOUDY4 = "";
    RAINY_CLOUDY5 = "";
    RAINY_CLOUDY6 = "";
    RAINY_CLOUDY7 = "";
    RAINY_CLOUDY8 = "";
    RAINY_CLOUDY9 = "";
    RAINY_CLOUDY10 = "";
    SNOW = "snow";
    SNOW2 = "snowy";
    STORM = "thunderstorm";
    STORM_RAIN = "thunderstorm rain";
    TWO_CLOUDS = "broken clouds";
    TWO_CLOUDS2 = "";
    WIND = "wind";
    WIND2 = "";
    WIND3 = "";
  }

  //================================================================================================================
  //                                                  DUTCH
  //================================================================================================================
  if (lang == "NL") {

    ERROR_WIFI = "Niet verbonden met WiFi. Controleer SSID en WACHTWOORD!";
    ERROR_CONNECT_HOMEY = "Geen verbinding met Homey!";
    ERROR_TIME_TO_SLEEP = "'Deep Sleep' niet geactiveerd, minimale instelling is 60 seconden!";
    ERROR_TIME_TO_SLEEP_2 = "Wijzig 'Time_Deep_Sleep'. 0 voor uitschakelen 'Deep Sleep'.";
    ERROR_TIME_TO_SLEEP_3 = "Nu opgegeven: " + String(timeToSleep) + " seconden.";

    if (displayMode == "horizontal 4") {
      ERROR_COUNTER = String(counter) + "/15 verzonden vanaf Homey. Controleer je flow!";
    }
    if (displayMode == "horizontal 6") {
      ERROR_COUNTER = String(counter) + " /21 verzonden vanaf Homey. Controleer je flow!";
    }

    LIGHT_ON = "AAN";
    LIGHT_OFF = "UIT";
    OPEN = "Open";
    CLOSE = "Dicht";
    LOCK = "Gesloten";
    UNLOCK = "Open";
    ON = "Aan";
    OFF = "Uit";
    ARMED = "Ingeschakeld";
    PARTIALLY_ARMED = "Nacht";
    DISARMED = "Uitgeschakeld";
    VALUE_Z1 = "Waarde Zone 1";
    VALUE_Z2 = "Waarde Zone 2";
    VALUE_Z3 = "Waarde Zone 3";
    VALUE_Z4 = "Waarde Zone 4";
    VALUE_Z5 = "Waarde Zone 5";
    VALUE_Z6 = "Waarde Zone 6";
    NAME_Z1 = "Naam Zone 1";
    NAME_Z2 = "Naam Zone 2";
    NAME_Z3 = "Naam Zone 3";
    NAME_Z4 = "Naam Zone 4";
    NAME_Z5 = "Naam Zone 5";
    NAME_Z6 = "Naam Zone 6";
    WEATHER = "Huidige weer";
    HEATER_ON = "Aan";
    HEATER_OFF = "Uit";
    WET = "Nat";
    DRY = "Droog";
    DETECTOR_ON = "Alarm!";
    DETECTOR_OFF = "Geen alarm";
    PRESENT = "Aanwezig";
    ABSENT = "Afwezig";
    
    //weather
    CLEAR = "Onbewolkt";
    CLEAR2 = "zonnig";
    CLEAR_NIGHT = "helderenacht";
    CLOUD = "Geheel bewolkt";
    CLOUD2 = "Overwegend bewolkt";
    CLOUD3 = "bewolkt";
    CLOUD4 = "nachtbewolkt";
    FOG = "mist";
    FOG2 = "nachtmist";
    FOG3 = "";
    HAIL = "hagel";
    HAIL2 = "";
    PARTLY_CLOUDY = "Licht bewolkt";
    PARTLY_CLOUDY2 = "lichtbewolkt";
    PARTLY_CLOUDY3 = "Half bewolkt";
    PARTLY_CLOUDY4 = "halfbewolkt";
    RAIN = "Regen";
    RAIN2 = "regen";
    RAIN3 = "Motregen";
    RAIN4 = "Motregen en regen";
    RAIN5 = "Dichte motregen";
    RAINY_CLOUDY = "Lichte regen";
    RAINY_CLOUDY2 = "halfbewolkt_regen";
    RAINY_CLOUDY3 = "buien";
    RAINY_CLOUDY4 = "Lichte motregen";
    RAINY_CLOUDY5 = "Lichte motregen en regen";
    RAINY_CLOUDY6 = "Af en toe lichte regen";
    RAINY_CLOUDY7 = "Droog na motregen";
    RAINY_CLOUDY8 = "Droog na regen";
    RAINY_CLOUDY9 = "Af en toe neerslag";
    RAINY_CLOUDY10 = "Droog na neerslag";
    SNOW = "sneeuw";
    SNOW2 = "";
    STORM = "Storm";
    STORM_RAIN = "";
    TWO_CLOUDS = "Zwaar bewolkt";
    TWO_CLOUDS2 = "zwaarbewolkt";
    WIND = "Harde wind";
    WIND2 = "";
    WIND3 = "";
  }
}//end
