#include <stdio.h>
#include <string.h>

int main(){

//Declaração de variáveis    
char estado1, estado2;
char codigo1[4], codigo2[4];
char cidade1[50], cidade2[50];
unsigned long int populacao1, populacao2;
float area1, area2;
float PIB1, PIB2;
int npturistico1, npturistico2;

// Entrada de dados
printf("Carta 1: \n");
printf("Digite o estado: ");
scanf("%c", &estado1);

printf("Digite o codigo: ");
scanf("%s", &codigo1);

getchar(); //Consome o Enter deixado pelo scanf

printf("Digite a cidade: ");
fgets(cidade1,50,stdin);
cidade1[strcspn(cidade1, "\n")]=0; //Remove o enter guardado pelo fgets

printf("Digite a populacao: ");
scanf("%lu", &populacao1);

printf("Digite a area: ");
scanf("%f", &area1);

printf("Digite o PIB: ");
scanf("%f", &PIB1);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &npturistico1);

printf("Carta 2: \n");

getchar(); // Consome o Enter

printf("Digite o Estado: ");
scanf("%c", &estado2);

printf("Digite o codigo: ");
scanf("%s", &codigo2);

getchar(); // Consome o Enter deixado pelo scanf

printf("Digite a cidade: ");
fgets(cidade2,50,stdin);
cidade2[strcspn(cidade2, "\n")]=0; //Remover o Enter que ficou salvo pelo fgets

printf("Digite a populacao: ");
scanf("%lu", &populacao2);

printf("Digite a area: ");
scanf("%f", &area2);

printf("Digite o PIB: ");
scanf("%f", &PIB2);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &npturistico2);


float densidade1, densidade2;
float pibpercapita1, pibpercapita2;

//Processamento dos dados
densidade1 = populacao1 / area1;
densidade2 = populacao2 / area2;
pibpercapita1 = (PIB1*1000000000) / populacao1;
pibpercapita2 = (PIB2*1000000000) / populacao2;

//Saída de dados
printf("Cidade 1: )\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Nome da cidade: %s\n", cidade1);
printf("Populacao: %lu\n", populacao1);
printf("Area: %.2f Km\n", area1);
printf("PIB: %.2f bilhoes de reais\n", PIB1);
printf("Numero de Pontos Turisticos: %d\n", npturistico1);
printf("Densidade populacional: %.2f hab/km\n",densidade1);
printf("PIB Per Capita: %.2f reais\n",pibpercapita1);

printf("Carta 2: \n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da cidade: %s\n", cidade2);
printf("Populacao: %lu\n", populacao2);
printf("Area: %.2f km\n", area2);
printf("PIB: %.2f bilhoes de reais\n", PIB2);
printf("Numero de Pontos Turisticos: %d\n", npturistico2);
printf("Densidade populacional: %.2f hab/km\n",densidade2);
printf("PIB Per Capita: %.2f reais\n",pibpercapita2);

float SuperPoder1;
float SuperPoder2;

SuperPoder1 = populacao1 + area1 + PIB1 + npturistico1 + (1/densidade1) + pibpercapita1;
SuperPoder2 = populacao2 + area2 + PIB2 + npturistico2 + (1/densidade2) + pibpercapita2;

printf("Super Poder 1: %.2f\n", SuperPoder1);
printf("Super Poder 2: %.2f\n", SuperPoder2);

//Comparação
printf("===Comparacao de cartas===\n");
printf("Populacao da Carta 1 e maior que Carta 2?: %d\n", (populacao1 > populacao2));
printf("Area da Carta 1 e maior que Carta 2?: %d\n",(area1 > area2));
printf("PIB da Carta 1 e maior que Carta 2?: %d\n", (PIB1 > PIB2));
printf("PIB Per Capita da Carta 1 e maior que Carta 2?: %d\n", (pibpercapita1 > pibpercapita2));
printf("Numero de Pontos Turisticos da Carta 1 e maior que Carta 2?: %d\n", (npturistico1 > npturistico2));
printf("Densidade Populacional da Carta 1 e menor que Carta 2?: %d\n", (densidade1 < densidade2));
printf("Super Poder da carta 1 e maior que carta 2?: %d\n", (SuperPoder1 > SuperPoder2));



return 0;






}
