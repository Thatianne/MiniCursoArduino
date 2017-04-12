int led = 4;
int btn = 2;
int var = 0;       // valor instantaneo enviado pelo botão
int var2 = 0;     // valor guardado
int estado = 0;  // guarda o valor 0 ou 1 (HIGH ou LOW)
int cont = 0;
const int tempo = 700;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
}

void loop() {
  var = digitalRead(btn);
  if((var == HIGH) && (var2 == LOW)){
    estado = 1- estado;
    delay(20);
  }else{
    estado = 0;
  }
  var2 = var;
  if(estado == 1){
    cont++;
    if(cont == 1){
      piscaUm();
    }else if(cont == 2){
      piscaDois();
    }else{
      piscaTres();
      cont = 0; 
    }
  }else{
    digitalWrite(led, LOW);
  }
}

void piscaUm(){
  digitalWrite(led, HIGH);
  delay(tempo);
}
void piscaDois(){
  digitalWrite(led, HIGH);
  delay(tempo);
  digitalWrite(led, LOW);
  delay(tempo);
  digitalWrite(led, HIGH);
  delay(tempo);
  
}
void piscaTres(){
  digitalWrite(led, HIGH);
  delay(tempo);
  digitalWrite(led, LOW);
  delay(tempo);
  digitalWrite(led, HIGH);
  delay(tempo);
  digitalWrite(led, LOW);
  delay(tempo);
  digitalWrite(led, HIGH);
  delay(tempo);
}

