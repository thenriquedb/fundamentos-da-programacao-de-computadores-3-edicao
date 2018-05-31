/*
25) Faça um programa que leia um vetor com quinze posições para números inteiros. Depois da leitura, divida
todos os seus elementos pelo maior valor do vetor. Mostre o vetor após os cálculos. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int TAM = 15;
    int i;
    float div[TAM], n[TAM], maior;

    for (i = 0; i < TAM; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &n[i]);
    }

    maior = n[0];
    for (i = 0; i < TAM; i++) { //Laço para pegar o maior valor do vetor N
        if (n[i] > maior) {
            maior = n[i];
        }
    }
    printf("\nDIVISÕES \n");
    for (i = 0; i < TAM; i++) {
        div[i] = n[i] / maior;
        printf("\t%.0f / %.0f = %.2f \n", n[i], maior, div[i]);
    }

    return (EXIT_SUCCESS);
}

