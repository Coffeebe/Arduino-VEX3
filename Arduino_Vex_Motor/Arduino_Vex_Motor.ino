#include <Servo.h> // Include the Servo library

// Pin and variable declarations
int potPin = A1; // Potentiometer connected to analog pin A1
int leftMotorPin = 11;  // Left motor signal pin
int rightMotorPin = 12; // Right motor signal pin
int frontLeftMotorPin = 13; // Front left motor signal pin
int frontRightMotorPin = 8; // Front right motor signal pin

Servo leftMotor;       // Left motor
Servo rightMotor;      // Right motor
Servo frontLeftMotor;  // Front left motor
Servo frontRightMotor; // Front right motor

void setup() {
  Serial.begin(9600); // Start serial communication
  rightMotor.attach(rightMotorPin);       // Attach right motor to right motor pin
  leftMotor.attach(leftMotorPin);         // Attach left motor to left motor pin
  frontLeftMotor.attach(frontLeftMotorPin); // Attach front left motor to pin 13
  frontRightMotor.attach(frontRightMotorPin); // Attach front right motor to pin 8
}

void loop() {
  // Read the potentiometer value
  int potValue = analogRead(potPin); // Read the analog value (0-1023)
  int motorSpeed = map(potValue, 0, 1023, 1000, 2000); // Map it to a higher motor speed range (1000-2000)

  // Print the potentiometer value to the Serial Monitor
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);

  // Set all motors to the calculated speed
  leftMotor.writeMicroseconds(motorSpeed);
  
  rightMotor.writeMicroseconds(motorSpeed);
  
  frontLeftMotor.writeMicroseconds(motorSpeed);
  
  frontRightMotor.writeMicroseconds(motorSpeed);

  delay(10000); // Small delay for stability
}