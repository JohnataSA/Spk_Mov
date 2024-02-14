
const int stepPin = 5; // Pulso +
const int dirPin = 2; // Direção +
const int enPin = 8; // Enable +
const int botao = 9; // botao input
const int botao2 = 11; // botao input 2

void setup() {
  pinMode(botao,INPUT_PULLUP);
  pinMode(botao2,INPUT_PULLUP);
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  pinMode(enPin,OUTPUT);
  digitalWrite(enPin,LOW);
  
}

void loop() {
  if (digitalRead(botao) == HIGH) {
  digitalWrite(dirPin,HIGH); // Ativa o motor e move in para direita
  for(int x = 0; x < 800; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(500); 
  }
  }
  if (digitalRead(botao2) == HIGH) {
  digitalWrite(dirPin,LOW); // Ativa o motor e move in para esquerda
  for(int x = 0; x < 800; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(500); 
  }
  }

   
 
}