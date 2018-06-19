/*
22) Faça um programa que receba o estoque atual de três produtos, armazenados em quatro armazéns, e
coloque esses dados em uma matriz 5X3. Considerando que a última linha dessa matriz contenha o
custo de cada produto, o programa deverá calcular e mostrar:
    ||a quantidade de itens quadrados em cada armazém;
    || qual armazém possui maior estoque do produto 2;
    || qual armazém possui menor estoque;
    || qual o custo total de cada produto;
    || qual o custo total de cada armazém.
Devem ser desconsiderados empates.
 */

#include <stdio.h>
#include <stdlib.h>
#define L 5
#define C 33

int main(int argc, char** argv) {
    int armazem[L][C], quant_prod2[C], ult_linha = L - 1;
    int i, j;

    //Como não é para prencher a ultima linha basta subtrair 1 do indice
    for (i = 0; i < L - 1; i++) {
        printf("%dº Armazem \n\n", i + 1);
        for (j = 0; j < C; j++) {
            printf("Produto %d \n", j + 1);
            printf("Itens armazenados: ");
            scanf("%d", &armazem[i][j]);
            printf("\n");
        }
    }

    //Laço para armazenar os valores na ultima linha da matriz
    printf("Preços \n");
    for (i = 0; i < C; i++) {
        printf("Preço produto %d: ", i + 1);
        scanf("%d", &armazem[L - 1][i]);
    }

    //Somar estoque de cada armazem
    int somaEstoque[C], p = 0;
    for (i = 0; i < L - 1; i++) {
        somaEstoque[p] = 0;
        for (j = 0; j < C; j++) {
            somaEstoque[p] += armazem[i][j];
        }
        p++;
    }

    //Menor estoque
    int menorEstoque = somaEstoque[0];
    for (i = 0; i < L - 1; i++) {
        if (somaEstoque[i] < menorEstoque) {
            menorEstoque = i;
        }
    }

    //Maior estoque do produto 2
    int maior_estoqueP2 = armazem[0][1];
    for (i = 0; i < L - 1; i++) {
        if (armazem[i][1] > maior_estoqueP2) {
            maior_estoqueP2 = i;
        }
    }

    //Custo de cada armazem;
    int custo[L - 1];
    p = 0;
    for (i = 0; i < L - 1; i++) {
        for (j = 0; j < L - 1; j++) {
            custo[p] += armazem[i][j] * armazem[L - 1][j];
        }
        p++;
    }


    printf("-------------------------RELATÓRIO-------------------------\n\n");
    for (i = 0; i < L - 1; i++) {
        printf("%dº Armazem \n", i + 1);
        for (j = 0; j < C; j++) {
            printf("\tProduto %d \n", j + 1);
            printf("\tEstoque: %d \n", armazem[i][j]);
            printf("\n");
        }
        printf("\tTotal de itens armazenados: %d", somaEstoque[i]);
        printf("\n");
    }

    printf("Preços \n");
    for (i = 0; i < C; i++) {
        printf("\tValor produto %d: R$ %d. \n", i + 1, armazem[L - 1][i]);
    }

    printf("Custos \n");
    for (i = 0; i < L - 1; i++) {
        printf("\tCusto %dº Armazem: R$ %d \n", i + 1, custo[i]);
    }
    
    printf("\nO armazem %d possui o menor estoque. \n", i + 1);
    printf("O armaazem %d possui maior estoque produto 2. \n", maior_estoqueP2 + 1);

    return (EXIT_SUCCESS);
}