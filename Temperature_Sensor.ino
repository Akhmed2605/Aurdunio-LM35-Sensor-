#include <LiquidCrystal.h>
#include <SoftwareSerial.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
SoftwareSerial bt(10, 9);

const int LM35_PIN = A0;
float tempC = 0.0;

void setup() {
  lcd.begin(16, 2);
  bt.begin(9600);
}

void loop() {
  int adcValue = analogRead(LM35_PIN);
  float voltage = adcValue * (5.0 / 1023.0);
  tempC = voltage * 100.0;

  lcd.setCursor(0, 0);
  lcd.print("Temp:");
  lcd.setCursor(6, 0);
  lcd.print(tempC, 1);
  lcd.print((char)223);
  lcd.print("C ");

  bt.print("Temperature: ");
  bt.print(tempC, 1);
  bt.println(" C");

  delay(1000);
}
