int firstSensor = A3;   
int firstPin = 10;
int firstVal= 2;
int firstSensorValue= 0;   

int secondSensor = A4;    
int secondPin = 12;
int secondVal = 4;  
int secondSensorValue = 0;    

void setup() {
  pinMode(firstSensor, INPUT);
  pinMode(firstPin, OUTPUT);
  pinMode(secondSensor, INPUT);
  pinMode(secondPin, OUTPUT);
  pinMode(ValveOutput1, OUTPUT);
  pinMode(secondVal, OUTPUT);

  Serial.begin(9000);
}

void loop() {
  digitalWrite(firstPin, HIGH);
  delay(50);
  firstSensorValue = analogRead(firstSensor);
  delay(50);
  Serial.println(sensorValue1);
  digitalWrite(firstPin, LOW);
  delay(100);

  digitalWrite(secondPin, HIGH);
  delay(50);
  secondSensorValue = analogRead(secondSensor);
  delay(50);
  Serial.println(secondSensorValue);
  digitalWrite(secondPin, LOW);
  delay(100);


  if (firstSensorValue >= 550) {
    digitalWrite(ValveOutput1, HIGH);
  }

  if (firstSensorValue < 550) {
    digitalWrite(ValveOutput1, LOW);
  }

  if (secondSensorValue >= 550) {
    digitalWrite(secondVal, HIGH);
  }

  if (secondSensorValue < 550) {
    digitalWrite(secondVal, LOW);
  }
  
  delay(500);
}
