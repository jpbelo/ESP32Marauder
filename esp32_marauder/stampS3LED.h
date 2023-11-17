#ifndef stampS3LED_h
#define stampS3LED_h

#include "configs.h"
#include "settings.h"

#include <Arduino.h>
#include <FastLED.h>

// #define STAMP_S3_LED_PIN 21
// #define NUM_LEDS 1

// CRGB leds[NUM_LEDS];

extern Settings settings_obj;

class stampS3LED {

  public:
    void RunSetup();
    void main();
    void attackLED();
    void sniffLED();
    void offLED();
};

#endif
