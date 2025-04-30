 const int trigPin = 7;
   const int echoPin = 6;
   const int led = 8;



void setup() {
Serial.begin(9600);
pinMode(triPin, OUTPUT);
pinMode(echoPin, INPUT);

}
  

void loop() {
   digitalWrite(trigPin, LOW);
   delayMicroseconds(10)
   digitalWrite(trigPin,LOw);

   long duration = pulseIn(echo)
}
