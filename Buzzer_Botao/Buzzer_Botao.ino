//Constante para o pino da buzzer
#define pinoBuzzer 2
#define pinoBotao 4
//Constante do led
#define pinoLedAmarelo 3

void setup() {
  Serial.begin(9600);

  //Modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedAmarelo, OUTPUT);
  pinMode(pinoBotao, INPUT);
  delay(1000);  //Parada estratégica
}

void loop() {
  if (digitalRead(pinoBotao) == 1){
    tone(pinoBuzzer, 523);//Nota musical dó
    digitalWrite(pinoLedAmarelo, HIGH);
  } else {
  noTone(pinoBuzzer);//Desliga o buzzer
  digitalWrite(pinoLedAmarelo, LOW); //Apaga o LED
  }

  
}
