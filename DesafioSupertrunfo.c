#include <stdio.h>

int main(){

     //Declaração de Variáveis: Cartas 1 e 2
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
     printf("Vamos Cadastrar a Primeira Carta!\n");
     printf("Super-Trunfo\n");
     printf("Tecle uma letra de A a H, para definir o Estado: \n");
     scanf(" %c", &est1);
     printf("Repita a letra com um número de 1 a 4: \n");
     scanf("%s", codcarta1);
     printf("Digite um nome de uma Cidade: \n");
     scanf("%s", cidade1);
     printf("Digite a População da Cidade: \n");
     scanf("%d", &habitantes1);
     printf("Digite a área em km²: \n");
     scanf("%f", &area1);
     printf("Digite o PIB (em Bilhões) da Cidade: \n");
     scanf("%f", &pib1);
     printf("Digite a quantidade de Pontos Turísticos: \n");
     scanf("%d", &turisticos1);

     printf("---------------------------------\n");

     //Cadastrando Carta 2
     printf("Vamos Cadastrar a Segunda Carta!\n");
     printf("Super-Trunfo\n");
     printf("Tecle uma letra de A a H, para definir o Estado: \n");
     scanf(" %c", &est2);
     printf("Repita a letra com um número de 1 a 4: \n");
     scanf("%s", codcarta2);
     printf("Digite um nome de uma Cidade: \n");
     scanf("%s", cidade2);
     printf("Digite a População da Cidade: \n");
     scanf("%d", &habitantes2);
     printf("Digite a área em km²: \n");
     scanf("%f", &area2);
     printf("Digite o PIB (em Bilhões) da Cidade: \n");
     scanf("%f", &pib2);
     printf("Digite a quantidade de Pontos Turísticos: \n");
     scanf("%d", &turisticos2);

     printf("---------------------------------\n");
     printf("---------------------------------\n");

     //Exibindo os Dados da Carta 1
     printf("Carta Nº 1\n");
     printf("Estado: %c\n", est1);
     printf("Código da Carta: %s\n", codcarta1);
     printf("Nome da Cidade: %s\n", cidade1);
     printf("População: %d\n", habitantes1);
     printf("Área: %.2f km²\n", area1);
     printf("PIB em Bilhões: %.3fR$\n", pib1);
     printf("Pontos Turísticos: %d\n", turisticos1);

      printf("---------------------------------\n");

     //Exibindo os Dados da Carta 2
     printf("Carta Nº 2\n");
     printf("Estado: %c\n", est2);
     printf("Código da Carta: %s\n", codcarta2);
     printf("Nome da Cidade: %s\n", cidade2);
     printf("População: %d\n", habitantes2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB em Bilhões: %.3fR$\n", pib2);
     printf("Pontos Turísticos: %d\n", turisticos2);



     return 0;
}