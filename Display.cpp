#include "Arduino.h"
#include "Display.h"
#include <LiquidCrystal.h>

//Display::Display(int rsPin, int enabledPin, int d4Pin, int d5Pin, int d6Pin, int d7Pin) {
      //LiquidCrystal lcd(rsPin, enabledPin, d4Pin, d5Pin, d6Pin, d7Pin);
      //_lcd = &lcd;
//}

void Display::setup()
 {
   _lcd.begin(16, 2);
   showText("hello there");
 }

void Display::showText(String text) {
  _lcd.print(text);
}

//LiquidCrystal Display::getLcdController() {
  //return *_lcd;
//}