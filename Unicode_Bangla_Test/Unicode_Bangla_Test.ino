/*
  char good[] = "5µA";   // Good
  String okay = "5µA";   // Good
*/

#include "SKBishal_Bangla_24.h"

#include <TFT_eSPI.h>      // Hardware-specific library

TFT_eSPI tft = TFT_eSPI(); // Invoke custom library

uint16_t bg = TFT_BLACK;
uint16_t fg = TFT_WHITE;

void setup() {
  tft.begin();
  tft.setRotation(0);  // portrait

  fg = TFT_WHITE;
  bg = TFT_BLACK;
}

void loop() {
  tft.setTextColor(fg, bg);

  String test1 = "েমাঃ ওমর ফারুক তাজুল  ইসলাম"; //Md. Omar Faruk Tazul Islam

  String test2 = "শুভ সকাল বাংলােদশ";  //Shuvo Shokal Bangladesh

  tft.loadFont(SKBishal_Bangla_24);

  //tft.setRotation(0);

  tft.setCursor(0, 0);

  // Show all characters on screen with 2 second (2000ms) delay between screens
  tft.showFont(2000); // Note: This function moves the cursor position!

  tft.fillScreen(bg);
  tft.setCursor(0, 0);

  tft.setTextColor(TFT_CYAN, bg);
  tft.println(test1);

  tft.setTextColor(TFT_YELLOW, bg);
  tft.println(test2);

  tft.setTextColor(TFT_MAGENTA, bg);
  tft.println("আমার  েসানার বাংলা");  //Amar Shonar Bangla

  // Remove font parameters from memory to recover RAM
  tft.unloadFont();

  delay(2000);
}
