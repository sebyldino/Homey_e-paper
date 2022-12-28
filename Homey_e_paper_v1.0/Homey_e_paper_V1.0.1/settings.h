/*================================================================================================================================================
                                                                         LANGUAGE
  ==============================================================================================================================================*/
String lang;
String LIGHT_ON;
String LIGHT_OFF;
String OPEN;
String CLOSE;
String LOCK;
String UNLOCK;
String ON;
String OFF;
String ARMED;
String PARTIALLY_ARMED;
String DISARMED;
String NAME_Z1;
String NAME_Z2;
String NAME_Z3;
String NAME_Z4;
String VALUE_Z1;
String VALUE_Z2;
String VALUE_Z3;
String VALUE_Z4;
String WEATHER;
String HEATER_ON;
String HEATER_OFF;

int vref = 1100;
String voltage;
String batteryPercent;
int b;

int counter = 0;//Counter to check if Homey Send all action before enter in deep Sleep. There are 16 actions

bool paperScreenOnline = false;

String deviceIconChooseZ1;
String deviceIconChooseZ2;
String deviceIconChooseZ3;
String deviceIconChooseZ4;

String lastWeatherIcon;
String lastWeatherText;
String lastTemperature;

String typeZ1;
String typeZ2;
String typeZ3;
String typeZ4;

String nameZ1;
String nameZ2;
String nameZ3;
String nameZ4;

String valueZ1;
String valueZ2; 
String valueZ3;
String valueZ4;

String value2Z1;
String value2Z2;
String value2Z3; 
String value2Z4;


const char *headerText;
const char *headerValue;

//define weather icon
const uint8_t *weatherIconList[] = {logoSmall_data, clear_data, clearNight_data, cloudy_data, fog_data, hail_data, partlyCloudy_data, rainy_data,
                                    rainyCloudy_data, snowy_data, storm_data, stormRainy_data, twoClouds_data, windy_data
                                   };
int weatherIcon;
String weather = "Weather";

//define device icon
const uint8_t *deviceIconList[] = {door_data, garageDoor_data, gate_data, humidity_data, light_data, logo_data,
                                   pressure_data, rollerShutter_data, thermometer_data, window_data, wirelessPlug_data, lock_data,
                                   bathroom_data, bedroom_data, fan_data, garden_data, heater_data, home_data, kitchen_data, lounge_data,
                                   powerCounter_data, stove_data, swimmingPool_data, waterCounter_data
                                  };
int deviceIcon;
String deviceIconChoose;


int timeToSleep; //Time in seconds of deep sleep mode, default 3 min
#define uS_TO_S_FACTOR 1000000ULL  // Conversion factor for micro seconds to seconds 

unsigned long currentMillis;
int waitTime = 60000; // wait 1 minute to print all values before entering in deep sleep
bool goToDeepSleep = false;




/*================================================================================================================================================
                                                                          PINS DEFINE
  ==============================================================================================================================================*/




#ifndef PINS_H_
#define PINS_H_

#if defined(CONFIG_IDF_TARGET_ESP32)
#define T5_47
#elif defined(CONFIG_IDF_TARGET_ESP32S3)
#define T5_47_PLUS
#else
#error "Unsupported board"
#endif

#if defined(T5_47)
#define BUTTON_1  (34)
#define BUTTON_2  (35)
#define BUTTON_3  (39)

#define BATT_PIN  (36)

#define SD_MISO   (12)
#define SD_MOSI   (13)
#define SD_SCLK   (14)
#define SD_CS     (15)

#define TOUCH_SCL (14)
#define TOUCH_SDA (15)
#define TOUCH_INT (13)

#define GPIO_MISO (12)
#define GPIO_MOSI (13)
#define GPIO_SCLK (14)
#define GPIO_CS   (15)
#elif defined(T5_47_PLUS)
#define BUTTON_1   (21)

#define BATT_PIN   (14)

#define SD_MISO    (16)
#define SD_MOSI    (15)
#define SD_SCLK    (11)
#define SD_CS      (42)

#define TOUCH_SCL  (17)
#define TOUCH_SDA  (18)
#define TOUCH_INT  (47)

#define GPIO_MISO  (45)
#define GPIO_MOSI  (10)
#define GPIO_SCLK  (48)
#define GPIO_CS    (39)
#endif

#endif
