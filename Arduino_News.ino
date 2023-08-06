#include "Display.h"
#include <LiquidCrystal.h>
Display display(12, 11, 5, 4, 3, 2);

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  display.setup();

}

void loop() {
  // put your main code here, to run repeatedly:

}
