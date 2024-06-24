int airQualityPin = A0;
int airQualityValue = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  airQualityValue = analogRead(airQualityPin);
  Serial.println(airQualityValue);
  delay(1000);
}
