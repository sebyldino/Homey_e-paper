

const char* ssid     = "YOUR SSID";
const char* password = "YOUR PASSWORD";




#ifndef BOARD_HAS_PSRAM
#error "Please enable PSRAM in 'Tools > PSRAM!!!'"
#endif
#include <WiFi.h>
#include <WiFiClient.h>
#include <Homey.h>
#include <Arduino.h>
//#include <FS.h>
//#include <SPI.h>
//#include <SD.h>
#include "epd_driver.h"
#include "esp_adc_cal.h"
#include "imagesAndFonts.h"
#include "settings.h"
#include "zoneSettings.h"
#include <Preferences.h>
Preferences preferences;




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
  if (setZonesSettings) {
    zonesSettings();
    setZonesSettings = false;
  }
  if (!paperScreenOnline) {
    paperScreenOnline = Homey.trigger("paperScreenOnline", "Paper Screen is Online");
  }
    if(!batterySended){
  Homey.setCapabilityValue("measure_battery", (int) batteryState);
  batterySended = true;
  }
  
  if((millis() - currentMillis) >= intervalSendBattery){
  Homey.setCapabilityValue("measure_battery", (int) batteryState);
  currentMillis = millis();
  }
}
