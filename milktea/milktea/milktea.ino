const int motorPin4 = 5;
const int motorPin3 = 6;
const int motorPin2 = 9;
const int motorPin = 10;
const int pin_thing4 = 3;
const int pin_thing3 = 4;
const int pin_thing2 = 7;
const int pin_thing = 8 ;

int trackerPin = A5;
int trackerPin2 = A4;
int lineVal = 0;
int lineVal2 = 0;
void setup() { 
  Serial.begin(9600);
  pinMode(pin_thing,OUTPUT);
  pinMode(pin_thing2,OUTPUT);
  pinMode(pin_thing3,OUTPUT);
  pinMode(pin_thing4,OUTPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(motorPin2,OUTPUT);
  pinMode(motorPin3,OUTPUT);
  pinMode(motorPin4,OUTPUT);

digitalWrite(pin_thing,HIGH);
digitalWrite(pin_thing2,HIGH);
digitalWrite(pin_thing3,HIGH);
digitalWrite(pin_thing4,HIGH);

}

void loop() {
  lineVal = analogRead(trackerPin);
  lineVal2 = analogRead(trackerPin2);
  Serial.print(lineVal); 
  Serial.print(lineVal2);
  if (lineVal > 800 && lineVal2 < 800) {
Serial.println(" on"); 
analogWrite(motorPin,230);
analogWrite(motorPin2,230);
analogWrite(motorPin3,0);
analogWrite(motorPin4,0);
  } else if (lineVal2 > 800 && lineVal < 800) {
  Serial.println(" off");
      analogWrite(motorPin,0);
    analogWrite(motorPin2,0);
    analogWrite(motorPin3,230); 
    analogWrite(motorPin4,230);
  } else if (lineVal > 800 && lineVal2 > 800){
    analogWrite(motorPin,230);
    analogWrite(motorPin2,230);
    analogWrite(motorPin3,230);
    analogWrite(motorPin4,230);
} else{
analogWrite(motorPin,0);
analogWrite(motorPin2,0);
analogWrite(motorPin3,0);
analogWrite(motorPin4,0);
}

  delay(1000);
}
