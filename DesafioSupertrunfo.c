#include <stdio.h>

int main(){

     //Declaração de Variáveis
     int habitantes1, habitantes2, turisticos1, turisticos2;
     float area1, area2, pib1, pib2;
     char estado1, estado2;
     char codcarta1[3], codcarta2[3];
     char cidade1[20], cidade2[20];

     //Apresentação inicial
     printf("Bem Vindos ao Jogo Super-Trunfo\n");
     printf("---------------------------------\n");
     printf("---------------------------------\n");

     //Cadastrando Carta 1
     printf("Super-Trunfo\n");
     printf("Digite uma letra para o Estado de A a H: ");
     scanf("%s", &estado1);
     printf("Repita a letra com um número de 01 a 04: ");
     scanf("%s", codcarta1);
     printf("Digite um nome de uma Cidade: ");
     scanf("%s", cidade1);
     printf("Digite a População da Cidade:");
     scanf("%d", &habitantes1);
     printf("Digite a área em km²: ");
     scanf("%f", &area1);
     printf("Digite a quantidade de Pontos Turísticos: ");
     scanf("%d", &turisticos1);

     //Exibindo os Dados da Carta 1
     














     return 0;
}