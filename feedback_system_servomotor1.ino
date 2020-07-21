#include <Servo.h>
Servo servo;
#define servo1 9
#define servo2 10





void setup()
{
  Serial.begin(9600);   
 servo.attach(9); //servo at digital pin 9
 servo.attach(10); //servo at digital pin 10
   
 

  pinMode(9, INPUT);
  pinMode(10, OUTPUT);
  
}

void loop()
{
  digitalWrite(9, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(10, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
   servo.write(servo2);
  int us = servo1;

  Serial.print("500,2600,");
  Serial.println(servo2,us);
}