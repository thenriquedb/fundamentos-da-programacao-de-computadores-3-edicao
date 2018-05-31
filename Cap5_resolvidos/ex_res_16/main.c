/*
16) Faça um programa para calcular a área de um triângulo e que não permita a entrada de dados inválidos,
ou seja, medidas menores ou iguais a 0.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float area, altura, base;

    printf("Calculo de aréa de um triângulo \n\n");

    do {
        printf("Digite a altura: ");
        scanf("%f", &altura);
        printf("Digite a base: ");
        scanf("%f", &base);

        if (base <= 0 || altura <= 0) {
            printf("ENTRADA INVALIDA \n\n");
        }
        
    //O loop irá ser executado enquanto os valores da base e altura foram negativos ou igual a 0
    } while (altura <= 0 || base <= 0);

    area = (altura * base) / 2;
    printf(" \n A area do tirangulo é de: %.2f. \n", area);

    return (EXIT_SUCCESS);
}

