const int motorPin = 10; // Define the pin connected to the motor's speed control

void setup() {
  // Set the motor pin as an output
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // Set the motor speed to 128 (half speed)
  //analogWrite(motorPin, 128);
  //analogWrite(motorPin,128);
 //delay(1000); // Wait for 1 second

   //Set the motor speed to 255 (full speed)
 analogWrite(motorPin,254);
  delay(1000); // Wait for 1 second

  // Set the motor speed to 0 (stop)
  //analogWrite(motorPin,0);
  //delay(1000); // Wait for 1 second
}