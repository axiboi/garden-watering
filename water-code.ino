int firstSensor = A3;   
int firstPin = 10;          
int firstVal= 2;      
int firstSensorValue= 0;     

void setup() {
  pinMode(firstSensor, INPUT);
  pinMode(firstPin, OUTPUT);
  pinMode(ValveOutput1, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(firstPin, HIGH);
  delay(100);
  firstSensorValue = analogRead(firstSensor);
  delay(100);
  Serial.println(sensorValue1);
  digitalWrite(firstPin, LOW);
  delay(250);
  
  if (firstSensorValue>= 700) {
    digitalWrite(ValveOutput1, HIGH);
  }

  if (firstSensorValue< 700) {
    digitalWrite(ValveOutput1, LOW);
  }
  
  delay(500);
}
