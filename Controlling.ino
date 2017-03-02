int switchPin = 7;
int LEDPin = 13;
void setup() {
 pinMode (switchPin, INPUT);
 pinMode (LEDPin, OUTPUT);
 Serial.begin(9600);
}
void loop() {
 if (digitalRead(switchPin) == HIGH) {
 Serial.print(0, BYTE);
 digitalWrite(LEDPin, LOW);
 } else {
 Serial.print(1, BYTE);
 digitalWrite(LEDPin, HIGH);
 }
 delay(100);
}
