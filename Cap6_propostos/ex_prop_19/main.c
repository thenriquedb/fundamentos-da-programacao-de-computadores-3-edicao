/*
19) Faça um programa que leia dois vetores de dez posições e faça a multiplicação dos elementos de mesmo
índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int TAM = 10;
    int x[TAM], y[TAM], mult[TAM];
    int i;

    printf("1º Vetor \n");
    for (i = 0; i < TAM; i++) {
        printf("\tDigite o %dº valor: ", i + 1);
        scanf("%d", &x[i]);
    }

    printf("\n2º Vetor \n");
    for (i = 0; i < TAM; i++) {
        printf("\tDigite o %dº valor: ", i + 1);
        scanf("%d", &y[i]);
    }

    printf("\n3º Vetor: ");
    for (i = 0; i < TAM; i++) {
        mult[i] = x[i] * y[i]; //Multiplicação dos vetores X e Y
        printf("%d | ", mult[i]);
    }
    printf("\n");
    return (EXIT_SUCCESS);
}

