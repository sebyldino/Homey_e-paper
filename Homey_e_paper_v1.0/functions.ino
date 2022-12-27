

void getBatteryPercent() {
  uint16_t v = analogRead(BATT_PIN);
  float battery_voltage = ((float)v / 4095.0) * 2.0 * 3.3 * (vref / 1000.0);
  voltage = String(battery_voltage) + "V";
  b = battery_voltage * 100; //To get accuratie value
  batteryPercent = String(map(b, 300, 420, 0, 100)); //320 for 3.2V and 420 for 4.2V
  if ((batteryPercent.toInt() >= 100)  && (batteryPercent.toInt() <= 110)) batteryPercent = "100"; //get 10% error to batterie voltage
  if (batteryPercent.toInt() >= 101) writeln((GFXfont *)&FiraSans, "✓", &batteryValue_x, &batteryValue_y, NULL);
  else  writeln((GFXfont *)&OpenSans10, (batteryPercent + "%").c_str(), &batteryValue_x, &batteryValue_y, NULL);
}




void screenRepair() { //if screen show previous images, call this function in a flow with "Screen_Repair" action
  int32_t i = 0;
  epd_init();
  Rect_t area = epd_full_screen();
  epd_poweron();
  delay(10);
  epd_clear();
  for (i = 0; i < 20; i++)
  {
    epd_push_pixels(area, 50, 0);
    delay(500);
  }
  epd_clear();
  for (i = 0; i < 40; i++)
  {
    epd_push_pixels(area, 50, 1);
    delay(500);
  }
  epd_clear();
  epd_poweroff_all();
  ESP.restart();
}


void weatherIconNumber() {
  if (weather == "Ciel clair")          weatherIcon = 1; //clear
  if (weather == "Deux")          weatherIcon = 2; //clear night
  if (weather == "Ciel couvert")          weatherIcon = 3; //cloudy
   if (weather == "nuageux")          weatherIcon = 3; //cloudy
  if (weather == "Quatre")          weatherIcon = 4; //fog
  if (weather == "Bruine")          weatherIcon = 5; //hail
  if (weather == "Nuages fragmentés")     weatherIcon = 6; //partly cloudy
  if (weather == "Pluie légère")          weatherIcon = 7; //rainy
  if (weather == "Pluie modérée")          weatherIcon = 7; //rainy  
  if (weather == "Pluie de forte intensité")          weatherIcon = 7; //rainy
  if (weather == "Bruine de forte intensité")          weatherIcon = 7; //rainy
  if (weather == "Sept sept")          weatherIcon = 8; //rainy cloudy
  if (weather == "Huit huit")          weatherIcon = 9; //snowy
  if (weather == "Neuf neuf")          weatherIcon = 10; //storm
  if (weather == "Dix dix")          weatherIcon = 11; //storm rainy
  if (weather == "Onze")          weatherIcon = 12; //two clouds
  if (weather == "Douze")          weatherIcon = 13; //windy
}


/*
Open Weather Map items:

-Cloudy
-Rainy
-Clear
-Drizzly
-Haze
-Misty
-Fog
-Thunderstorm
-Snow
-Extreme
*/


void deviceIconNumber() {
  if (deviceIconChoose == "door") deviceIcon = 0;
  if (deviceIconChoose == "garage door") deviceIcon = 1;
  if (deviceIconChoose == "gate") deviceIcon = 2;
  if (deviceIconChoose == "humidity") deviceIcon = 3;
  if (deviceIconChoose == "light") deviceIcon = 4;
  if (deviceIconChoose == "logo") deviceIcon = 5;
  if (deviceIconChoose == "pressure") deviceIcon = 6;
  if (deviceIconChoose == "roller shutter") deviceIcon = 7;
  if (deviceIconChoose == "thermometer") deviceIcon = 8;
  if (deviceIconChoose == "window") deviceIcon = 9;
  if (deviceIconChoose == "wireless plug") deviceIcon = 10;
  if (deviceIconChoose == "lock") deviceIcon = 11;
  if (deviceIconChoose == "bathroom") deviceIcon = 12;
  if (deviceIconChoose == "bedroom") deviceIcon = 13;
  if (deviceIconChoose == "fan") deviceIcon = 14;
  if (deviceIconChoose == "garden") deviceIcon = 15;
  if (deviceIconChoose == "heater") deviceIcon = 16;
  if (deviceIconChoose == "home") deviceIcon = 17;
  if (deviceIconChoose == "kitchen") deviceIcon = 18;
  if (deviceIconChoose == "lounge") deviceIcon = 19;
  if (deviceIconChoose == "power counter") deviceIcon = 20;
  if (deviceIconChoose == "stove") deviceIcon = 21;
  if (deviceIconChoose == "swimming pool") deviceIcon = 22;
  if (deviceIconChoose == "water counter") deviceIcon = 23;
}
