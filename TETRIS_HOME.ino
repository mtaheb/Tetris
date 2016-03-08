#include <Adafruit_GFX.h>   // Core graphics library
#include <RGBmatrixPanel.h> // Hardware-specific library

#define CLK 8  // MUST be on PORTB! (Use pin 11 on Mega)
#define LAT A3
#define OE  9
#define A   A0
#define B   A1
#define C   A2
int start_x;
int start_y;

RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false);



void setup() {
    matrix.begin();
    matrix.drawLine(1,4,6,4, matrix.Color333(7, 0, 0));   //LETTER T
    delay(250);
    matrix.drawLine(1,5,6,5, matrix.Color333(7, 0, 0));   //LETTER T
    delay(250);
    matrix.drawLine(3,6,3,10, matrix.Color333(7, 0, 0));   //LETTER T
    delay(250);
    matrix.drawLine(4,6,4,10, matrix.Color333(7, 0, 0));   //LETTER T
    delay(250);



    
    
    matrix.drawLine(6,6,10,6, matrix.Color333(7, 2, 0));   //LETTER E
    delay(250);
    matrix.drawLine(7,5,10,5, matrix.Color333(7, 2, 0));   //LETTER E
    delay(250);
    matrix.drawLine(6,7,6,10, matrix.Color333(7, 2, 0));   //LETTER E
    delay(250);
    matrix.drawLine(5,6,5,11, matrix.Color333(7, 2, 0));   //LETTER E
    delay(250);
    matrix.drawLine(7,10,10,10, matrix.Color333(7, 2, 0));   //LETTER E
    delay(250);
    matrix.drawLine(6,11,10,11, matrix.Color333(7, 2, 0));   //LETTER E
    delay(250);
    matrix.drawLine(7,8,8,8, matrix.Color333(7, 2, 0));   //LETTER E
    delay(250);

    
    
    
    matrix.drawLine(10,4,15,4, matrix.Color333(7, 7, 0));   //LETTER T
    delay(250);
    matrix.drawLine(10,5,15,5, matrix.Color333(7, 7, 0));   //LETTER T
    delay(250);
    matrix.drawLine(12,6,12,10, matrix.Color333(7, 7, 0));   //LETTER T
    delay(250);
    matrix.drawLine(13,6,13,10, matrix.Color333(7, 7, 0));   //LETTER T
    delay(250);

    matrix.drawLine(15,6,15,11, matrix.Color333(0, 7, 0));   //LETTER R(Vertical Base)
    delay(250);
    matrix.drawLine(16,7,16,11, matrix.Color333(0, 7, 0));   //LETTER R(Vertical Base)
    delay(250);
    matrix.drawLine(17,8,21,12, matrix.Color333(0, 7, 0));   //LETTER R(Diag. Leg)
    delay(250);
    matrix.drawLine(16,8,20,12, matrix.Color333(0, 7, 0));   //LETTER R(Diag. Leg)
    delay(250);
    matrix.drawLine(16,6,20,6, matrix.Color333(0, 7, 0));   //LETTER R(Horiz.Top)
    delay(250);
    matrix.drawLine(16,5,19,5, matrix.Color333(0, 7, 0));   //LETTER R(Horiz.Top)
    delay(250);
    matrix.drawPixel(20, 7, matrix.Color333(0, 7, 0));      //LETTER R
    matrix.drawPixel(19, 8, matrix.Color333(0, 7, 0));      //LETTER R
    matrix.drawPixel(19, 7, matrix.Color333(0, 7, 0));      //LETTER R
    matrix.drawPixel(18, 8, matrix.Color333(0, 7, 0));      //LETTER R


    

    matrix.drawLine(19,4,24,4, matrix.Color333(0, 0, 7));   //LETTER I(Horiz Top)
    delay(250);
    matrix.drawLine(19,5,24,5, matrix.Color333(0, 0, 7));   //LETTER I(Horiz Top)
    delay(250);
    matrix.drawLine(19,10,24,10, matrix.Color333(0, 0, 7));   //LETTER I(Horiz Bottom)
    delay(250);
    matrix.drawLine(19,9,24,9, matrix.Color333(0, 0, 7));   //LETTER I(Horiz Bottom)
    delay(250);
    matrix.drawLine(22,6,22,8, matrix.Color333(0, 0, 7));    //LETTER I(Mid Vert)
    delay(250);
    matrix.drawLine(21,6,21,8, matrix.Color333(0, 0, 7));    //LETTER I(Mid Vert)
    delay(250);



    matrix.drawLine(28,6,26,6, matrix.Color333(7, 0, 7));   //LETTER S(Horiz Top)
    delay(250);
    matrix.drawLine(28,5,26,5, matrix.Color333(7, 0, 7));   //LETTER S(Horiz Top)
    delay(250);
    matrix.drawLine(26,9,29,9, matrix.Color333(7, 0, 7));    //LETTER S(Horiz. Mid)
    delay(250);
    matrix.drawLine(25,8,28,8, matrix.Color333(7, 0, 7));    //LETTER S(Horiz. Mid)
    delay(250);
    matrix.drawLine(28,12,26,12, matrix.Color333(7, 0, 7));    //LETTER S(Horiz. Bottom)
    delay(250);
    matrix.drawLine(28,11,26,11, matrix.Color333(7, 0, 7));    //LETTER S(Horiz. Bottom)
    delay(250);
    matrix.drawPixel(29, 6, matrix.Color333(7, 0, 7));      //LETTER S
    matrix.drawPixel(25, 6, matrix.Color333(7, 0, 7));      //LETTER S
    matrix.drawPixel(25, 7, matrix.Color333(7, 0, 7));      //LETTER S
    matrix.drawPixel(29, 10, matrix.Color333(7, 0, 7));     //LETTER S
    matrix.drawPixel(29, 11, matrix.Color333(7, 0, 7));     //LETTER S
    matrix.drawPixel(25, 11, matrix.Color333(7, 0, 7));     //LETTER S
    matrix.drawPixel(24, 7, matrix.Color333(7, 0, 7));     //LETTER S
    matrix.drawPixel(30, 10, matrix.Color333(7, 0, 7));     //LETTER S

}

void loop() {
  //matrix.drawPixel(x_pos, y_posA, matrix.Color333(7, 0, 0));

}
