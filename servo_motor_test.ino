#include <Servo.h>
 
Servo my_servo;
 
void setup() {
  pinMode(7,OUTPUT);
  digitalWrite(7,HIGH);
  pinMode(A0,INPUT);
  my_servo.attach(9);                           
}
 
void loop() {
  int temp = analogRead(A0);
  int angle = map(temp,0,1023,0,180);
  my_servo.write(angle);
}
