/*
12) Faça um programa que receba cinco números e mostre a saída a seguir:
Digite o 1º número 5
Digite o 2º número 3
Digite o 3º número 2
Digite o 4º número 0
Digite o 5º número 2
Os números digitados foram: 5 + 3 + 2 + 0 + 2 = 12
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int n[5], soma = 0, i;

    for (i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);
        soma += n[i];
    }

    printf("\nOs números digitados foram: ");
    for (i = 0; i < 5; i++) {
        printf("%d", n[i]);
        //Os sinais de soma será impresso 4 vezes
        if (i < 4) {
            printf(" + ");
        }
        if (i == 4) {
            printf(" = %d \n", soma);
        }
    }
    return (EXIT_SUCCESS);
}