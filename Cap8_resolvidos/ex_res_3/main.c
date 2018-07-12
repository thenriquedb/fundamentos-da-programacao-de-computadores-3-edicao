/*
3) Faça um programa contendo uma sub-rotina que receba três números inteiros a, b e c, sendo a maior
que 1. A sub-rotina deverá somar todos os inteiros entre b e c que sejam divisíveis por a (inclusive b e
c) e retornar o resultado para ser impresso
 */

#include <stdio.h>
#include <stdlib.h>

int SomaEntreAeB(int n1, int n2, int n3) {
    int i, j, soma = 0;

    for (i = n2 + 1; i < n3; i++) {
        if (i % n1 == 0) {
            soma += i;
        }
    }
    return soma;
}

int main(int argc, char** argv) {
    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);

    printf("\nSoma dos numeros entre %d e %d que são divisiveis por %d é de %d. \n", b, c, a, SomaEntreAeB(a, b, c));

    return (EXIT_SUCCESS);
}

