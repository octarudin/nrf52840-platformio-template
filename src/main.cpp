#include <Arduino.h>
#include <Adafruit_TinyUSB.h>

void setup() {
    Serial.begin(115200);
    while (!Serial) {
        delay(10); // wait for native usb
    }
    Serial.println("nRF52840 USB CDC Serial Test");
}

void loop() {
    Serial.println("Hello World!");
    delay(1000);
}