int sensorPin = A0;
int LED = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(sensorPin);
  int brightness = sensorValue * (255.0 / 1023.0);
  Serial.println(brightness);
  analogWrite(LED, brightness);
  delay(30);
  
}
