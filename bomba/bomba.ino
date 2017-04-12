int fio = 2;
int buzzer = 4;

void setup() {
  pinMode(fio, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  int estado = digitalRead(fio);
  
  Serial.println(estado);
  
  if(estado == HIGH){
    noTone(buzzer);
  }else{
    tone(buzzer, 250);
    delay(1000);
    noTone(buzzer);
    delay(1000);
  }

}
