/*
7) Faça um programa que, no momento de preencher um vetor com oito números inteiros, já os armazene
de forma crescente.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int t = 10;
    int n[t];
    int i, j, aux;

    for (i = 0; i < t; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);
    }

    printf("\nOrdem atual dos números: ");
    for (i = 0; i < t; i++) {
        printf("%d | ", n[i]);
    }

    //Buble sort
    for (i = 0; i < t; i++) {
        for (j = i + 1; j < t; j++) {
            if (n[i] > n[j]) {
                aux = n[i];
                n[i] = n[j];
                n[j] = aux;
            }
        }
    }

    printf("\nNúmeros em ordem crescente: ");
    for (j = 0; j < t; j++) {
        printf("%d | ", n[j]);
    }
    return (EXIT_SUCCESS);
}

