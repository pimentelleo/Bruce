/*     This file has the purpose to verify the existence of some default flags      */
/*                Only PreCompiler code must be set in this file                    */

#ifndef LED
  #define LED -1
#endif
#ifndef LED_ON
  #define LED_ON 1
#endif  
#ifndef LED_OFF
  #define LED_OFF 0
#endif  
#ifndef FP
  #define FP 1
#endif  
#ifndef FM
  #define FM 2
#endif  
#ifndef FG
  #define FG 3
#endif  
#ifndef ROTATION
  #define ROTATION 1
#endif  
#ifndef	WIDTH
  #define WIDTH 240
#endif  
#ifndef	HEIGHT
  #define HEIGHT 135
#endif  
#ifndef GROVE_SDA
  #define GROVE_SDA -1
#endif  
#ifndef GROVE_SCL
  #define GROVE_SCL -1
#endif  

// Default initializers
#ifndef TFT_CS
  #define TFT_CS -1
#endif
#ifndef TFT_RST
  #define TFT_RST -1
#endif
#ifndef TFT_SCLK
  #define TFT_SCLK -1
#endif
#ifndef TFT_MOSI
  #define TFT_MOSI -1
#endif
#ifndef TFT_BL
  #define TFT_BL -1
#endif
#ifndef TOUCH_CS
  #define TOUCH_CS -1
#endif
#ifndef SDCARD_MOSI
  #define SDCARD_MOSI -1
#endif
#ifndef SDCARD_MISO 
  #define SDCARD_MISO  -1
#endif
#ifndef SDCARD_CS
  #define SDCARD_CS -1
#endif
#ifndef SDCARD_SCK
  #define SDCARD_SCK -1
#endif
//This one sets an array to set create the options to devices that have all GPIO available to use (except tft and SD Card)
#define GPIO_PIN_LIST { \
    {"GPIO 1", 1}, {"GPIO 2", 2}, {"GPIO 3", 3}, {"GPIO 4", 4}, {"GPIO 6", 6}, {"GPIO 7", 7}, {"GPIO 8", 8}, {"GPIO 9", 9}, {"GPIO 10", 10}, \
    {"GPIO 11", 11}, {"GPIO 16", 16}, {"GPIO 17", 17}, {"GPIO 18", 18}, {"GPIO 19", 19}, {"GPIO 20", 20}, {"GPIO 21", 21}, {"GPIO 22", 22}, \
    {"GPIO 23", 23}, {"GPIO 24", 24}, {"GPIO 25", 25}, {"GPIO 28", 28}, {"GPIO 29", 29}, {"GPIO 30", 30}, {"GPIO 31", 31}, {"GPIO 32", 32}, \
    {"GPIO 33", 33}, {"GPIO 34", 34}, {"GPIO 35", 35}, {"GPIO 37", 37}, {"GPIO 38", 38}, {"GPIO 39", 39}, {"GPIO 40", 40}, {"GPIO 41", 41}, \
    {"GPIO 42", 42}, {"GPIO 43", 43}, {"GPIO 44", 44} \
}
#ifdef ALLOW_ALL_GPIO_FOR_IR_RF
    #undef IR_TX_PINS
    #undef IR_RX_PINS
    #undef RF_TX_PINS
    #undef RF_RX_PINS

    #define IR_TX_PINS GPIO_PIN_LIST
    #define IR_RX_PINS GPIO_PIN_LIST
    #define RF_TX_PINS GPIO_PIN_LIST
    #define RF_RX_PINS GPIO_PIN_LIST
#endif
#if !defined(IR_TX_PINS) || !defined(IR_RX_PINS) || !defined(RF_TX_PINS) || !defined(RF_RX_PINS)
    #define IR_TX_PINS GPIO_PIN_LIST
    #define IR_RX_PINS GPIO_PIN_LIST
    #define RF_TX_PINS GPIO_PIN_LIST
    #define RF_RX_PINS GPIO_PIN_LIST
#endif