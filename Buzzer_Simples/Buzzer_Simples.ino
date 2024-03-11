//Constante para o pino da buzzer
#define pinoBuzzer 2

//Constante do led
#define pinoLedAmarelo 3

void setup() {
  Serial.begin(9600);

  //Modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedAmarelo, OUTPUT);
  delay(1000);  //Parada estratégica
}

void loop() {
  tone(pinoBuzzer, 523);//Nota musical dó
  digitalWrite(pinoLedAmarelo, HIGH);
  delay(1000);
  noTone(pinoBuzzer);//Desliga o buzzer
  digitalWrite(pinoLedAmarelo, LOW); //Apaga o LED
  delay(1000);
}
