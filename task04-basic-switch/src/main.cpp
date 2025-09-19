#include <Arduino.h>
#define SWITCH_PIN 2
#define LED_PIN 13
#define LED_PIN2 8

bool ledState = LOW;

void setup() {
  pinMode(SWITCH_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(SWITCH_PIN);

  if (buttonState == LOW) {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("Switch PRESSED");
    ledState = !ledState;                  // สลับสถานะ LED2
    digitalWrite(LED_PIN2, ledState);
    delay(300);                            // กันเด้งปุ่ม
  } else {
    digitalWrite(LED_PIN, LOW);
    Serial.println("Switch RELEASED");
  }
}
