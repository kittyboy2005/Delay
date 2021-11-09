/*====================================================================================
                              DELAY LIBRARY EXAMPLE
======================================================================================
Created by: Manzar-E-Hassin <mnz247@hotmail.com>
Published on Tuesday, November 9, 2021

MIT License
Copyright (c) 2021 Manzar-E-Hassin
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

Delay library available at: https://github.com/kittyboy2005/Delay
*/

#include <Delay.h>

Delay a;  //first object of Delay class
Delay b;  //another similar object of Delay class

void setup()
{
  Serial.begin(9600); //Serial interface initialization
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
