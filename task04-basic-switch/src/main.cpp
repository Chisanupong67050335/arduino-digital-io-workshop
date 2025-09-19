#include <Arduino.h>
#define SWITCH_PIN 2 // ขาที่ต่อกับสวิตช์
#define LED_PIN 13   // LED บนบอร์ด

void setup() {
    // ใช้ INPUT_PULLUP เพื่อเปิดใช้งานตัวต้านทานภายใน
    pinMode(SWITCH_PIN, INPUT_PULLUP);
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    // อ่านสถานะของสวิตช์
    int buttonState = digitalRead(SWITCH_PIN);

    // ถ้าสถานะเป็น LOW (แปลว่าถูกกด)
    if (buttonState == LOW) {
        digitalWrite(LED_PIN, HIGH); // ให้ LED ติด
        Serial.println("Switch PRESSED");
    } else { // ถ้าไม่ใช่ (เป็น HIGH แปลว่าถูกปล่อย)
        digitalWrite(LED_PIN, LOW); // ให้ LED ดับ
        Serial.println("Switch RELEASED");
    }
    delay(1000); // หน่วงเวลาเล็กน้อยเพื่อลดการอ่านค่าที่ผิดพลาด
}