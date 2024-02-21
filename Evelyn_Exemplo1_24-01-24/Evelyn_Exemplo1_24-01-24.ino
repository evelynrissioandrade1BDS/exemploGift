//Declaração de variáveis de entrada
int N1;
int N2;
int N3;

//Declaração da variável de saída
int S;

void setup() {
  // Configuração inicial do sistema
 // Será executada apenas no ínicio
 
// Iniciando a comunicação com o Monitor Serial
Serial.begin(9600)

 N1 = 1;
 N2 = 2;
 N3 = 3;
 S = 0;

//Processamento das entradas
 S = N1 + N2 + N3;
}

void loop() {
  // Código que será executada repetidamente
  Serial.print("Hoje é o último dia de Janeiro!!!:"); // Mostra a frase no monitor
  delay(1000); //Espera 1 segundo antes de seguir o loop
}
