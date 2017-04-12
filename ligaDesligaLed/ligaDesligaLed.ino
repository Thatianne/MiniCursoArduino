int led = 4;
int btn = 2;
int var = 0;       // valor instantaneo enviado pelo botão
int var2 = 0;     // valor guardado
int estado = 0;  // guarda o valor 0 ou 1 (HIGH ou LOW)

void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
}

void loop() {
  var = digitalRead(btn);
  if((var == HIGH) && (var2 == LOW)){
    estado = 1- estado;
    delay(20);
  }
  var2 = var;
  if(estado == 1){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
  
}
