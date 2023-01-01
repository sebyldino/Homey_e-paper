
/*
                                      960 pixels
       ========================================================================
      ||                                HEADER                                ||
      ||______________________________________________________________________||
      ||                                  |                                   ||
      ||                                  |                                   ||
      ||             ZONE 1               |               ZONE 3              ||
      ||                                  |                                   ||
      ||                                  |                                   ||  540 pixels
      ||----------------------------------|-----------------------------------||
      ||                                  |                                   ||
      ||                                  |                                   ||
      ||             ZONE 2               |               ZONE 4              ||
      ||                                  |                                   ||
      ||                                  |                                   ||
       ========================================================================

*/

/*================================================================================================================================================
                                                                          BATTERY & LAST UPDATE
  ==============================================================================================================================================*/
int batteryValue_x = 880;
int batteryValue_y = 25;
int updateValue_x = 880;
int updateValue_y = 75;


Rect_t batteryIcon = {
  .x = 810,
  .y = 8,
  .width = battery_width,
  .height = battery_height,
};

Rect_t batteryValue = {
  .x = 880,
  .y = 0,
  .width = 80,
  .height = 40,
};

Rect_t batteryAreaPlug = {
  .x = 810,
  .y = 8,
  .width = batteryPlugUSB_width,
  .height = batteryPlugUSB_height,
};

Rect_t updateIcon = {
  .x = 830,
  .y = 50,
  .width = update35_width,
  .height = update35_height,
};

Rect_t updateValue = {
  .x = 880,
  .y = 55,
  .width = 65,
  .height = 25,
};


/*================================================================================================================================================
                                                                          HEADER
  ==============================================================================================================================================*/
int headerText_x = 150;
int headerText_y = 65;
int headerValue_x = 650;
int headerValue_y = 65;


Rect_t headerBar = {
  .x = 0,
  .y = 100,
  .width = line960x3_width,
  .height = line960x3_height,
};

Rect_t headerIcon = {  //Faire une icone de 90x90 pixels
  .x = 30,
  .y = 5,
  .width = 90,
  .height = 90,
};

Rect_t headerClearIcon = {
  .x = 20,
  .y = 0,
  .width = 120,
  .height = 96,
};

Rect_t headerClearText = {
  .x = 135,
  .y = 15,
  .width = 500,
  .height = 75,
};

Rect_t headerClearValue = {
  .x = 645,
  .y = 15,
  .width = 155,
  .height = 75,
};
/*================================================================================================================================================
                                                                          ZONE BAR
  ==============================================================================================================================================*/
Rect_t backgroundArea = {
  .x = 0,
  .y = 0,
  .width = backgroundH4_width,
  .height = backgroundH4_height,
};

Rect_t batteryBar = {
  .x = 810,
  .y = 0,
  .width = line100x2_width,
  .height = line100x2_height,
};

Rect_t horizontalZoneBar = {
  .x = 0,
  .y = 320,
  .width = line960x1_width,
  .height = line960x1_height,
};

Rect_t verticalZoneBar = {  //Faire une icone de 90x90 pixels
  .x = 480,
  .y = 100,
  .width = line440x1_width,
  .height = line440x1_height,
};


/*================================================================================================================================================
                                                                          ZONE 1
  ==============================================================================================================================================*/
int nameZ1_x = 170;
int nameZ1_y = 196;
int valueZ1_x = 170;
int valueZ1_y = 266;

Rect_t iconZ1 = {
  .x = 30,
  .y = 156,
  .width = logo_width,
  .height = logo_height,
};

Rect_t iconClearZ1 = {
  .x = 23,
  .y = 151,
  .width = 135,
  .height = 133,
};

Rect_t nameZ1area = {
  .x = 160,
  .y = 146,
  .width = 310,
  .height = 60,
};

Rect_t valueZ1area = {
  .x = 160,
  .y = 216,
  .width = 310,
  .height = 60,
};


/*================================================================================================================================================
                                                                         ZONE 2
  ==============================================================================================================================================*/
int nameZ2_x = 170;
int nameZ2_y = 402;
int valueZ2_x = 170;
int valueZ2_y = 472;


Rect_t iconZ2 = {
  .x = 30,
  .y = 362,
  .width = logo_width,
  .height = logo_height,
};

Rect_t iconClearZ2 = {
  .x = 23,
  .y = 357,
  .width = 135,
  .height = 133,
};

Rect_t nameZ2area = {
  .x = 160,
  .y = 352,
  .width = 310,
  .height = 60,
};

Rect_t valueZ2area = {
  .x = 160,
  .y = 422,
  .width = 310,
  .height = 60,
};
/*================================================================================================================================================
                                                                         ZONE 3
  ==============================================================================================================================================*/
int nameZ3_x = 650;
int nameZ3_y = 196;
int valueZ3_x = 650;
int valueZ3_y = 266;


Rect_t iconZ3 = {
  .x = 510,
  .y = 156,
  .width = logo_width,
  .height = logo_height,
};

Rect_t iconClearZ3 = {
  .x = 503,
  .y = 151,
  .width = 135,
  .height = 133,
};

Rect_t nameZ3area = {
  .x = 640,
  .y = 146,
  .width = 310,
  .height = 60,
};

Rect_t valueZ3area = {
  .x = 640,
  .y = 216,
  .width = 310,
  .height = 60,
};
/*================================================================================================================================================
                                                                         ZONE 4
  ==============================================================================================================================================*/
int nameZ4_x = 650;
int nameZ4_y = 402;
int valueZ4_x = 650;
int valueZ4_y = 472;

Rect_t iconZ4 = {
  .x = 510,
  .y = 362,
  .width = logo_width,
  .height = logo_height,
};

Rect_t iconClearZ4 = {
  .x = 503,
  .y = 357,
  .width = 135,
  .height = 133,
};

Rect_t nameZ4area = {
  .x = 640,
  .y = 352,
  .width = 310,
  .height = 60,
};

Rect_t valueZ4area = {
  .x = 640,
  .y = 422,
  .width = 310,
  .height = 60,
};
