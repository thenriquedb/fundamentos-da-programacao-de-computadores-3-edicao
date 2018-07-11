/*
3) Elabore uma sub-rotina que receba dois números como parâmetros e retorne 0, se o primeiro número for
divisível pelo segundo número. Caso contrário, deverá retornar o próximo divisor.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int n1, n2;
    void FuncaoRetorno(int N1, int N2);

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    FuncaoRetorno(n1, n2);

    return (EXIT_SUCCESS);
}

void FuncaoRetorno(int N1, int N2) {
    int i;
    i = N2;
    
    if (N1 % N2 == 0) {
        printf("0\n");
    } else {
        do {
            if (i != i) {
                i++;
                printf("IIII=%d \n", i);
            } else {
                break;
            }
        } while (N1 % i == 0);
    }

    printf("I: %d \n", i);
}
