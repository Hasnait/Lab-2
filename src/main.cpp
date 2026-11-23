#include <Arduino.h>

#define ADC1 15

void setup() {
  Serial.begin(115200);
  pinMode(ADC1, INPUT);
}

void loop() {
  int adcValue = analogRead(ADC1);
  int mappedValue = map(adcValue, 0, 4095, 0, 100);

  Serial.print("ADC value: ");
  Serial.println(adcValue);
  Serial.print("Mapped value: ");
  Serial.println(mappedValue);


  delay(500);
}