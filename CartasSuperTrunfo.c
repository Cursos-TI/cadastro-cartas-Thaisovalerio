#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

char estado1, estado2;
char codigo1[4], codigo2[4];
char cidade1[50], cidade2[50];
int populacao1, populacao2;
float area1, area2;
float PIB1, PIB2;
int npturistico1, npturistico2;

printf("Carta 1: \n");
printf("Digite o estado: ");
scanf("%c", &estado1);

printf("Digite o código da cidade: ");
scanf("%s", &codigo1);

getchar(); //Consome o Enter deixado pelo scanf

printf("Digite a cidade: ");
fgets(cidade1,50,stdin);
cidade1[strcspn(cidade1, "\n")]=0; //Remove o enter guardado pelo fgets

printf("Digite a população: ");
scanf("%d", &populacao1);

printf("Digite a área: ");
scanf("%f", &area1);

printf("Digite o PIB: ");
scanf("%f", &PIB1);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &npturistico1);

printf("Carta 2: \n");

getchar(); // Consome o Enter

printf("Digite o Estado: ");
scanf("%c", &estado2);

printf("Digite o código da cidade: ");
scanf("%s", &codigo2);

getchar(); // Consume o Enter deixado pelo scanf

printf("Digite a cidade: ");
fgets(cidade2,50,stdin);
cidade2[strcspn(cidade2, "\n")]=0; //Remover o Enter que ficou salvo pelo fgets

printf("Digite a população: ");
scanf("%d", &populacao2);

printf("Digite a área: ");
scanf("%f", &area2);

printf("Digite o PIB: ");
scanf("%f", &PIB2);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &npturistico2);

printf("Cidade 1: \n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f Km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", PIB1);
printf("Número de Pontos Turísticos: %d\n", npturistico1);

printf("Carta 2: \n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", PIB2);
printf("Número de Pontos Turísticos: %d\n", npturistico2);


return 0;
} 
