
/*

                             IF DISPLAY MODE "horizontal 6"


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
                                                                  ERROR MESSAGE
  ==============================================================================================================================================*/
int errorMessage_x = 20;
int errorMessage_y = 280;
int errorSsid_x = 20;
int errorSsid_y = 325;
int errorPassword_x = 20;
int errorPassword_y = 370;

Rect_t warningIcon = {
  .x = 430,
  .y = 100,
  .width = warning_width,
  .height = warning_height,
};

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
  .x = 812,
  .y = 8,
  .width = batteryPlugUSB_width,
  .height = batteryPlugUSB_height,
};


Rect_t sleepIcon = {
  .x = 840,
  .y = 35,
  .width = sleep_width,
  .height = sleep_height,
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


Rect_t customWeatherIconArea = {
  .x = 30,
  .y = 10,
  .width = 80,
  .height = 80,
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
  .height = 94,
};

Rect_t headerClearText = {
  .x = 135,
  .y = 15,
  .width = 500,
  .height = 75,
};

Rect_t headerClearValue = {
  .x = 640,
  .y = 15,
  .width = 159,
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

/*================================================================================================================================================
                                                                          ZONE 1
  ==============================================================================================================================================*/
int nameZ1_x = 170;
int nameZ1_y = 196;
int valueZ1_x = 170;
int valueZ1_y = 266;

Rect_t higherAreaZ1 = {
  .x = 75, // +45
  .y = 116, //-40
  .width = up_width,
  .height = up_height,
};

Rect_t lowerAreaZ1 = {
  .x = 75, // +45
  .y = 287, //+131
  .width = down_width,
  .height = down_height,
};


Rect_t clearHigherAreaZ1 = {
  .x = 66,
  .y = 111,
  .width = 50,
  .height = 35,
};

Rect_t clearLowerAreaZ1 = {
  .x = 66,
  .y = 282,
  .width = 50,
  .height = 35,
};





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


Rect_t higherAreaZ2 = {
  .x = 75, // +45
  .y = 330, //-40
  .width = up_width,
  .height = up_height,
};

Rect_t lowerAreaZ2 = {
  .x = 75, // +45
  .y = 493, //+131
  .width = down_width,
  .height = down_height,
};


Rect_t clearHigherAreaZ2 = {
  .x = 66,//-9
  .y = 325,//-5
  .width = 50,
  .height = 33,
};

Rect_t clearLowerAreaZ2 = {
  .x = 66,//-9
  .y = 488,//-5
  .width = 50,
  .height = 35,
};



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


Rect_t higherAreaZ3 = {
  .x = 555, // +45
  .y = 116, //-40
  .width = up_width,
  .height = up_height,
};

Rect_t lowerAreaZ3 = {
  .x = 555, // +45
  .y = 287, //+131
  .width = down_width,
  .height = down_height,
};


Rect_t clearHigherAreaZ3 = {
  .x = 546,//-9
  .y = 111,//-5
  .width = 50,
  .height = 35,
};

Rect_t clearLowerAreaZ3 = {
  .x = 546,//-9
  .y = 282,//-5
  .width = 50,
  .height = 35,
};



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



Rect_t higherAreaZ4 = {
  .x = 552, // +45
  .y = 330, //-40
  .width = up_width,
  .height = up_height,
};

Rect_t lowerAreaZ4 = {
  .x = 555, // +45
  .y = 492, //+131
  .width = down_width,
  .height = down_height,
};


Rect_t clearHigherAreaZ4 = {
  .x = 543,//-9
  .y = 325,//-5
  .width = 50,
  .height = 33,
};

Rect_t clearLowerAreaZ4 = {
  .x = 546,//-9
  .y = 487,//-5
  .width = 50,
  .height = 35,
};



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
/*

                             IF DISPLAY MODE "horizontal 6"


                                      960 pixels
       ========================================================================
      ||                                HEADER                 |   Battery    ||
      ||_______________________________________________________|_Last_ Update_||
      ||                      |                        |                      ||
      ||                      |                        |                      ||
      ||       ZONE 1         |        ZONE 3          |        ZONE 5        ||
      ||                      |                        |                      ||
      ||                      |                        |                      ||  540 pixels
      ||----------------------|------------------------|----------------------||
      ||                      |                        |                      ||
      ||                      |                        |                      ||
      ||        ZONE 2        |         ZONE 4         |        ZONE 6        ||
      ||                      |                        |                      ||
      ||                      |                        |                      ||
       ========================================================================

*/
/*================================================================================================================================================
                                                                          ZONE 1_H6
  ==============================================================================================================================================*/
int nameZ1_H6_x = 110;
int nameZ1_H6_y = 196;
int valueZ1_H6_x = 110;
int valueZ1_H6_y = 266;

Rect_t higherAreaZ1_H6 = {
  .x = 32, // +27
  .y = 136, //-40
  .width = up_width,
  .height = up_height,
};

Rect_t lowerAreaZ1_H6 = {
  .x = 32, // +27
  .y = 266, //+90
  .width = down_width,
  .height = down_height,
};


Rect_t clearHigherAreaZ1_H6 = {
  .x = 27,
  .y = 131,
  .width = 50,
  .height = 40,
};

Rect_t clearLowerAreaZ1_H6 = {
  .x = 27,
  .y = 261,
  .width = 50,
  .height = 40,
};

Rect_t iconZ1_H6 = {
  .x = 5,
  .y = 176,
  .width = logo80_width,
  .height = logo80_height,
};

Rect_t iconClearZ1_H6 = {
  .x = 0,
  .y = 173,
  .width = 95,
  .height = 95,
};

Rect_t nameZ1_H6area = {
  .x = 101,
  .y = 166,
  .width = 200,
  .height = 40,
};

Rect_t valueZ1_H6area = {
  .x = 101,
  .y = 236,
  .width = 200,
  .height = 40,
};


/*================================================================================================================================================
                                                                         ZONE 2_H6
  ==============================================================================================================================================*/
int nameZ2_H6_x = 110;
int nameZ2_H6_y = 402;
int valueZ2_H6_x = 110;
int valueZ2_H6_y = 472;

Rect_t higherAreaZ2_H6 = {
  .x = 32, // +27
  .y = 352, //-40
  .width = up_width,
  .height = up_height,
};

Rect_t lowerAreaZ2_H6 = {
  .x = 32, // +27
  .y = 482, //+90
  .width = down_width,
  .height = down_height,
};


Rect_t clearHigherAreaZ2_H6 = {
  .x = 27,
  .y = 347,
  .width = 50,
  .height = 40,
};

Rect_t clearLowerAreaZ2_H6 = {
  .x = 27,
  .y = 477,
  .width = 50,
  .height = 40,
};


Rect_t iconZ2_H6 = {
  .x = 5,
  .y = 392,
  .width = logo80_width,
  .height = logo80_height,
};

Rect_t iconClearZ2_H6 = {
  .x = 0,
  .y = 387,
  .width = 95,
  .height = 95,
};

Rect_t nameZ2_H6area = {
  .x = 101,
  .y = 372,
  .width = 200,
  .height = 40,
};

Rect_t valueZ2_H6area = {
  .x = 101,
  .y = 442,
  .width = 200,
  .height = 40,
};
/*================================================================================================================================================
                                                                         ZONE 3_H6
  ==============================================================================================================================================*/
int nameZ3_H6_x = 440;
int nameZ3_H6_y = 196;
int valueZ3_H6_x = 440;
int valueZ3_H6_y = 266;


Rect_t higherAreaZ3_H6 = {
  .x = 360, // +27
  .y = 136, //-40
  .width = up_width,
  .height = up_height,
};

Rect_t lowerAreaZ3_H6 = {
  .x = 360, // +27
  .y = 266, //+90
  .width = down_width,
  .height = down_height,
};


Rect_t clearHigherAreaZ3_H6 = {
  .x = 351,
  .y = 131,
  .width = 50,
  .height = 40,
};

Rect_t clearLowerAreaZ3_H6 = {
  .x = 351,
  .y = 261,
  .width = 50,
  .height = 40,
};


Rect_t iconZ3_H6 = {
  .x = 333,
  .y = 176,
  .width = logo80_width,
  .height = logo80_height,
};

Rect_t iconClearZ3_H6 = {
  .x = 330,
  .y = 173,
  .width = 95,
  .height = 95,
};

Rect_t nameZ3_H6area = {
  .x = 430,
  .y = 166,
  .width = 200,
  .height = 40,
};

Rect_t valueZ3_H6area = {
  .x = 430,
  .y = 236,
  .width = 200,
  .height = 40,
};
/*================================================================================================================================================
                                                                         ZONE 4_H6
  ==============================================================================================================================================*/
int nameZ4_H6_x = 440;
int nameZ4_H6_y = 402;
int valueZ4_H6_x = 440;
int valueZ4_H6_y = 472;


Rect_t higherAreaZ4_H6 = {
  .x = 360, // +27
  .y = 352, //-40
  .width = up_width,
  .height = up_height,
};

Rect_t lowerAreaZ4_H6 = {
  .x = 360, // +27
  .y = 482, //+90
  .width = down_width,
  .height = down_height,
};


Rect_t clearHigherAreaZ4_H6 = {
  .x = 351,
  .y = 347,
  .width = 50,
  .height = 40,
};

Rect_t clearLowerAreaZ4_H6 = {
  .x = 351,
  .y = 477,
  .width = 50,
  .height = 40,
};


Rect_t iconZ4_H6 = {
  .x = 333,
  .y = 392,
  .width = logo80_width,
  .height = logo80_height,
};

Rect_t iconClearZ4_H6 = {
  .x = 330,
  .y = 387,
  .width = 95,
  .height = 95,
};

Rect_t nameZ4_H6area = {
  .x = 430,
  .y = 372,
  .width = 200,
  .height = 40,
};

Rect_t valueZ4_H6area = {
  .x = 430,
  .y = 442,
  .width = 200,
  .height = 40,
};
/*================================================================================================================================================
                                                                         ZONE 5_H6
  ==============================================================================================================================================*/
int nameZ5_H6_x = 750;
int nameZ5_H6_y = 196;
int valueZ5_H6_x = 750;
int valueZ5_H6_y = 266;


Rect_t higherAreaZ5_H6 = {
  .x = 680, // +27
  .y = 136, //-40
  .width = up_width,
  .height = up_height,
};

Rect_t lowerAreaZ5_H6 = {
  .x = 680, // +27
  .y = 266, //+90
  .width = down_width,
  .height = down_height,
};


Rect_t clearHigherAreaZ5_H6 = {
  .x = 671,
  .y = 131,
  .width = 50,
  .height = 40,
};

Rect_t clearLowerAreaZ5_H6 = {
  .x = 671,
  .y = 261,
  .width = 50,
  .height = 40,
};


Rect_t iconZ5_H6 = {
  .x = 653,
  .y = 176,
  .width = logo80_width,
  .height = logo80_height,
};

Rect_t iconClearZ5_H6 = {
  .x = 650,
  .y = 173,
  .width = 95,
  .height = 95,
};

Rect_t nameZ5_H6area = {
  .x = 744,
  .y = 166,
  .width = 200,
  .height = 40,
};

Rect_t valueZ5_H6area = {
  .x = 744,
  .y = 236,
  .width = 200,
  .height = 40,
};/*================================================================================================================================================
                                                                         ZONE 6_H6
  ==============================================================================================================================================*/
int nameZ6_H6_x = 750;
int nameZ6_H6_y = 402;
int valueZ6_H6_x = 750;
int valueZ6_H6_y = 472;



Rect_t higherAreaZ6_H6 = {
  .x = 680, // +27
  .y = 352, //-40
  .width = up_width,
  .height = up_height,
};

Rect_t lowerAreaZ6_H6 = {
  .x = 680, // +27
  .y = 482, //+90
  .width = down_width,
  .height = down_height,
};


Rect_t clearHigherAreaZ6_H6 = {
  .x = 671,
  .y = 347,
  .width = 50,
  .height = 40,
};

Rect_t clearLowerAreaZ6_H6 = {
  .x = 671,
  .y = 477,
  .width = 50,
  .height = 40,
};


Rect_t iconZ6_H6 = {
  .x = 653,
  .y = 392,
  .width = logo80_width,
  .height = logo80_height,
};

Rect_t iconClearZ6_H6 = {
  .x = 650,
  .y = 387,
  .width = 95,
  .height = 95,
};

Rect_t nameZ6_H6area = {
  .x = 744,
  .y = 372,
  .width = 200,
  .height = 40,
};

Rect_t valueZ6_H6area = {
  .x = 744,
  .y = 442,
  .width = 200,
  .height = 40,
};
