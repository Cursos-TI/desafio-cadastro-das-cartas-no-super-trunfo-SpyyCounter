#include  <stdio.h>

//calcula a densidade
float calculadensidade(unsigned long int populacao, float areakm){
    return populacao / areakm;
}

//calcula o Pib per capita
float calculapibpercapita(float pib, unsigned long int populacao){
    return (pib *1000000000) / populacao;
}

//calcula o Super Poder das cartas
float calculasuperpoder(unsigned long int populacao,  float area, float pib, float pontoturist, float pibpercapita1, float densidadepopu){
    return populacao + area + (pib * 1000000000) + pontoturist + pibpercapita1 + (1 / densidadepopu);
}

//função para substituir o getchar() pq ele tava quebrando o codigo 
void limparBuffer() {

int c;
while((c = getchar()) != '\n' && c != EOF);

}


int main () {


  //Variavel das carta 1
  char codcarta[3];
  char estado;
  char cidade[50];
  unsigned long int populacao;
  float areakm;
  float pib;
  int pontoturist;
  
  //Variavel Carta 2 


  char codcarta2[3];
  char estado2;
  char cidade2[50];
  unsigned long int populacao2;
  float areakm2;
  float pib2;
  int pontoturist2;
 
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
  scanf("%f" , &populacao);

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
  scanf("%f" , &populacao2);

  printf("Digite a Área em km²: \n");
  scanf ("%f", &areakm2);

  printf("Digite o PIB: \n");
  scanf ("%f", &pib2);

  printf("Digite a quantidade de pontos turísticos: \n");
  scanf ("%d", &pontoturist2);

    //Calculos do pib, densidade e poder
    float densidadepopu = calculadensidade(populacao, areakm);
    float pibpercapita1 = calculapibpercapita(pib, populacao);
    float superpoder = calculasuperpoder(populacao, areakm, pib,pontoturist, pibpercapita1, densidadepopu);

    float densidadepopu2 = calculadensidade(populacao2, areakm2);
    float pibpercapita2 = calculapibpercapita(pib2, populacao2);
    float superpoder2 = calculasuperpoder(populacao2, areakm2, pib2, pontoturist2, pibpercapita2, densidadepopu2);
 
    //Exibição das Cartas Cadastradas 

    printf("\n--- Dados da Carta 1 ---\n");
    
    printf("Código da Carta: %s \n", codcarta);
    printf("Estado: %c\n", estado);
    printf("Nome da Cidade: %s "  , cidade);
    printf("População: %f\n", populacao);
    printf("Área: %.2fkm²\n", areakm);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pontoturist);
    printf("PIB per capita: %.2f reais \n", pibpercapita1);
    printf("Densidade: %.2f hab/km² \n", densidadepopu);
    printf("Super Poder: %.2f\n", superpoder);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Código da Carta: %s \n", codcarta2);
    printf("Estado: %c\n", estado2);
    printf("Nome da Cidade: %s ", cidade2);
    printf("População: %f\n", populacao2);
    printf("Área: %.2fkm²\n", areakm2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontoturist2);
    printf("PIB per capita: %.2f reais \n", pibpercapita2);
    printf("Densidade: %.2f hab/km² \n", densidadepopu2);
    printf("Super Poder: %.2f\n", superpoder2);

printf("\n---Comparação das Cartas---\n");
    printf("População: Carta %d venceu (%d)\n", 1 + (populacao < populacao2), (populacao > populacao2) * 1);
    printf("Área: Carta %d venceu (%d)\n", 1 + (areakm < areakm2), (areakm > areakm2) * 1);
    printf("PIB: Carta %d venceu (%d)\n", 1 + (pib < pib2), (pib > pib2) * 1);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 1 + (pontoturist < pontoturist2), (pontoturist > pontoturist2) * 1);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 1 + (densidadepopu > densidadepopu2), (densidadepopu < densidadepopu2) * 1); 
    printf("PIB per Capita: Carta %d venceu (%d)\n", 1 + (pibpercapita1 < pibpercapita2), (pibpercapita1 > pibpercapita2) * 1);
    printf("Super Poder: Carta %d venceu (%d)\n", 1 + (superpoder < superpoder2), (superpoder > superpoder2) * 1);






return 0;

};





