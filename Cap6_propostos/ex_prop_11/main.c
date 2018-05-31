/*
11) Faça um programa que receba dez números inteiros e armazene-os em um vetor. Calcule e mostre dois
vetores resultantes: o primeiro com os números pares e o segundo, com os números ímpares. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int n[10], pares[10], impares[10];
    int i, p1 = 0, p2 = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);

        if (n[i] % 2 == 0) {
            pares[p1] = n[i];
            p1++;
        } else {
            impares[p2] = n[i];
            p2++;
        }
    }

    printf("\nNúmeros pares digitados: ");
    for (i = 0; i < p1; i++) {
        printf("%d, ", pares[i]);
    }
    printf("\nNúmeros imapres digitados: ");
    for (i = 0; i < p2; i++) {
        printf("%d, ", impares[i]);
    }
    printf("\n");
    return (EXIT_SUCCESS);
}

