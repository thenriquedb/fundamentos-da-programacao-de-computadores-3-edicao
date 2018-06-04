/*
3) Faça um programa que preencha:
    || um vetor com oito posições, contendo nomes de lojas;
    || outro vetor com quatro posições, com nomes de produtos;
    || uma matriz com os preços de todos os produtos em cada loja. 
 
O programa deverá mostrar todas as relações (nome do produto — nome da loja) em que o preço não
ultrapasse R$ 120,00. 
 */

#include <stdio.h>
#include <stdlib.h>
#define QUANT_LOJA 8 // Linha da matriz
#define QUANT_PRODUTO 4 // Colunas da matriz

int main(int argc, char** argv) {
    char nomeLoja[QUANT_LOJA][40], nomeProduto[QUANT_PRODUTO][40];
    float preco[QUANT_LOJA][QUANT_PRODUTO]; //Matriz 8 x 4
    int i, j;

    for (i = 0; i < QUANT_LOJA; i++) {
        printf("%dº Loja \n", i + 1);
        printf("\tDigite o nome da loja: ");
        //Limpar o buffer do teclado
        setbuf(stdin, NULL); 
        gets(nomeLoja[i]);
        printf("\tDigite o nome do produto: ");
        setbuf(stdin, NULL); 
        gets(nomeProduto[i]);
        
        for (j = 0; j < QUANT_PRODUTO; j++) {
            printf("\tDigite o preco do %dº produto: ", j + 1);
            scanf("%f", &preco[i][j]);
        }
        printf("\n");
    }

    printf("Lojas em que o produto não ultrapasse R$ 120.00: \n");
    for (i = 0; i < QUANT_LOJA; i++) {
        for (j = 0; j < QUANT_PRODUTO; j++) {
            //Verificar se o o preço é inferior ou igual a R$ 120.00
            if (preco[i][j] <= 120) {
                printf("\tNome da loja: %s \n", nomeLoja[i]);
                printf("\tNome do produto: %s \n", nomeProduto[i]);
                printf("\tPreço: R$ %.2f \n\n",preco[i][j]);
            }
        }
    }

    return (EXIT_SUCCESS);
}
