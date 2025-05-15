#include  <stdio.h>

 int main () {
  //Variavel das carta 1
  char estados;
  char codcarta;
  char cidade[50];
  int populacao;
  float areakm;
  float pib;
  int pontoturist;

  //Variavel Carta 2 

  char estados2;
  char codcarta2;
  char cidade2[50];
  int populacao2;
  float areakm2;
  float pib2;
  int pontoturist2;

  //Perguntas sobre a carta 1

  printf("Carta N°1: \n");


  printf("Digite o estado (1 caractere): \n");
  scanf (" %c" , &estados);

  printf("Digite o codigo da carta: \n");
  scanf("%s" , &codcarta);
  getchar();

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


  printf("Digite o estado (1 caractere): \n");
  scanf (" %c" , &estados2);

  printf("Digite o codigo da carta: \n");
  scanf("%s" , &codcarta2);
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




printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estados);
    printf("Código da Carta: %c \n", codcarta);
    printf("Nome da Cidade: %s", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %fkm²\n", areakm);
    printf("PIB: %f \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pontoturist);
    
printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estados2);
    printf("Código da Carta: %c \n", codcarta2);
    printf("Nome da Cidade: %s", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %fkm²\n", areakm2);
    printf("PIB: %f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontoturist2);

return 0;

 };