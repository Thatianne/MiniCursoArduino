 /*Projeto de Arduino desenvolvido por Alberto Pena e Ajudado por Felipe Amaral.  
 O uso desse projeto é para uma bomba de airsoft.  
                visite-nos: www.arduinoprog.blogspot.com    */  
 #include <LiquidCrystal.h> //inclusao da biblioteca do Cristal Liquido  
 #define luz 7 //define o pino 7 como luz de fundo  
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //pinos do cristal liquido conectado ao arduino  
 const int buttonPin = 10; //pino do botao 1   
 const int buttonPin1 = 8; //pino do botao 2   
  int buttonPushCounter = 0; //contador do pushbotton    
  int buttonState7 = 0; //variavel de estado do 1º botao      
  int buttonState8 = 0; //vairiavel de estado do 2º botao     
  int lastButtonState = 0; //variavel do último estado do botao    
  int redled = 9; //pino do led  
  int buzzer = 13; // pino do buzzer  
 void setup() {   
  pinMode(luz, OUTPUT); //luz como saida  
  pinMode(buttonPin, INPUT); //botao como entrada    
  pinMode(buttonPin1, INPUT);    
  pinMode(redled, OUTPUT); //led como saida    
  pinMode(buzzer,OUTPUT); //buzzer como saida  
  digitalWrite(luz, HIGH); //luz de fundo ligado  
   lcd.begin(16,2); //display de 16X2  
   lcd.setCursor(0,0); /*local de escrita  
             da palavra tempo*/  
   lcd.print("Tempo:");   
  }  
 void loop() {   
   buttonState7 = digitalRead(buttonPin); //verificando o estado o 1º botao  
   if (buttonState7 != lastButtonState) { //se o estado for diferente o botao e setado  
    if (buttonState7 == HIGH)    
    {  
    buttonPushCounter+=10; //Ao setar o botao é incrementado 10segundo ao contador  
    delay(100); //o uso desse delay é para um controle de incremento   
    lcd.setCursor(7,1); //coordenadas onde aparecerá o contador  
    lcd.print(buttonPushCounter); //escrita do valor ao ser precionado o botão  
    }     
    delay(100);   
   }    
     buttonState8 = digitalRead(buttonPin1); //verificando o estado o 2º botao  
    if(buttonState8 == HIGH){ //se o estado for diferente o botao e setado       
     while(buttonPushCounter != 0){  
     buttonPushCounter = buttonPushCounter - 1; //contagem regressiva  
     digitalWrite(redled, HIGH); //brilho do led  
     delay(500);  
     digitalWrite(redled, LOW);  
     delay(500);  
     lcd.setCursor(0,0); //coordenadas da escrita detonação em:  
     lcd.print("Detonacao em:");  
     lcd.setCursor(7,1); //coordenadas da escrita da contagem regressiva  
     lcd.print(buttonPushCounter);  
     if (buttonPushCounter <= 10) /* retirada do espaços em branco*/   
     {           
        lcd.setCursor(8,1);       
        lcd.print(" ");  
      }   
      if (buttonPushCounter <= 100)  
      {  
        lcd.setCursor(9,1);  
        lcd.print(" ");  
      }   
      if (buttonPushCounter <= 1000)  
      {  
        lcd.setCursor(10,1);       
        lcd.print(" ");  
      }   
     if (buttonPushCounter <= 10000)  
      {  
        lcd.setCursor(11,1);       
        lcd.print(" ");  
      }    
    }   
      if(buttonPushCounter == 0){ //se o a contagem chegar a zero a escrita Terroristas Vencerão ira aparacer  
       lcd.setCursor(0,0);  
       lcd.print(" ");  
       lcd.setCursor(1,0);  
       lcd.print(" ");  
       lcd.setCursor(0,1);  
       lcd.print(" ");  
       lcd.setCursor(2,0);       
      lcd.print("Terroristas ");      
      lcd.setCursor(3,1);  
      lcd.print("Vencerao");  
      delay(1000);  
      for(int buttonPushCounter = 0;buttonPushCounter < 10 ; buttonPushCounter++){ //laço para apito do buzzer e efeito no display  
       lcd.noDisplay();  
      delay(250);  
      lcd.display();  
      delay(250);  
       tone(buzzer,1500);  
      delay(500);  
     noTone(buzzer);  
     delay(500);  
      }       
     }  
    }  
   }
