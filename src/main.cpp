#include <Arduino.h>

void setup() {
  Serial.begin(9600); // Ställ in baudrate till 9600
  DDRD = 255;
}

void loop() {
  PORTD = 255;
  _delay_ms(100);
  PORTD = 0;
  _delay_ms(100);
  Serial.println("hej");
}
