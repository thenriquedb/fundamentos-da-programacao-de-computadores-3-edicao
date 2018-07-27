/*
10) Elabore uma sub-rotina que receba como parâmetro um valor N (inteiro e maior ou igual a 1) e determi-
ne o valor da sequência S, descrita a seguir:
 
S = 1 + 1/2 + 1/3...

 OBS: A quantidade de parcelas que compõe S é igual a N.
 */

#include <stdio.h>
#include <stdlib.h>

float CalculoExpressao(int n);

int main(int argc, char** argv) {
    int N;

    printf("Digite um valor para N: ");
    scanf("%d", &N);

    printf("S = %f \n", CalculoExpressao(N));


    return (EXIT_SUCCESS);
}

float CalculoExpressao(int n) {
    float i;
    float s = 0;

    for (i = 1; i <= n; i++) {
        s += 1 / i;
    }
    return s;
}