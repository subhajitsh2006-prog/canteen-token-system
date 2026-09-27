// C++ code
//
/*
  LiquidCrystal Library - Hello World

   Demonstrates the use of a 16x2 LCD display.
  The LiquidCrystal library works with all LCD
  displays that are compatible with the  Hitachi
  HD44780 driver. There are many of them out
  there, and you  can usually tell them by the
  16-pin interface.

  This sketch prints "Hello World!" to the LCD
  and shows the time.

  The circuit:
  * LCD RS pin to digital pin 12
  * LCD Enable pin to digital pin 11
  * LCD D4 pin to digital pin 5
  * LCD D5 pin to digital pin 4
  * LCD D6 pin to digital pin 3
  * LCD D7 pin to digital pin 2
  * LCD R/W pin to ground
  * LCD VSS pin to ground
  * LCD VCC pin to 5V
  * 10K resistor:
  * ends to +5V and ground
  * wiper to LCD VO pin (pin 3)

  Library originally added 18 Apr 2008  by David
  A. Mellis
  library modified 5 Jul 2009  by Limor Fried
  (http://www.ladyada.net)
  example added 9 Jul 2009  by Tom Igoe
  modified 22 Nov 2010  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/LiquidCrystal
*/

#include <LiquidCrystal.h> 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int tokenNumber = 0;
const int nextButtonPin = 7;
const int resetButtonPin = 8;
void setup() { 
  lcd.begin(16, 2);
  pinMode(nextButtonPin, INPUT); 
  pinMode(resetButtonPin, INPUT); 
  updateDisplay();
}
void loop() {
  if (digitalRead(nextButtonPin) == HIGH) { 
    tokenNumber++;
    updateDisplay();
    delay(400);
  }
  if (digitalRead(resetButtonPin) == HIGH) {
    tokenNumber = 0;
    updateDisplay();
    delay(400);
  }
}
void updateDisplay() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Token ");
  lcd.print(tokenNumber);
  lcd.setCursor(0, 1);
  lcd.print("Now Serving");
}
