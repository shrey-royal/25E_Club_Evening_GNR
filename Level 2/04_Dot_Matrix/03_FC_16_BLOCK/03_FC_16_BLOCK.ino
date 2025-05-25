#include<MD_Parola.h>
#include<MD_MAX72XX.h>

#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 4
#define CS_PIN 3

MD_Parola ledMatrix = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);
String text;

void setup() {
  Serial.begin(9600);
  ledMatrix.begin();
  ledMatrix.setIntensity(10);  //0-15
  ledMatrix.displayClear();

  text.reserve(30);
}

void loop() {
  if (Serial.available()) {
    text = Serial.readStringUntil('\n');

    ledMatrix.displayClear();
    ledMatrix.displayScroll(text.c_str(), PA_CENTER, PA_DISSOLVE, 100);
    Serial.print("text: ");
    Serial.println(text);
  }

  if (ledMatrix.displayAnimate()) {
    ledMatrix.displayReset();
  }
}
