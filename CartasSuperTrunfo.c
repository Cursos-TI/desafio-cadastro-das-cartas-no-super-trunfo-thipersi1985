#include <stdio.h> //inclusão de biblioteca

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste THIAGO


int main() { //função principal
    char est1[10], est2[10], cod1[10], cod2[10], cid1[50], cid2[50]; //declaração de variáveis do tipo char (variáveis que armazenam um ou mais caracteres)
    int pop1, pop2, pontotur1, pontotur2;                           //declaração de variáveis do tipo integer (variáveis que armazenam números inteiros)
    float area1, area2, pib1, pib2;                                 //declaração de variáveis do tipo float (variáveis que armazenam números decimais)

    printf("Preencha abaixo os dados da Carta 1: \n"); //o comando "printf" serve para saída de dados, ou seja, imprime os dados na tela. 
    printf("Por favor, escolha um estado dentre os 8 listados a seguir: 'A, B, C, D, E, F, G ou H' e escreva sua escolha abaixo: \n"); //o comando \n serve para 'quebrar' linha
    scanf("%s", &est1); //o comando scanf serve para entrada de dados, o % é o especificador de formato, no caso, o %s está especificando que o formato a ser lido é uma string. 
    printf("Digite o código da carta, que deverá ser composto pela letra do estado seguida de um número de 01 a 04, por exemplo: A01 ou C04. \n");
    scanf("%s", &cod1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cid1);
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &pop1); //%d está especificando que o formato a ser lido é um número inteiro
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
    scanf("%d", &pop2);
    printf("Digite a área da cidade em quilômetros quadrados, por favor, utilize apenas números, sem pontuação: \n");
    scanf("%f", &area2);
    printf("Digite o Produto Interno Bruto da cidade, por favor, utilize apenas números, sem pontuação: \n");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontotur2);

    printf("Os dados da Carta 1 foram: \n"); //os comandos abaixo estão imprimindo na tela o resultado das variáveis armazenadas. 
    printf("Estado: %s \n", est1);
    printf("Código: %s \n", cod1);
    printf("Nome da Cidade: %s \n", cid1);
    printf("População: %d \n", pop1);
    printf("Área: %.2f Km² \n", area1); //o ".2" indica a quantidade de casas decimais
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Pontos turísticos: %d \n", pontotur1);

    printf("Os dados da Carta 2 foram: \n");
    printf("Estado: %s \n", est2);
    printf("Código: %s \n", cod2);
    printf("Nome da Cidade: %s \n", cid2);
    printf("População: %d \n", pop2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Pontos turísticos: %d \n", pontotur2);
    
    return 0; //término do programa, indica que o programa terminou com sucesso
}
