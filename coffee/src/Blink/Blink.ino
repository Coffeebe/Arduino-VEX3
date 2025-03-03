#include <Arduino.h>  

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // initialize digital pin LED_BUILTIN as an output pin.
  Serial.begin(9600);
}

void loop() {
  Serial.println("Blinking");
on(2000, 500); // ON 1s (1000ms), OFF 0.5s (500 ms)
}

void on(int x,int y){
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(x);
  off(y);
}
void off(int y){
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(y);
}