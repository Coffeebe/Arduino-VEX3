const int motorPin = 10;
#define bump_Pin_sensor 0
 
 bool pressed = false;

void setup() {
  pinMode(bump_Pin_sensor,INPUT);
  pinMode(motorPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
 if (pressed){
  pressed = (digitalRead(bump_Pin_sensor)== HIGH);
  analogWrite(motorPin,254);
  delay(1000);
  Serial.println("on");
  } else{
    pressed = (digitalRead(bump_Pin_sensor)== LOW);
    analogWrite(motorPin,0);
    delay(1000);
    Serial.println("off");
  }
  //delay(500);
}
