/*
8) Faça uma sub-rotina que receba um valor inteiro e positivo, calcule e mostre seu fatorial.
 */

#include <stdio.h>
#include <stdlib.h>

int CalculoFatorial(int n);

int main(int argc, char** argv) {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Fatorial de %d = %d \n", num, CalculoFatorial(num));

    return (EXIT_SUCCESS);
}

int CalculoFatorial(int n) {
    int i, fat = 1;

    for (i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}