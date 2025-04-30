const int motorPin = 10;
int trackerPin = A0;
int lineVal = 0;
void setup() {
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);

}

void loop() {
  lineVal = analogRead(trackerPin);
  Serial.print(lineVal);
  if (lineVal > 500) {
analogWrite(motorPin,230);
  } else{
    analogWrite(motorPin,0);
  }
  delay(1000);
}
