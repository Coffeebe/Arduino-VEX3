#include <Servo.h>
#include <Arduino.h>


int Motorpin = 8;
Servo Motor;

void setup() {
pinMode(Motorpin,OUTPUT);
pinMode(8,OUTPUT);
Motor.attach(Motorpin); 
Serial.begin(9600);
}
void loop() {
Motorcontrol(100);
digitalWrite(8,HIGH);
delay(1000);
Motorcontrol(-100);
digitalWrite(8,LOW);
delay(1000);
}  // put your main code here, to run repeatedly:

int Motorcontrol(int value){
int angle = map(value,-100,100,0,180);
Motor.write(angle);
return angle;
//Motor.write(map(value,-100,100,0,0));


}
