//Declaração das variáveis que representam os pinos dos leds
int ledAmarelo = 8;
int ledVermelho = 9;
int ledVerde = 10;

    void setup() {
 //Definindo os tipos dos pinos
 pinMode (8, OUTPUT);
 pinMode(9, OUTPUT);
 pinMode(10, OUTPUT);

delay(1000);
}

void loop() {
 digitalWrite(ledAmarelo, HIGH);
 delay(500);
 digitalWrite(ledAmarelo, LOW);
 delay(500);
}