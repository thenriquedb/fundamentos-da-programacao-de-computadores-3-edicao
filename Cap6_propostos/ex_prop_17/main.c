/*
17) Faça um programa que preencha dois vetores de dez posições cada, determine e mostre um terceiro contendo
os elementos dos dois vetores anteriores ordenados de maneira decrescente.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int TAM = 10; //Constante do tamanho do vetor
    int x[TAM], y[TAM], z[TAM * 2];
    int i, j, aux;

    printf("1º Vetor \n");
    for (i = 0; i < TAM; i++) {
        printf("\tDigite o %dº número: ", i + 1);
        scanf("%d", &x[i]);
        z[i] = x[i];
    }

    printf("\n2º Valor \n");
    for (i = 0; i < TAM; i++) {
        printf("\tDigite o %dº número: ", i + 1);
        scanf("%d", &y[i]);
        z[i + TAM] = y[i];
    }

    printf("\nUnião dos dois vetores : ");
    for (i = 0; i < TAM * 2; i++) {
        printf("%d | ", z[i]);
    }

    //Bubble sort
    for (i = 0; i < TAM * 2; i++) {
        for (j = i + 1; j < TAM * 2; j++) {
            if (z[i] < z[j]) {
                aux = z[i];
                z[i] = z[j];
                z[j] = aux;
            }
        }
    }

    printf("\nUnião dos vetores em ordem decresente: ");
    for (i = 0; i < TAM * 2; i++) {
        printf("%d | ", z[i]);
    }

    printf("\n");
    return (EXIT_SUCCESS);
}

