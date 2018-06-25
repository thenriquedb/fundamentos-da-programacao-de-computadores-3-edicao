/*
14) Crie uma sub-rotina que receba como parâmetro dois vetores de dez elementos inteiros positivos e
mostre o vetor união dos dois primeiros.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 10  

int main(int argc, char** argv) {
    int i, vet1[DIM], vet2[DIM];
    srand(time(NULL));

    void UniaoVetores(int V1[], int V2[], int TAM);

    printf("Vetor 1: \n");
    for (i = 0; i < DIM; i++) {
        printf("%d | ", vet1[i] = rand() % 10);
    }

    printf("\n\nVetor 2: \n");
    for (i = 0; i < DIM; i++) {
        printf("%d | ", vet2[i] = rand() % 10);
    }

    UniaoVetores(vet1, vet2, DIM);

    return (EXIT_SUCCESS);
}

void UniaoVetores(int V1[], int V2[], int TAM) {
    int VetorUniao[TAM * 2], i, p = 0;

    printf("\n\nVetor união: \n");
    for (i = 0; i < TAM * 2; i++) {
        if (i < TAM) {
            VetorUniao[i] = V1[i];
            printf("%d | ", VetorUniao[i]);
        } else {
            VetorUniao[i] = V2[p];
            printf("%d | ", VetorUniao[i]);
            p++;
        }
    }
}