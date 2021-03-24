// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library
//
#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;

int main()
{
    //Original code
    /*// basic printf demo = 16 by 18 characters on screen
    uLCD.printf("\nHello uLCD World\n"); //Default Green on black text
    uLCD.printf("\n  Starting Demo...");
    uLCD.text_width(4); //4X size text
    uLCD.text_height(4);
    uLCD.color(RED);
    for (int i=10; i>=0; --i) {
        uLCD.locate(1,2);
        uLCD.printf("%2d",i);
        ThisThread::sleep_for(500ms);
    }*/


    //For DEMO
    uLCD.background_color(0xFFFFFF);
    uLCD.textbackground_color(0xFFFFFF);
    uLCD.cls();
    uLCD.color(BLUE);
    uLCD.printf("\nstudent ID\n");
    uLCD.locate(0,3);
    uLCD.text_width(2); //2X size text
    uLCD.text_height(2);
    uLCD.printf("107030027\n");

    uLCD.text_width(4); //4X size text
    uLCD.text_height(4);
    uLCD.color(GREEN);
    for (int i=30; i>=0; --i) 
    {
        uLCD.locate(2,2);
        uLCD.printf("%2d",i);
        ThisThread::sleep_for(500ms);
    }

}