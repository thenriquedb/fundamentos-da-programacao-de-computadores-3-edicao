/*
 19) Faça um programa que preencha dois vetores, A e B, com vinte caracteres cada. A seguir, troque o 1º
elemento de A com o 20º de B, o 2º de A com o 19º de B, e assim por diante, até trocar o 20º de A com
o 1º de B. Mostre os vetores antes e depois da troca.
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int main(int argc, char** argv) {
    char a[TAM], b[TAM], aux;
    int i, p = TAM - 1;
    //Variavel p será responsavel por auxilizar a o vetor B durante a troca

    printf("Vetor A\n");
    for (i = 0; i < TAM; i++) {
        printf("\tDigite o %dº caracter: ", i + 1);
        scanf(" %c", &a[i]);
    }

    printf("\nVetor B\n");
    for (i = 0; i < TAM; i++) {
        printf("\tDigite o %dº caracter: ", i + 1);
        scanf(" %c", &b[i]);
    }

    //Troca de posições nos vetores A e B
    for (i = 0; i < TAM; i++) {
        aux = a[i];
        a[i] = b[p];
        b[p] = aux;
        p--;
    }

    printf("\nVetor A após a troca: ");
    for (i = 0; i < TAM; i++) {
        printf("%c | ", a[i]);
    }

    printf("\nVetor B após a troca: ");
    for (i = 0; i < TAM; i++) {
        printf("%c | ", b[i]);
    }
    printf("\n");
    return (EXIT_SUCCESS);
}

