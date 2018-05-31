/*
4) Faça um programa que preencha um vetor com quinze elementos inteiros e verifique a existência de elementos
iguais a 30, mostrando as posições em que apareceram
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int TAM = 15;
    int v[TAM], pos[TAM];
    int i, p = 0; //p = posição dos vetor dos numeros iguais a 30

    for (i = 0; i < TAM; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &v[i]);
        if (v[i] == 30) {
            pos[p] = i;
            p++;
        }
    }

    if (p > 0) {
        printf("\nOs números iguais a 30 está nas posições: ");
        for (i = 0; i < p; i++) {
            printf("%d,", pos[i]);
        }
        printf("\n");
    } else {
        printf("Não foi digitado nenhum número igual a 30. \n");
    }

    return (EXIT_SUCCESS);
}

