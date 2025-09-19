#include <Arduino.h>
#define LED_PIN 13       // ตั้งชื่อให้ขา 13 ว่า LED_PIN
#define BLINK_DELAY 1000 // ตั้งค่าเวลาหน่วง 1000ms = 1 วินาที
void setup() {
    pinMode(LED_PIN, OUTPUT); // กำหนดให้ขา LED_PIN เป็นขา Output
}

void loop() {
    digitalWrite(LED_PIN, HIGH); // สั่งให้ LED ติด (HIGH)
    delay(BLINK_DELAY);          // รอตามเวลาที่กำหนด

    digitalWrite(LED_PIN, LOW);  // สั่งให้ LED ดับ (LOW)
    delay(BLINK_DELAY);          // รอ
}