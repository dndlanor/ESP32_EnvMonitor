#include <LiquidCrystal.h>

#define POT_PIN 34  // analog pin for simulated temp

// Set LCD pins: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(14, 27, 26, 25, 33, 32);

void setup() {
  Serial.begin(115200);
  analogReadResolution(12);  // ESP32 uses 0–4095

  lcd.begin(16, 2);  // Init 16x2 LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp Monitor Ready");
  delay(2000);
}

void loop() {
  int raw = analogRead(POT_PIN);
  float voltage = raw * 3.3 / 4095.0;
  float tempC = voltage * 100;  // Simulate: 1V = 100°C

  // Display on LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(tempC, 1);
  lcd.print(" C");

  lcd.setCursor(0, 1);
  if (tempC < 30) lcd.print("Status: Normal");
  else if (tempC < 70) lcd.print("Status: Warm");
  else lcd.print("Status: High");

  // Log to Serial
  Serial.print("Simulated Temp: ");
  Serial.print(tempC, 1);
  Serial.println(" C");

  delay(1000);
}
