#include <stdio.h>

int main(){

     //Declaração de Variáveis
     int habitantes1, habitantes2, turisticos1, turisticos2;
     float area1, area2 = 0.0;
     float pib1, pib2 = 0.000;
     char est1, est2;
     char codcarta1[3], codcarta2[3];
     char cidade1[20], cidade2[20];

     //Apresentação inicial
     printf("Bem Vindos ao Jogo Super-Trunfo\n");
     printf("---------------------------------\n");
     printf("---------------------------------\n");

     //Cadastrando Carta 1
     printf("Super-Trunfo\n");
     printf("Digite uma letra para o Estado de A a H: \n");
     scanf("%c", &est1);
     printf("Repita a letra com um número de 01 a 04: \n");
     scanf("%s", codcarta1);
     printf("Digite um nome de uma Cidade: \n");
     scanf("%s", cidade1);
     printf("Digite a População da Cidade: \n");
     scanf("%d", &habitantes1);
     printf("Digite a área em km²: \n");
     scanf("%f", &area1);
     printf("Digite o PIB da Cidade: \n");
     scanf("%f", &pib1);
     printf("Digite a quantidade de Pontos Turísticos: \n");
     scanf("%d", &turisticos1);

     printf("---------------------------------\n");
     //Exibindo os Dados da Carta 1
     printf("Estado: %c\n", est1);
     printf("Código da Carta: %s\n", codcarta1);
     printf("Nome da Cidade: %s\n", cidade1);
     printf("População: %d\n", habitantes1);
     printf("Área: %.2f km²\n", area1);
     printf("PIB em Bilhões: %.3fR$\n", pib1);
     printf("Pontos Turísticos: %d\n", turisticos1);




     return 0;
}