#include  <stdio.h>




void limparBuffer() {

int c;
while((c = getchar()) != '\n' && c != EOF);

}


int main () {




  //Variavel das carta 1
  char codcarta[3];
  char estado;
  char cidade[50];
  int populacao;
  float areakm;
  float pib;
  int pontoturist;
  float pibpercapita;
  float densidade;
  //Variavel Carta 2 


  char codcarta2[3];
  char estado2;
  char cidade2[50];
  int populacao2;
  float areakm2;
  float pib2;
  int pontoturist2;
  float pibpercapita2;
  float densidade2;

  
  //Informações da 1° Carta 

  
  printf("Carta N°1: \n");

  printf("Digite o codigo da carta: \n");
  scanf (" %s" , codcarta);
   limparBuffer();

  printf("Digite o estado (1 caractere): \n");
  scanf (" %c" , &estado);
  limparBuffer();

  printf("Digite o nome da cidade: \n");
   fgets (cidade, 50, stdin);

  printf("Digite a População: \n");
  scanf("%d" , &populacao);

  printf("Digite a Área em km²: \n");
  scanf ("%f", &areakm);

  printf("Digite o PIB: \n");
  scanf ("%f", &pib);

  printf("Digite a quantidade de pontos turísticos: \n");
  scanf ("%d", &pontoturist);

  //Informações da 2° Carta 

   printf("Carta N°2: \n");

  
  printf("Digite o codigo da carta: \n");
  scanf("%s" , codcarta2);
  getchar();

  printf("Digite o estado (1 caractere): \n");
  scanf (" %c" , &estado2);
  getchar();
  
  printf("Digite o nome da cidade: \n");
  fgets (cidade2, 50, stdin);

  printf("Digite a População: \n");
  scanf("%d" , &populacao2);

  printf("Digite a Área em km²: \n");
  scanf ("%f", &areakm2);

  printf("Digite o PIB: \n");
  scanf ("%f", &pib2);

  printf("Digite a quantidade de pontos turísticos: \n");
  scanf ("%d", &pontoturist2);


// Calculo do pib da carta 1 e 2
        

pibpercapita = (float)populacao / pib;
 
pibpercapita2 = (float)populacao2 / pib2;

//Calculo da densidade


densidade = (float)populacao / areakm;

densidade2 = (float)populacao2 / areakm2;


//Exibição das Cartas Cadastradas 

    printf("\n--- Dados da Carta 1 ---\n");
    
    printf("Código da Carta: %s \n", codcarta);
    printf("Estado: %c\n", estado);
    printf("Nome da Cidade: %s "  , cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2fkm²\n", areakm);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pontoturist);
    printf("PIB per capita: %.2f reais \n", pibpercapita);
    printf("Densidade: %.2f hab/km² \n", densidade);
  
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Código da Carta: %s \n", codcarta2);
    printf("Estado: %c\n", estado2);
    printf("Nome da Cidade: %s ", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", areakm2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontoturist2);
    printf("PIB per capita: %.2f reais \n", pibpercapita2);
    printf("Densidade: %.2f hab/km² \n", densidade2);

return 0;

};

