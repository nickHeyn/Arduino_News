#ifndef Display_h
#define Display_h
#include "Arduino.h"
#include <LiquidCrystal.h>

class Display {
  public:
    //Display(int rsPin, int enabledPin, int d4Pin, int d5Pin, int d6Pin, int d7Pin);

    Display(int rsPin, int enabledPin, int d4Pin, int d5Pin, int d6Pin, int d7Pin) : _lcd(rsPin, enabledPin, d4Pin, d5Pin, d6Pin, d7Pin) {

    }

    void showText(String text);

    void setup();

  private: 
    LiquidCrystal _lcd;
    int _rsPin, _enabledPin, _d4Pin, _d5Pin, _d6Pin, _d7Pin;
    
};
#endif