#include <evilOLED.h>


void setup() {
  pinMode(A4,OUTPUT);// set SDA + SCL pins as output
  pinMode(A5,OUTPUT);
  
}

void loop() {
evilOLED disp(A4,A5);// initialise display (SDA,SCL)
delay(1000);
disp.cls(0x00); //calls clearscreen
delay(500);
disp.setCursor(5,2);// sets text cursor (x,y)
disp.putString("HELLO");//Strings MUST be double quoted!
delay(500);
disp.alert(120);// flashes display 3 times
delay(1500);
disp.setCursor(5,4);
disp.putString(12345);// for convenience, putString also accepts ints
delay(1500);
}














  
      
