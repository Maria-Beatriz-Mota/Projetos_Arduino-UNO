#include <LiquidCrystal.h>

LiquidCrystal LCD(2,3,9,10,11,12);

void setup() {
  LCD.begin(16, 2);

}

void loop() {
  LCD.print("Olá! Liga!");
  delay(300);
  LCD.print("^w^");
  delay(300);
  LCD.clear();
  delay(200);
}
