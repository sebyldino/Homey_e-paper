
#define uS_TO_S_FACTOR 1000000ULL  // Conversion factor for micro seconds to seconds 

unsigned long currentMillis = 5000; 
int intervalSendBattery = 60000;//1 minute
bool batterySended = false;

unsigned long currentMillisZonesSettings;
int intervalZonesSettings = 2000;
bool customWeatherIcon; 
String customWeatherIconChoose;


bool serialDebug = true;
bool error = false;
bool setZonesSettings = true;
bool sendErrorToHomey = false;
bool firstStartTime = false;
bool paperScreenOnline = false;
bool deepSleepEnable;
bool batteryIconShowPercent;

bool weatherIconError = true;
bool weatherTextError = true; 
bool weatherValueError = true;
bool lastUpdateError = true;

bool iconZ1Error = true;
bool iconZ2Error = true;
bool iconZ3Error = true;
bool iconZ4Error = true;
bool iconZ5Error = true;
bool iconZ6Error = true;

bool nameZ1Error = true;
bool nameZ2Error = true;
bool nameZ3Error = true;
bool nameZ4Error = true;
bool nameZ5Error = true;
bool nameZ6Error = true;

bool valueZ1Error = true;
bool valueZ2Error = true;
bool valueZ3Error = true;
bool valueZ4Error = true;
bool valueZ5Error = true;
bool valueZ6Error = true;

int vref = 1100;
int b;
int counter = 0;//Counter to check if Homey Send all actions before enter in deep Sleep.
int weatherIcon;
int deviceIcon;
int waitTimeWifi = 30 * 1000; // wait 30 seconds try to connect to wifi before get an error
int waitTimeHomey = 2 * 60 * 1000; // wait 1 minute try to connect to Homey before get an error
int waitTimeCounterAction = 3 * 60 * 1000; // wait 3 minutes, if ESP not received all Homey value before get an error
int timeToSleep;
int batteryState;

String deviceIconChoose;
String weather = "Weather";
String displayMode;
String voltage;
String batteryPercent;

String deviceIconChooseZ1;
String deviceIconChooseZ2;
String deviceIconChooseZ3;
String deviceIconChooseZ4;
String deviceIconChooseZ5;
String deviceIconChooseZ6;

String lastWeatherIcon;
String lastWeatherText;
String lastTemperature;

String typeZ1;
String typeZ2;
String typeZ3;
String typeZ4;
String typeZ5;
String typeZ6;

String nameZ1;
String nameZ2;
String nameZ3;
String nameZ4;
String nameZ5;
String nameZ6;

String valueZ1;
String valueZ2;
String valueZ3;
String valueZ4;
String valueZ5;
String valueZ6;

String value2Z1;
String value2Z2;
String value2Z3;
String value2Z4;
String value2Z5;
String value2Z6;


const char *headerText;
const char *headerValue;

//define weather icon
const uint8_t *weatherIconList[] = {logoSmall_data, clear_data, clearNight_data, cloudy_data, fog_data, hail_data, partlyCloudy_data, rainy_data,
                                    rainyCloudy_data, snowy_data, storm_data, stormRainy_data, twoClouds_data, windy_data
                                   };


//define device icon 120x120 px
const uint8_t *deviceIconList[] = {door_data, garageDoor_data, gate_data, humidity_data, light_data, logo_data,
                                   pressure_data, rollerShutter_data, thermometer_data, window_data, wirelessPlug_data, lock_data,
                                   bathroom_data, bedroom_data, fan_data, garden_data, heater_data, home_data, kitchen_data, lounge_data,
                                   powerCounter_data, stove_data, swimmingPool_data, waterCounter_data, alarm_data, alarm2_data,
                                   batteryH_data, batteryV_data, car_data, car2_data, climate_data, co_data, co2_data, smokeSensor_data, waterPlant_data,
                                   waterSensor_data, waterSensor2_data, wifi_data, wireless_data, printer_data, lux_data
                                  };
//define device icon 80x80 px
const uint8_t *deviceIconList80[] = {door80_data, garageDoor80_data, gate80_data, humidity80_data, light80_data, logo80_data,
                                     pressure80_data, rollerShutter80_data, thermometer80_data, window80_data, wirelessPlug80_data, lock80_data,
                                     bathroom80_data, bedroom80_data, fan80_data, garden80_data, heater80_data, home80_data, kitchen80_data, lounge80_data,
                                     powerCounter80_data, stove80_data, swimmingPool80_data, waterCounter80_data, alarm80_data, alarm280_data,
                                     batteryH80_data, batteryV80_data, car80_data, car280_data, climate80_data, co80_data, co280_data, smokeSensor80_data, waterPlant80_data,
                                     waterSensor80_data, waterSensor280_data, wifi80_data, wireless80_data, printer80_data, lux80_data
                                    };

/*================================================================================================================================================
                                                                         LANGUAGE
  ==============================================================================================================================================*/
String lang;
String ERROR_MESSAGE;
String ERROR_MESSAGE_2;
String ERROR_MESSAGE_3;
String ERROR_COUNTER;
String ERROR_WIFI;
String ERROR_SSID;
String ERROR_PASSWORD;
String ERROR_CONNECT_HOMEY;
String ERROR_TIME_TO_SLEEP;
String ERROR_TIME_TO_SLEEP_2;
String ERROR_TIME_TO_SLEEP_3;
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
String NAME_Z5;
String NAME_Z6;
String VALUE_Z1;
String VALUE_Z2;
String VALUE_Z3;
String VALUE_Z4;
String VALUE_Z5;
String VALUE_Z6;
String WEATHER;
String HEATER_ON;
String HEATER_OFF;
String WET;
String DRY;
String DETECTOR_ON;
String DETECTOR_OFF;
String PRESENT;
String ABSENT;


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
