#include <Delay.h>

Delay a;  //first object of Delay class
Delay b;  //another similar object of Delay class

void setup()
{
  Serial.begin(9600); //Serial initialization
}

void loop()
{
  //The new delay function in action 
  
  a.delay_(foo1,2000);  // foo1() function will run at 2000ms (2s) interval.
  b.delay_(foo2,500);   // foo2() function will run at 500ms interval.
}


void foo1()   //User Function 1
{
  Serial.println("Hello World");    //It will print Hello World in the Serial monitor
}


void foo2()   //User function 2
{
  Serial.println("Hello Universe"); //It will print Hello Universe in the Serial monitor
}
