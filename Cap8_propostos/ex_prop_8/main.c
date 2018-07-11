/*
8) Faça uma sub-rotina que receba um valor inteiro e positivo, calcule e mostre seu fatorial.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num;

    void CalculoFatorial(int n);

    printf("Digite um número: ");
    scanf("%d", &num);
    CalculoFatorial(num);

    return (EXIT_SUCCESS);
}

void CalculoFatorial(int n) {
    int i, fat = 1;

    for (i = 1; i <= n; i++) {
        fat *= i;
    }
    printf("Fatorial de %d: %d \n", n, fat);
}