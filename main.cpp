/********************************************************************************
* main.cpp: Demonstration av klass för enkel styrning av lysdioder.
********************************************************************************/
#include "led.hpp"

/********************************************************************************
* main: Ansluter en lysdiod till pin 8 / PORTB0. Denna lysdiod sätts till att
*       blinka kontinuerligt var 100:e millisekund.
********************************************************************************/
int main(void)
{
   led l1(8);

   while (1)
   {
      l1.blink(100);
   }

   return 0;
}

