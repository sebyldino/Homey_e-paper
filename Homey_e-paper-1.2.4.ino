


#include "settings.h"

const char* ssid     = "YOUR SSID";
const char* password = "YOUR PASSWORD";
String lang = "EN"; // EN or FR


void setup() {
  Serial.begin(115200);
  preferences.begin("data", false);
  readData();
  setLanguage();
  esp_sleep_enable_timer_wakeup(timeToSleep * uS_TO_S_FACTOR);
  setupADC();
  wifi();
  homeySetup();
  firstStart();
  errorMessage();
  setupDisplay();
  getBatteryPercent();
  errorMessage();
}




void loop() {
  Homey.loop();
  errorMessage();
  goToDeepSleep();
  sendBatteryToHomey();
  //  if (setZonesSettings) {
  //    zonesSettings();
  //    setZonesSettings = false;
  //  }
  if ((millis() - currentMillisZonesSettings) >= intervalZonesSettings) {
    currentMillisZonesSettings = millis();
    zonesSettings();

  }
  if (!paperScreenOnline) {
    paperScreenOnline = Homey.trigger("paperScreenOnline", "Paper Screen is Online");
  }
}
