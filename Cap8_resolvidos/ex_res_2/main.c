/*
2) Faça um programa contendo uma sub-rotina que receba dois números positivos por parâmetro e re-
torne a soma dos N números inteiros existentes entre eles.
 */

#include <stdio.h>
#include <stdlib.h>

int Soma(int a, int b) {
    int i, soma = 0;

    for (i = a + 1; i < b; i++) {
        soma += i;
    }
    return soma;
}

int main(int argc, char** argv) {
    int x, y, s;

    printf("Número 1: ");
    scanf("%d", &x);
    
    printf("Número 2: ");
    scanf("%d", &y);

    printf("A soma dos números entre %d e %d é %d. \n", x, y, Soma(x, y));

    return (EXIT_SUCCESS);
}

