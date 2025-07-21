#include <IRremote.h>

#define IR_RECEIVE_PIN 15

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN, true);

  Serial.println("HGello worlkd");
}

void loop() {
  if (IrReceiver.decode()) {
    Serial.println(IrReceiver.decodedIRData.command, HEX);
    IrReceiver.resume();
  }
}