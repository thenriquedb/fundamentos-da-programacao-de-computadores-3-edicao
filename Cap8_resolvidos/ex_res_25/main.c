/*
25) Crie uma sub-rotina que receba como parâmetro um vetor A de 25 números inteiros e substitua todos os
valores negativos de A por zero. O vetor resultante deverá ser mostrado no programa principal.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 25

void SubstituirValores(int *vetor, int T);

int main(int argc, char** argv) {
    int i, vet[TAM];
    srand(time(NULL));

    printf("Vetor: ");
    for (i = 0; i < TAM; i++) {
        printf("%d | ", vet[i] = (rand() % 50) - 25);
    }

    SubstituirValores(&vet, TAM);

    printf("\n\nVetor alterado: ");
    for (i = 0; i < TAM; i++) {
        printf("%d |", vet[i]);
    }
    printf("\n");
    return (EXIT_SUCCESS);
}

void SubstituirValores(int *vetor, int T) {
    int i;

    for (i = 0; i < T; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }
}
