#include <stdio.h> //inclusão de biblioteca

int main() { //função principal
    char est1[10], est2[10], cod1[10], cod2[10], cid1[50], cid2[50];          //declaração de variáveis do tipo char (variáveis que armazenam um ou mais caracteres)
    int pontotur, pontotur1, pontotur2;                                       //declaração de variáveis do tipo integer (variáveis que armazenam números inteiros)
    float area, area1, area2, pib, pib1, pib2;                                //declaração de variáveis do tipo float (variáveis que armazenam números decimais)
    float densidade_pop, densidade_pop1, densidade_pop2, pib_percapita, pib_percapita1, pib_percapita2;
    unsigned long int populacao, pop1, pop2;
    float superpoder, superpoder1, superpoder2;

    printf("Preencha abaixo os dados da Carta 1: \n"); //o comando "printf" serve para saída de dados, ou seja, imprime os dados na tela. 
    printf("Por favor, escolha um estado dentre os 8 listados a seguir: 'A, B, C, D, E, F, G ou H' e escreva sua escolha abaixo: \n"); //o comando \n serve para 'quebrar' linha
    scanf("%s", &est1); //o comando scanf serve para entrada de dados, o % é o especificador de formato, no caso, o %s está especificando que o formato a ser lido é uma string. 
    printf("Digite o código da carta, que deverá ser composto pela letra do estado seguida de um número de 01 a 04, por exemplo: A01 ou C04. \n");
    scanf("%s", &cod1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cid1);
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%u", &pop1); //%u está especificando que o formato a ser lido é um número inteiro positivo
    printf("Digite a área da cidade em quilômetros quadrados, por favor, utilize apenas números, sem pontuação: \n");
    scanf("%f", &area1); //%f está especificando que o formato a ser lido é um número decimal
    printf("Digite o Produto Interno Bruto da cidade, por favor, utilize apenas números, sem pontuação: \n");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontotur1);

    printf("Agora preencha abaixo os dados da Carta 2: \n");
    printf("Por favor, escolha um estado dentre os 8 listados a seguir: 'A, B, C, D, E, F, G ou H' e escreva sua escolha abaixo: \n");
    scanf("%s", &est2);
    printf("Digite o código da carta, que deverá ser composto pela letra do estado seguida de um número de 01 a 04, por exemplo: A01 ou C04. \n");
    scanf("%s", &cod2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cid2);
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%u", &pop2);
    printf("Digite a área da cidade em quilômetros quadrados, por favor, utilize apenas números, sem pontuação: \n");
    scanf("%f", &area2);
    printf("Digite o Produto Interno Bruto da cidade, por favor, utilize apenas números, sem pontuação: \n");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontotur2);

    densidade_pop1 = (float) pop1 / area1;
    densidade_pop2 = (float) pop2 / area2;
    pib_percapita1 = (float) pib1 / pop1;
    pib_percapita2 = (float) pib2 / pop2;
    
    superpoder1 = (float) pop1 + area1 + pib1 + (float) pontotur1 + pib_percapita1 + densidade_pop1;
    superpoder2 = (float) pop2 + area2 + pib2 + (float) pontotur2 + pib_percapita2 + densidade_pop2;

    superpoder = superpoder1 > superpoder2;
    populacao = pop1 > pop2;
    area = area1 > area2;
    pib = pib1 > pib2;
    pontotur = pontotur1 > pontotur2;
    pib_percapita = pib_percapita1 > pib_percapita2;
    densidade_pop = densidade_pop1 < densidade_pop2;
 
    printf("Comparação de cartas:\n");
    printf("População: %u \n", populacao);
    printf("Área: %.0f \n", area);
    printf("PIB: %.0f \n", pib);
    printf("Pontos Turísticos: %d \n", pontotur);
    printf("Densidade Populacional: %.0f \n", densidade_pop);
    printf("PIB per Capita: %.0f \n", pib_percapita);
    printf("Super Poder: %.0f \n", superpoder);
    
    return 0; //término do programa, indica que o programa terminou com sucesso.

} 
