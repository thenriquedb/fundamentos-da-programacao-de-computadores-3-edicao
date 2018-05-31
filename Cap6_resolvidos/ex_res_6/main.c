/*
6) Faça um programa que preencha um vetor com dez números inteiros, calcule e mostre o vetor resultante
de uma ordenação decrescente.
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

    for (i = 0; i < t; i++) {
        /* Para ordernar os números em ordem decrescente usei o métedo bubble sort*/
        for (j = i + 1; j < t; j++) {
            if (n[j] > n[i]) {
                aux = n[i];
                n[i] = n[j];
                n[j] = aux;
            }
        }
    }

    printf("\nNúmero em ordem decressente: ");
    for (j = 0; j < t; j++) {
        printf("%d | ",n[j]);
    }
    return (EXIT_SUCCESS);
}

