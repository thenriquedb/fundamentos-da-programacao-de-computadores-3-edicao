/*
24) Faça um programa contendo uma sub-rotina que receba dois valores numéricos e um símbolo. Esse
símbolo representará a operação que se deseja efetuar com os números. Se o símbolo for +, deverá ser re-
alizada uma adição, e, se for *, deverá ser efetuada uma multiplicação. O resultado deverá ser mostrado
no programa principal.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int n1, n2;
    char sinal;

    int Calculadora(int x, char operacao, int y);

    printf("Calculadora Simples \n\n");

    printf("1º valor: ");
    scanf("%d", &n1);

    printf("Sinal: ");
    scanf(" %c", &sinal);

    printf("2º valor: ");
    scanf("%d", &n2);

    printf("R = %d \n", Calculadora(n1, sinal, n2));

    return (EXIT_SUCCESS);
}

int Calculadora(int x, char operacao, int y) {
    int res;

    switch (operacao) {
        case '+':
            res = x + y;
            break;

        case '-':
            res = x - y;
            break;

        case '*':
            res = x * y;
            break;

        default:
            printf("Entrada inválida. \n");
            break;
    }

    return res;
}