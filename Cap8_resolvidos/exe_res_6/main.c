/*
6) Faça uma sub-rotina que receba como parâmetro um inteiro no intervalo de 1 a 9 e mostre a seguinte
tabela de multiplicação (no exemplo, n = 9):
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Multiplicacao(int x) {
    int i, j, mult;

    for (i = 1; i < x; i++) {
        for (j = 1; j <= x; j++) {
            if (i == j*j) {
                printf("%d \n", mult = i * j);
            }
        }
    }
}

int main(int argc, char** argv) {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    Multiplicacao(num);

    return (EXIT_SUCCESS);
}

