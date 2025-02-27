#include <stdio.h>

int main(){

     //Declaração de Variáveis: Cartas 1 e 2
     int habitantes1, habitantes2, turisticos1, turisticos2;
     float area1 = 0.0, area2 = 0.0;
     float pib1 = 0.000, pib2 = 0.000;
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
     scanf(" %c", &est1); // Entrada de Dados Estado
     printf("Repita a letra com um número de 1 a 4: \n");
     scanf("%s", codcarta1); // Entrada de dados Código da Carta
     printf("Digite um nome de uma Cidade: \n");
     scanf("%s", cidade1); // Entrada de Dados Cidade
     printf("Digite a População da Cidade: \n");
     scanf("%d", &habitantes1); // Entrada de Dados População
     printf("Digite a área em km²: \n");
     scanf("%f", &area1); // Entrada de Dados Área
     printf("Digite o PIB (em Bilhões) da Cidade: \n");
     scanf("%f", &pib1); //Entrada de Dados PIB
     printf("Digite a quantidade de Pontos Turísticos: \n");
     scanf("%d", &turisticos1); //Entrada de Dados Pontos Turíscticos

     printf("---------------------------------\n");

     //Cadastrando Carta 2
     printf("Vamos Cadastrar a Segunda Carta!\n");
     printf("Super-Trunfo\n");
     printf("Tecle uma letra de A a H, para definir o Estado: \n");
     scanf(" %c", &est2); // Entrada de Dados Estado
     printf("Repita a letra com um número de 1 a 4: \n");
     scanf("%s", codcarta2); // Entrada de dados Código da Carta
     printf("Digite um nome de uma Cidade: \n");
     scanf("%s", cidade2); // Entrada de Dados Cidade
     printf("Digite a População da Cidade: \n");
     scanf("%d", &habitantes2); // Entrada de Dados População
     printf("Digite a área em km²: \n");
     scanf("%f", &area2); // Entrada de Dados Área
     printf("Digite o PIB (em Bilhões) da Cidade: \n");
     scanf("%f", &pib2); //Entrada de Dados PIB
     printf("Digite a quantidade de Pontos Turísticos: \n");
     scanf("%d", &turisticos2); //Entrada de Dados Pontos Turíscticos

     printf("---------------------------------\n");
     printf("---------------------------------\n");

     //Exibindo os Dados da Carta 1
     printf("Carta Nº 1\n");
     printf("Estado: %c\n", est1);
     printf("Código da Carta: %s\n", codcarta1);
     printf("Nome da Cidade: %s\n", cidade1);
     printf("População: %d\n", habitantes1);
     printf("Área: %.2f km²\n", area1);
     printf("PIB em Bilhões: R$%.3f Bilhões\n", pib1);
     printf("Pontos Turísticos: %d\n", turisticos1);

     printf("---------------------------------\n");

     //Exibindo os Dados da Carta 2
     printf("Carta Nº 2\n");
     printf("Estado: %c\n", est2);
     printf("Código da Carta: %s\n", codcarta2);
     printf("Nome da Cidade: %s\n", cidade2);
     printf("População: %d\n", habitantes2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB em Bilhões: R$%.3f Bilhões\n", pib2);
     printf("Pontos Turísticos: %d\n", turisticos2);


     
     return 0;
}