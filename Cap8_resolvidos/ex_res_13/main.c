/*
13) Faça uma sub-rotina que receba um vetor A de dez elementos inteiros como parâmetro. Ao final dessa
função, deverá ter sido gerado um vetor B contendo o fatorial de cada elemento de A. O vetor B deverá
ser mostrado no programa principal.
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

//Os valores são passados por parametro
void Calcular_Fatorial(int *vetA, int *vetB);

int main(int argc, char** argv) {
    int i, vetorA[TAM], vetorB[TAM];

    for (i = 0; i < TAM; i++) {
        printf("Digite um valor para V[%d]: ", i);
        scanf("%d", &vetorA[i]);
    }

    Calcular_Fatorial(&vetorA, &vetorB);

    printf("\nCalculo do fatorial dos números digitados: \n");
    for (i = 0; i < TAM; i++) {
        printf("\tO fatorial de %d é %d. \n", vetorA[i], vetorB[i]);
    }

    return (EXIT_SUCCESS);
}

void Calcular_Fatorial (int *vetA, int *vetB) {
    int j, k, fat = 1;

    for (j = 0; j < TAM; j++) {
        for (k = 1; k <= vetA[j]; k++) {
            fat *= k;
        }
        vetB[j] = fat;
        fat = 1;
    }
}