#include "stampS3LED.h"
#include <FastLED.h>

#define STAMP_S3_LED_PIN 21
#define NUM_LEDS 1

CRGB leds[NUM_LEDS];

void stampS3LED::RunSetup() {
  FastLED.addLeds<WS2812, STAMP_S3_LED_PIN, GRB>(leds, NUM_LEDS);

  leds[0] = CHSV(0, 255, 255);
  FastLED.show();
  delay(500);

  leds[0] = CHSV(0, 0, 255);
  FastLED.show();
  delay(500);

  leds[0] = CHSV(255, 0, 255);
  FastLED.show();

  // pinMode(B_PIN, OUTPUT);
  // pinMode(G_PIN, OUTPUT);
  // pinMode(R_PIN, OUTPUT);

  // if (!settings_obj.loadSetting<bool>("EnableLED")) {
  //   digitalWrite(B_PIN, HIGH);
  //   digitalWrite(G_PIN, HIGH);
  //   digitalWrite(R_PIN, HIGH);
  //   return;
  // }
    
  // delay(50);

  // digitalWrite(B_PIN, LOW);
  // delay(500);
  // digitalWrite(B_PIN, HIGH);
  // digitalWrite(G_PIN, LOW);
  // delay(500);
  // digitalWrite(G_PIN, HIGH);
  // digitalWrite(R_PIN, LOW);
  // delay(500);
  // digitalWrite(R_PIN, HIGH);
}

void stampS3LED::attackLED() {
  // if (!settings_obj.loadSetting<bool>("EnableLED"))
  //   return;
    
  // digitalWrite(B_PIN, HIGH);
  // digitalWrite(G_PIN, HIGH);
  // digitalWrite(R_PIN, HIGH); 
  // delay(10);
  // digitalWrite(R_PIN, LOW);
}

void stampS3LED::sniffLED() {
  // if (!settings_obj.loadSetting<bool>("EnableLED"))
  //   return;
    
  // digitalWrite(B_PIN, HIGH);
  // digitalWrite(G_PIN, HIGH);
  // digitalWrite(R_PIN, HIGH);
  // delay(10);
  // digitalWrite(B_PIN, LOW);
}

void stampS3LED::offLED() {
  // if (!settings_obj.loadSetting<bool>("EnableLED"))
  //   return;
    
  // digitalWrite(B_PIN, HIGH);
  // digitalWrite(G_PIN, HIGH);
  // digitalWrite(R_PIN, HIGH);
}

void stampS3LED::main() {
  // do nothing
}