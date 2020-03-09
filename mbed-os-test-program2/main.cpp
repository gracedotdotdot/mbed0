#include "mbed.h"

DigitalOut redLED(LED1);
DigitalOut greenLED(LED2);

int Led(DigitalOut& ledpin);
int main()
{
   redLED = 1;
   greenLED = 1;
   while (true) {
       Led(redLED);
       Led(greenLED);
   }
}