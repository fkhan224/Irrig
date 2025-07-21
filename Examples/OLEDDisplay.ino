#include <U8g2lib.h>
#include <Wire.h>
 
// Initialize the display 
// U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);
U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);
 
void setup() {
  pinMode(5, OUTPUT);
  digitalWrite(5, HIGH);

  u8g2.begin();

  u8g2.clearBuffer(); // "queue up" clearing the screen 
  u8g2.sendBuffer(); // send cleared screen to display 
}
 
void loop() {

  u8g2.clearBuffer(); // clear again 
  u8g2.setFont(u8g2_font_crox3cb_mr); // Choose a font (we're chosing from a list of defaults)
  u8g2.drawStr(28, 30, "Irrig"); // draw the string of "Irrig" at X: 28, Y: 30 
  u8g2.sendBuffer(); // send what we just drew to the display
  delay(5000);

  // vvv Basically do the same shit but with different text and font 
  
  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_t0_11_mr); 
  u8g2.drawStr(9, 35, "By Fariha and Ren");
  u8g2.sendBuffer(); 
  delay(5000);
}