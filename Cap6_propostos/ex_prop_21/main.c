/*
21) Faça um programa que leia um vetor com dez posições para números inteiros. Crie um segundo vetor,
substituindo os valores nulos por 1. Mostre os dois vetores.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int n[10], i;

    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);
    }

    printf("\nOs números digitados foram: ");
    for (i = 0; i < 10; i++) {
        printf("%d | ", n[i]);
    }

    printf("\nSubstituindo valores nulos por 1: ");
    for (i = 0; i < 10; i++) {
        if (n[i] == 0) { //Substituir valores nulos por 1 e imprimi-los
            n[i] = 1;
            printf("%d | ",n[i]);
        } else {
            printf("%d | ",n[i]);
        }
    }


    return (EXIT_SUCCESS);
}

