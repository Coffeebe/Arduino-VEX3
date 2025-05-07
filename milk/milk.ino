const int motorPin2 = 9;
const int motorPin = 10;
const int pin_thing2 = 7;
const int pin_thing = 8 ;
int trackerPin = A5;
int lineVal = 0;
void setup() {
  Serial.begin(9600);
  pinMode(pin_thing,OUTPUT);
  pinMode(pin_thing2,OUTPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(motorPin2,OUTPUT);

DigitalWrite(pin_thing,HIGH);
analogWrite(pin_thing2,HIGH);
}

void loop() {
  lineVal = analogRead(trackerPin);
  Serial.print(lineVal);
  if (lineVal > 500) {

analogWrite(motorPin,230);

analogWrite(motorPin2,230);
  } else{
    analogWrite(motorPin,0);
    analogWrite(motorPin2,0);
  }
  delay(1000);
}
