/*Declaração das variavéis /
números Reais*/
float N1, N2, N3, P1, P2, P3, M;

void setup() {
 //Inicia a comunicação com o Serial Monitor
 Serial.begin(9600);

 delay(1000); //Espera estratégica
 
}

void loop() {
 Serial.println("Digite a nota 1:");

//while = comando de repetição "enquanto"
 while(Serial.available() == 0){
 //Aguarda a entrada de valores do usuário
  }


 N1 = Serial.parseFloat();

 Serial.println("Digite a nota 2:");
 while(Serial.available() == 0){
 //Aguarda a entrada da nota 2
 }

 N2 = Serial.parseFloat();

 Serial.println("Digite a nota 3:");
 while(Serial.available() == 0){
 //Aguarda a entrada da nota 3
 }
 
 N3 = Serial.parseFloat();


 //Atribuição dos pesos 
 Serial.println("Digite o peso 1");
 while(Serial.available() == 0){
  //Aguarda a entrada do peso 1

 }
 P1 = Serial.parseFloat();

 //Atribuição dos pesos 
 Serial.println("Digite o peso 2");
 while(Serial.available() == 0){
  //Aguarda a entrada do peso 2
 }
  P2 = Serial.parseFloat();

 //Atribuição dos pesos 
 Serial.println("Digite o peso 3");
 while(Serial.available() == 0){
  //Aguarda a entrada do peso 3
 }
  P3 = Serial.parseFloat();

 //Cálculo da média ponderada:
 M = (N1*P1 + N2*P2 + N3*P3) / (P1 + P2 + P3);

 //Exibe o valor da média calculada
 Serial.print("A média ponderada é:");
 Serial.println(M, 1);
 delay(1000);
}


//Criando uma função chamada
float aguardaEntrada(){
  while(!Serial.available()){
    //Aguarda até que um valor seja digitado
  }

  //Retornar o valor digitado no serial em tipo float
  return Serial.parseFloat();


}