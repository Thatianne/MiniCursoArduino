int buzzer = 4;
const int tempo = 500;
void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
    //Dó
    tone(buzzer,261);
    delay(tempo);
    noTone(buzzer);
    //Ré
    tone(buzzer,293);             
    delay(tempo);    
    noTone(buzzer); 
    //Mi
    tone(buzzer,329);      
    delay(tempo);
    noTone(buzzer);
    //Fá
    tone(buzzer,349);    
    delay(tempo);    
    noTone(buzzer); 
    //Sol
    tone(buzzer,392);            
    delay(tempo);
    noTone(buzzer); 
}
