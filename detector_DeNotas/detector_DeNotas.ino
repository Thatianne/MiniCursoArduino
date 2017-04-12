int inAnalog = A1;
void setup() {
  Serial.begin(9600);
}

void loop() {
 int t = analogRead(inAnalog);
 Serial.println(t);
}
