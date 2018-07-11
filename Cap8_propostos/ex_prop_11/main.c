/*
11) Faça uma sub-rotina que receba como parâmetro um valor inteiro e positivo N, indicando a quantidade
de parcelas de uma soma S, calculada pela fórmula:
 * 
 S: 2/4 + 5/5 + 10/6 + 17/7 + 26/8 +...+ (n²+ 1)/(n + 3)
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int n;
    void CalculoExpressao(int n);

    printf("Digite um valor para N: ");
    scanf("%d", &n);

    CalculoExpressao(n);

    return (EXIT_SUCCESS);
}

void CalculoExpressao(int n) {
    float i, x = 1, num, den, S = 0;

    for (i = 1; i <= n; i++) {
        num = i * i + 1;
        den = i + 3;
        S += num / den;
    }
    printf("\nS = %.4f \n", S);
}
