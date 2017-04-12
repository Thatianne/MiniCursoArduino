int btn = 2;
void setup() {
  pinMode(btn, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(btn));
  delay(30);
  
}
