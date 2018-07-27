/*
17) Elabore uma sub-rotina que calcule o máximo divisor comum (MDC) de dois números recebidos como
parâmetros.
 */

#include <stdio.h>
#include <stdlib.h>

int CalcularMDC(int n1, int n2);

int main(int argc, char** argv) {
    int n1, n2;

    printf("Digite o 1º número: ");
    scanf("%d", &n1);

    printf("Digite o 1º número: ");
    scanf("%d", &n2);

    printf("\nMDC entre %d e %d = %d \n", n1, n2, CalcularMDC(n1, n2));

    return (EXIT_SUCCESS);
}

int CalcularMDC(int n1, int n2) {
    int i, d = 2;
    int MaiorValor, MDC = 1;

    //bloco para decidir o maior números digitados para configurar o laço
    if (n1 > n2) {
        MaiorValor = n1;
    } else {
        MaiorValor = n2;
    }

    for (i = 2; i < MaiorValor; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            MDC = i;
        }
    }

    return MDC;
}