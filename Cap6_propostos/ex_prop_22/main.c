/*
22) Faça um programa que leia um vetor A de dez posições. Em seguida, compacte o vetor, retirando os
valores nulos e negativos. Armazene esse resultado no vetor B. Mostre o vetor B. (Lembre-se: o vetor B
pode não ser completamente preenchido.)
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int TAM = 10;
    int n[TAM], filtro[TAM];
    int i, p = 0;

    printf("Vetor A\n");
    for (i = 0; i < TAM; i++) {
        printf("\tDigite o %dº número: ", i + 1);
        scanf("%d", &n[i]);
        if (n[i] != 0 && n[i] > 0) {
            filtro[p] = n[i];
            p++;
        }
    }
    if (p > 0) {
        printf("\nVetor B: ");
        for (i = 0; i < p; i++) {
            printf("%d | ", filtro[i]);
        }
        printf("\n");
    } else {
        printf("\nTodos os números digitados foram inválidos. \n");
    }

    return (EXIT_SUCCESS);
}

