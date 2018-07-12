/*
1) Faça um programa contendo uma sub-rotina que retorne 1 se o número digitado for positivo ou 0 se
for negativo.
 */

#include <stdio.h>
#include <stdlib.h>

int verificar_num(int x) {
    if (x > 0) {
        return 1;
    } else {
        return 0;
    }
}

int main(int argc, char** argv) {
    int num, res;

    printf("Digite um número: ");
    scanf("%d", &num);

    res = 
    printf("%d \n", res = verificar_num(num));

    return (EXIT_SUCCESS);
}

