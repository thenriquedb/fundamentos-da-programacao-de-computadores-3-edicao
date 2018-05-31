/*
 Calcule:
 * E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int i, j, n;
    float e=1;
    int fat = 1;

    printf("Calculo da formula: \n"
            "E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N! \n\n");

    printf("Digite um valor para N: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            fat = fat*j;
        }
        e = e + 1/fat;
    }
    
    printf("E= %.2f",e);

    return (EXIT_SUCCESS);
}

