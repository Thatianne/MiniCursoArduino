/int btn = 2;
int buzzer = 4;
int buzzerAtual = 0;
int btnAtual = 0;
int btnAnterior = 0;
void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(btn, INPUT);
}

void loop() {
  btnAtual = digitalRead(btn);
  if((btnAtual == HIGH) && (btnAnterior == LOW)){
    buzzerAtual = digitalRead(buzzer);
    if(buzzerAtual == LOW){
      tone(buzzer,261);
    }else{      
      noTone(buzzer);
    }
  }
  btnAnterior = btnAtual;
}
