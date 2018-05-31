/*
4) Faça um programa que receba um número, calcule e mostre a tabuada desse número. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int i, j;
    int num, mult, soma, sub;
    float div;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Tabuada do Nº %d. \n\n", num);

    printf("MULTIPLICAÇÃO \n");
    for (i = 0; i <= 10; i++) {
        mult = num * i;
        printf("    %d x %d = %d \n", num, i, mult);
    }

    printf("DIVISÃO \n");
    for (i = 1; i <= 10; i++) {
        div = num / i;
        printf("    %d / %d = %.2f \n", num, i, div);
    }

    printf("SOMA \n");
    for (i = 0; i <= 10; i++) {
        soma = num + i;
        printf("    %d + %d = %d \n", num, i, soma);
    }

    printf("SUBTRAÇÃO \n");
    for (i = 0; i <= 10; i++) {
        sub = num - i;
        printf("    %d - %d = %d \n", num, i, sub);
    }



    return (EXIT_SUCCESS);
}

