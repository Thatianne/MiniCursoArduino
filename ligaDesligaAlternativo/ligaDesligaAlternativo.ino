int btn = 2;
int led = 4;
int ledAtual = 0;
int btnAtual = 0;
int btnAnterior = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
}

void loop() {
  btnAtual = digitalRead(btn);
  if((btnAtual == HIGH) && (btnAnterior == LOW)){
    ledAtual = digitalRead(led);
    if(ledAtual == LOW){
      digitalWrite(led, HIGH);
    }else{      
      digitalWrite(led, LOW);
    }
  }
  btnAnterior = btnAtual;
}
