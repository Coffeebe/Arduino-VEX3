 
 volatile int sensorvalue = A0;
const int sensor = 0;
  
void setup() {
  Serial.begin(9600);
 pinMode(sensor, INPUT_PULLUP);
}

void loop() {
Serial.print("sensorvalue:");
Serial.println("sensorvalue");
 delay(69);


} 

void Idk(){
  int currentstate = digitalRead(sensor);
}



