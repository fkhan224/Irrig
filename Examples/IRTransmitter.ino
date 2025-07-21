#include <IRremote.h>
#include <U8g2lib.h>
#include <Wire.h>
#include <IRremote.h>

#define IR_RECEIVE_PIN 15
#define IR_SEND_PIN 4

#define ENABLE_LED_FEEDBACK  true

char cstr[4]; // 32 bit array to store char array

// Initialize the display 
// U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);
U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN, true);
  IrSender.begin(IR_SEND_PIN);

  Serial.println("HGello worlkd");
  Serial.println(ESP.getFlashChipSize());

  pinMode(5, OUTPUT);
  digitalWrite(5, HIGH);

  u8g2.begin();

  u8g2.clearBuffer(); // "queue up" clearing the screen 
  u8g2.sendBuffer(); // send cleared screen to display 
}

void loop() {

    IrSender.sendNEC(0x00, 0xFA, 4);
    delay(1000);

  

  if (IrReceiver.decode()) {
    Serial.println(IrReceiver.decodedIRData.command, HEX);
    IrReceiver.resume();

    u8g2.clearBuffer(); // clear again 
    u8g2.setFont(u8g2_font_crox3cb_mr); // Choose a font (we're chosing from a list of defaults)
    itoa(IrReceiver.decodedIRData.command, cstr, 16); // convert output to char array
    u8g2.drawStr(28, 30, cstr); // display IR reciever outpout to LCD
    u8g2.sendBuffer(); // send what we just drew to the display
  }
}