/*Declaração das variavéis /
números Reais*/
float N1, N2, N3, P1, P2, P3, M;

void setup() {
  //Inicia a comunicação com o Serial Monitor
  Serial.begin(9600);

  delay(1000);  //Espera estratégica
}

void loop() {
  Serial.print("Digite a nota 1: ");
  N1 = aguardaEntradaNumerica();
  Serial.println(N1);

  Serial.print("Digite a nota 2: ");
  N2 = aguardaEntradaNumerica();
  Serial.println(N2);

  Serial.print("Digite a nota 3: ");
  N3 = aguardaEntradaNumerica();
  Serial.println(N3);

  //Atribuição dos pesos
  Serial.print("Digite o peso 1: ");
  P1 = aguardaEntradaNumerica();
  Serial.println(P1);

  //Atribuição dos pesos
  Serial.print("Digite o peso 2: ");
  P2 = aguardaEntradaNumerica();
  Serial.println(P2);

  //Atribuição dos pesos
  Serial.print("Digite o peso 3: ");
  P3 = aguardaEntradaNumerica();
  Serial.println(P3);

  //Cálculo da média ponderada:
  M = (N1 * P1 + N2 * P2 + N3 * P3) / (P1 + P2 + P3);

  //Exibe o valor da média calculada
  Serial.print("A media ponderada e:");
  Serial.println(M, 1);
  delay(1000);
}


//Criando uma função chamada
float aguardaEntradaNumerica() {
  while (!Serial.available()) {
    //Aguarda até que um valor seja digitado
  }

  //Verifica se a entrada é numérica ou ponto
  while (!isdigit(Serial.peek()) && Serial.peek() != '.') {
    //Descarta a entrada não númerica
    Serial.read();
    while(Serial.available() == 0){
      //Aguarda a nova entrada do usuário
    }
  }
  //Retornar o valor digitado no serial em tipo float
  return Serial.parseFloat();
}