//LCD HelloWorld
#include <LiquidCrystal.h>

LiquidCrystal lcd( 4, 6, 10, 11, 12, 13 );

void setup() {
  lcd.begin(16,2); //Width and Hight of LCD
  lcd.clear();
  lcd.setCursor(0,0); //Start position
  lcd.print("HelloWorld");
}

void loop() {
}
