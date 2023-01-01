
const char* ssid     = "YOUR SSID";
const char* password = "YOUR PASSWORD";
bool deepSleepEnable;



#ifndef BOARD_HAS_PSRAM
#error "Please enable PSRAM in 'Tools > PSRAM!!!'"
#endif
#include <WiFi.h>
#include <WiFiClient.h>
#include <Homey.h>
#include <Arduino.h>
#include <FS.h>
#include <SPI.h>
#include <SD.h>
#include "epd_driver.h"
#include "esp_adc_cal.h"
#include "imagesAndFonts.h"
#include "settings.h"
#include "zoneSettings.h"
#include <Preferences.h>
Preferences preferences;




void setup() {
  Serial.begin(115200);
  delay(1000);
  preferences.begin("data", false);
  readData();
  delay(2000);
  setLanguage();
  esp_sleep_enable_timer_wakeup(timeToSleep * uS_TO_S_FACTOR);
  setupADC();
  wifi();
  homeySetup();
  setupDisplay();
  getBatteryPercent();
}




void loop() {
  Homey.loop();
  zonesSettings();
  if (!paperScreenOnline) {
    paperScreenOnline = Homey.trigger("paperScreenOnline", "Paper Screen is Online");
  }

  if (counter == 16) {
    Serial.println("Go to Deep Sleep");
    epd_poweroff();
    delay(500);
    esp_deep_sleep_start();  //ESP go into deep sleep mode
  }
}
