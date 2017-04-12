int btn1 = 2;
int btn2 = 3;
int rele1 = 4;
int rele2 = 5;
int rele1Atual = 0;
int rele2Atual = 0;
int btn1Atual = 0;
int btn2Atual = 0;
int btn1Anterior = 0;
int btn2Anterior = 0;

void setup() {
  pinMode(rele1, OUTPUT);
  pinMode(btn1, INPUT);
  pinMode(rele2, OUTPUT);
  pinMode(btn2, INPUT);
}

void loop() {
  btn1Atual = digitalRead(btn1);
  if((btn1Atual == HIGH) && (btn1Anterior == LOW)){
    rele1Atual = digitalRead(rele1);
    if(rele1Atual == LOW){
      digitalWrite(rele1, HIGH);
    }else{      
      digitalWrite(rele1, LOW);
    }
  }
  btn1Anterior = btn1Atual;


  btn2Atual = digitalRead(btn2);
  if((btn2Atual == HIGH) && (btn2Anterior == LOW)){
    rele2Atual = digitalRead(rele2);
    if(rele2Atual == LOW){
      digitalWrite(rele2, HIGH);
    }else{      
      digitalWrite(rele2, LOW);
    }
  }
  btn2Anterior = btn2Atual;
}
