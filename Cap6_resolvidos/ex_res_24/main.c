/*
 24) Faça um programa que leia um vetor A de dez posições contendo números inteiros. Determine e mostre,
a seguir, quais elementos de A estão repetidos e quantas vezes cada um se repete.
 */

#include <stdio.h>
#include <stdlib.h>
#define T 5

int main(int argc, char** argv) {
    int vet[T], vet_repetido[T], quant_repetidos[T];
    int i, j = 0, k, p = 0, cont = 0;

    for (i = 0; i < T; i++) {
        printf("V[%d] = ", i);
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < T; i++) {
        cont = 0;


        for (j = 0; j < T; j++) {
            if (vet[i] == vet[j]) {
                cont++;
            }
        }

        for (k = 0; p < T; k++) {
            if (vet[i] != vet_repetido[k]) {
                if (cont > 1) {
                    vet_repetido[p] = vet[i];
                    quant_repetidos[p] = cont;
                    p++;
                }
            }
        }
    }

    printf("\nNúmeros repetidos: ");
    for (i = 0; i < p; i++) {
        printf("%d ", vet_repetido[i]);
    }

    printf("\nQuantidade de vezes que se repetem: ");
    for (i = 0; i < p; i++) {
        printf("%d ", quant_repetidos[i]);
    }

    return (EXIT_SUCCESS);
}

