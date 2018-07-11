/*
15) Elabore uma sub-rotina que receba um vetor X de 15 números inteiros como parâmetro e retorne a
quantidade de valores pares em X
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15

int main(int argc, char** argv) {
    int i, vet[TAM];
    srand(time(NULL));
    void ValoresPares(int vetor[], int T);

    printf("Vetor: ");
    for (i = 0; i < TAM; i++) {
        printf("%d | ", vet[i] = rand() % 15);
    }
    ValoresPares(vet, TAM);

    return (EXIT_SUCCESS);
}

void ValoresPares(int vetor[], int T) {
    int pares[T], i, P = 0;

    printf("\n\nValores pares: ");
    for (i = 0; i < T; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d | ", vetor[i]);
        }
    }
}