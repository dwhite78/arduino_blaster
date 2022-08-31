//Beginner project for a 3d printed blaster gun with lights and sound.
#include "Arduino_SensorKit.h"

void setup() {
  Oled.begin();
  Oled.setFlipMode(true);
}

void loop() {
  //int random_value = random(0, 1023);   // create a random value

  Oled.setFont(u8x8_font_chroma48medium8_r);
  Oled.setCursor(0, 0);
  Oled.print("I Like Big Butts");
  delay(1000);

  Oled.setFont(u8x8_font_chroma48medium8_r);
  Oled.setCursor(0, 1);
  Oled.print("And I can not");
  delay(1000);

  Oled.setFont(u8x8_font_chroma48medium8_r);
  Oled.setCursor(0, 2);
  Oled.print("lie, you other");
  delay(1000);

  Oled.setFont(u8x8_font_chroma48medium8_r);
  Oled.setCursor(0, 3);
  Oled.print("brothers");
  delay(1000);

  Oled.setFont(u8x8_font_chroma48medium8_r);
  Oled.setCursor(0, 4);
  Oled.print("Can't Deny");
  delay(1000);

  Oled.clearDisplay();
}