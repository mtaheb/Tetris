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

    //LETTER T
    start_y = 3;
    //TOP OF THE LETTER T
    for(start_x = 0; start_x < 6; start_x++){ 
         matrix.drawPixel(start_x,start_y, matrix.Color333(7, 0, 0));
         delay(30);
    }
    start_y = 4;
    //SECOND ROW OF TOP OF T, RIGHT HALF
    for(start_x = 5; start_x > 2; start_x--){ 
         matrix.drawPixel(start_x,start_y, matrix.Color333(7, 0, 0));
         delay(30);
    }
    //RIGHT HALF OF VERTICAL BASE OF T
    start_x = 3;
    for(start_y = 5; start_y < 11; start_y++){ 
         matrix.drawPixel(start_x,start_y, matrix.Color333(7, 0, 0));
         delay(30);
    }
    //LEFT HALF OF VERTICAL BASE OF T
    start_x = 2;
    for(start_y = 10; start_y > 4; start_y--){ 
         matrix.drawPixel(start_x,start_y, matrix.Color333(7, 0, 0));
         delay(30);
    }
    start_y = 4;
    //SECOND ROW OF TOP OF T, LEFT HALF
    for(start_x = 2; start_x > -1; start_x--){ 
         matrix.drawPixel(start_x,start_y, matrix.Color333(7, 0, 0));
         delay(30);
    }



    
    
    
    
    //LETTER E
    //TOP ROW OF LETTER E (L TO R)
    start_y = 5;
    for(start_x = 5; start_x < 11; start_x++){ 
         matrix.drawPixel(start_x,start_y, matrix.Color333(7, 2, 0));
         delay(30);
    }
    //SECOND ROW OF LETTER E, EXCEPT FOR ONE PIXEL OF VERTICAL BASE (R TO L)
    start_y = 6;
    for(start_x = 10; start_x > 5; start_x--){ 
         matrix.drawPixel(start_x,start_y, matrix.Color333(7, 2, 0));
         delay(30);
    }
    //INNER PIXELS OF E AS WELL AS BOTTOM BASE
    start_x = 6;
    for(start_y = 7; start_y < 13; start_y++){ 
         //TOP OF INNER ARM OF E (L TO R)
         if(start_y == 8){
            while(start_x < 9){
                matrix.drawPixel(start_x++,start_y, matrix.Color333(7, 2, 0));
                delay(30);
            }
            start_x--; 
         }
         //BOTTOM INNER ARM OF E (R TO L)
         else if(start_y == 9){
            while(start_x > 5){
                matrix.drawPixel(start_x--,start_y, matrix.Color333(7, 2, 0));
                delay(30);
            }
            start_x++;
         }
         //TOP OF THE BOTTOM BASE OF E (L TO R)
         else if(start_y == 11){
            while(start_x < 11){
                matrix.drawPixel(start_x++,start_y, matrix.Color333(7, 2, 0));
                delay(30);
            }
            start_x--;
         }
         //BOTTOM OF THE BOTTOM BASE OF E (R TO L)
         else if(start_y == 12){
            while(start_x > 4){
                matrix.drawPixel(start_x--,start_y, matrix.Color333(7, 2, 0));
                delay(30);
            }
            start_x++;
         }
         //INNER TWO PIXELS ABOVE AND BELOW INNER ARM OF E
         else{
            matrix.drawPixel(start_x,start_y, matrix.Color333(7, 2, 0));
            delay(30);
         }   
    }
    //LEFT SIDE OF VERTICAL BASE OF E (BOTTOM TO TOP)
    start_x = 5;
    for(start_y = 11; start_y > 4; start_y--){
        matrix.drawPixel(start_x,start_y, matrix.Color333(7, 2, 0));
        delay(30);
    }



    
    
    
    
    //LETTER T
    start_y = 3;
    //TOP OF THE LETTER T
    for(start_x = 10; start_x < 16; start_x++){ 
         matrix.drawPixel(start_x,start_y, matrix.Color333(7, 7, 0));
         delay(30);
    }
    start_y = 4;
    //SECOND ROW OF TOP OF T, RIGHT HALF
    for(start_x = 15; start_x > 12; start_x--){ 
         matrix.drawPixel(start_x,start_y, matrix.Color333(7, 7, 0));
         delay(30);
    }
    //RIGHT HALF OF VERTICAL BASE OF T
    start_x = 13;
    for(start_y = 5; start_y < 11; start_y++){ 
         matrix.drawPixel(start_x,start_y, matrix.Color333(7, 7, 0));
         delay(30);
    }
    //LEFT HALF OF VERTICAL BASE OF T
    start_x = 12;
    for(start_y = 10; start_y > 4; start_y--){ 
         matrix.drawPixel(start_x,start_y, matrix.Color333(7, 7, 0));
         delay(30);
    }
    //SECOND ROW OF TOP OF T, LEFT HALF
    start_y = 4;
    for(start_x = 12; start_x > 9; start_x--){ 
         matrix.drawPixel(start_x,start_y, matrix.Color333(7, 7, 0));
         delay(30);
    }






    //LETER R
    //VERTICAL BASE LEFT SIDE AND HORIZONTAL TOP OF R
    start_x = 15;
    for(start_y = 12; start_y > 4; start_y--){
         matrix.drawPixel(start_x,start_y, matrix.Color333(0, 7, 0));
         delay(30);
         //TOP OF R
         while(start_y == 5 && start_x < 20){
              matrix.drawPixel(start_x++,start_y, matrix.Color333(0, 7, 0));
              delay(30);     
         }
    }
    //OUTER THREE PIXELS OF R'S CIRCULAR TOP
    matrix.drawPixel(20,6, matrix.Color333(0, 7, 0));
    delay(30);
    matrix.drawPixel(20,7, matrix.Color333(0, 7, 0));
    delay(30);
    matrix.drawPixel(19,8, matrix.Color333(0, 7, 0));
    delay(30);
    //DIAGONAL LEG OF R
    //RIGHT SIDE
    start_x = 18;
    start_y = 9;
    while(start_x < 23 && start_y < 14){
              matrix.drawPixel(start_x++,start_y++, matrix.Color333(0, 7, 0));
              delay(30);      
    }
    //LEFT SIDE
    start_x-=2;
    start_y--;
    while(start_x > 16 && start_y > 8){
              matrix.drawPixel(start_x--,start_y--, matrix.Color333(0, 7, 0));
              delay(30);
    }
    //FOUR INNER PIXELS OF R'S CIRCULAR TOP
    matrix.drawPixel(17,8, matrix.Color333(0, 7, 0));
    delay(30);
    matrix.drawPixel(18,8, matrix.Color333(0, 7, 0));
    delay(30);
    matrix.drawPixel(19,7, matrix.Color333(0, 7, 0));
    delay(30);
    //THE BOTTOM OR R'S TOP HORIZONTAL BAR AND INNER VERTICAL BASE
    start_x = 19;
    for(start_y = 6; start_y < 13; start_y++){
         while(start_y == 6 && start_x > 15){
              matrix.drawPixel(start_x--,start_y, matrix.Color333(0, 7, 0));
              delay(30);     
         }
         start_x = 16;
         matrix.drawPixel(start_x,start_y, matrix.Color333(0, 7, 0));
         delay(30);
    }




    
    
    
    
    //LETTER I
    //TOP OF LETTER I
    start_y = 3;
    for(start_x = 20; start_x < 26; start_x++){
         matrix.drawPixel(start_x,start_y, matrix.Color333(0, 0, 7));
         delay(30);
    }
    //RIGHT SIDE, BOTTOM OF HORIZONTAL TOP OF I
    start_y = 4;
    for(start_x = 25; start_x > 22; start_x--){
         matrix.drawPixel(start_x,start_y, matrix.Color333(0, 0, 7));
         delay(30);
    }
    start_x = 23;
    for(start_y = 5; start_y < 11; start_y++){
         if(start_x > 25)
               start_x--;
         //VERTICAL BASE OF I, RIGHT SIDE
         matrix.drawPixel(start_x,start_y, matrix.Color333(0, 0, 7));
         delay(30);

         //TOP OF HORIZONTAL BOTTOM/BASE, RIGHT SIDE
         while(start_y == 9 && start_x < 26){
               matrix.drawPixel(start_x++,start_y, matrix.Color333(0, 0, 7));
               delay(30); 
         }
         //BOTTOM OF HORIZONTAL BASE
         while(start_y == 10 && start_x > 19){
               matrix.drawPixel(start_x--,start_y, matrix.Color333(0, 0, 7));
               delay(30); 
         }
         
    }
    //TOP OF HORIZONTAL BOTTOM/BASE, LEFT SIDE
    start_y = 9;
    for(start_x = 20; start_x < 23; start_x++){
         matrix.drawPixel(start_x,start_y, matrix.Color333(0, 0, 7));
         delay(30);
    }
    //VERTICAL BASE OF I, LEFT SIDE AND BOTTOM HALF OF HORIZONTAL TOP, LEFT SIDE
    start_x = 22;
    for(start_y = 8; start_y > 3; start_y--){
         matrix.drawPixel(start_x,start_y, matrix.Color333(0, 0, 7));
         delay(30);
         while(start_y == 4 && start_x > 19){
               matrix.drawPixel(start_x--,start_y, matrix.Color333(0, 0, 7));
               delay(30);
         }
    }







    //LETTER S
    //TOP OF LETTER S
    start_y = 5;
    for(start_x = 27; start_x < 31; start_x++){
         matrix.drawPixel(start_x,start_y, matrix.Color333(7, 0, 7));
         delay(30);
    }
    //BOTTOM OF TOP LAYER OF S
    start_y = 6;
    for(start_x = 31; start_x > 26; start_x--){
         matrix.drawPixel(start_x,start_y, matrix.Color333(7, 0, 7));
         delay(30);      
    }
    //INNER PIXEL, TOP HALF OF S, TOP OF MIDDLE LAYER OF S, & LOWER OUTER CURVE
    start_y = 7;
    for(start_x = 26; start_x< 32; start_x++){
         if(start_x > 26 && start_x < 30)
               start_y = 8;
         if(start_x == 30)
               start_y = 9;
         if(start_x == 31)
               start_y = 10;
         matrix.drawPixel(start_x,start_y, matrix.Color333(7, 0, 7));
         delay(30);    
    }
    //BOTTOM BASE OF S
    start_y = 11;
    for(start_x = 30; start_x > 24; start_x--){
         if(start_x > 25 && start_x < 30)
               start_y = 12;
         if(start_x == 25)
               start_y = 11;
         matrix.drawPixel(start_x,start_y, matrix.Color333(7, 0, 7));
         delay(30);    
    }
    //TOP OF BOTTOM BASE OF S & INNER PIXEL OF CURVE OF BOTTOM HALF
    for(start_x = 26; start_x < 31; start_x++){
         if(start_x == 30)
             start_y--;
         matrix.drawPixel(start_x,start_y, matrix.Color333(7, 0, 7));
         delay(30); 
    }
    //BOTTOM OF MIDDLE LAYER OF S & OUTER CURVE OF TOP HALF
    start_y = 9;
    for(start_x = 29; start_x > 24; start_x--){
         if(start_x == 25)
               start_y = 7;
         if(start_x == 26)
               start_y = 8;
         matrix.drawPixel(start_x,start_y, matrix.Color333(7, 0, 7));
         delay(30);    
    }
    //LAST PIXEL
    matrix.drawPixel(26, 6, matrix.Color333(7,0,7));
    delay(200);
    
    
}

void loop() {
  // put your main code here, to run repeatedly:

}
