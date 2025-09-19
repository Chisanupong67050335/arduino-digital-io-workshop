#include <Arduino.h>
void setup() {
    Serial.begin(9600); // เริ่มการสื่อสารกับคอมพิวเตอร์
    Serial.println("=== Arduino UNO R3 Pin Test ===");

    // ทดสอบขา Digital 2 ถึง 13
    for(int pin = 2; pin <= 13; pin++) {
        pinMode(pin, OUTPUT);   // ตั้งค่าให้เป็นขาจ่ายไฟออก
        digitalWrite(pin, HIGH);  // สั่งให้จ่ายไฟ
        delay(100);             // รอ 0.1 วินาที
        digitalWrite(pin, LOW);   // สั่งให้หยุดจ่ายไฟ
        Serial.print("Pin ");
        Serial.print(pin);
        Serial.println(" OK");
    }
}

void loop() {
    // ไม่ต้องทำอะไรใน loop
}