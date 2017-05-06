int ledPin = 3;

void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  analogWrite(ledPin, sensorValue);
  delay(10);
}
