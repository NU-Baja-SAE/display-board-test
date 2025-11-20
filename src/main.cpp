// hardware
#include <Arduino.h>
#include <U8g2lib.h>

// requires macro-expanded arguments
#define U8G2_T6963_Exp(W, H, S) U8G2_T6963_ ## W ## X ## H ## _ ## S ## _8080
#define U8G2_T6963(W, H, S) U8G2_T6963_Exp(W, H, S)

// display spec ----------------------------------------------------------------

#define SCREEN_WIDTH 240
#define SCREEN_HEIGHT 128

// buffer size: {1, 2, F}
// 1: only one page of display memory stored in RAM; use firstPage()/nextPage()
//    for drawing
// 2: two pages of display memory stored in RAM, same behavior as 1
// F: keep a copy of the full frame buffer in RAM, use clearBuffer to clear RAM
//    and sendBuffer to send it to the display
#define BUFFER_SIZE F

// define the device type that we're using
#define U8G2 U8G2_T6963(SCREEN_WIDTH, SCREEN_HEIGHT, BUFFER_SIZE)

// pins ------------------------------------------------------------------------

// data lines of the parallel interface
#define d0 0
#define d1 0
#define d2 0
#define d3 0
#define d4 0
#define d5 0
#define d6 0
#define d7 0
// "write" for the 8080 interface (WR)
#define enable 0
// chip select line (CS)
#define cs 0
// data/command selection line (CS)
#define dc 0
// reset line
#define reset 0

// display definition ----------------------------------------------------------

U8G2 u8g2(U8G2_R0, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);

// DISPLAY SETUP ===============================================================

void setup() {
  Serial.begin(9600);
  u8g2.begin();
}

// GAME LOOP ===================================================================

void loop() {
  Serial.write("hello!\n");

  delay(100);
}
