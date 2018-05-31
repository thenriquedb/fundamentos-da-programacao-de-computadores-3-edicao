/* 3) Faça um programa que receba dois números e mostre o menor. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int n1, n2;

    printf("Qual número é maior? \n\n");
    printf("Digite um numéros: ");
    scanf("%d", &n1);
    printf("Digite um numéros: ");
    scanf("%d", &n2);

    if (n1 > n2) {
        printf("\n\n");
        printf("%d é maior que %d.", n1, n2);
    }
    else if (n2 > n1) {
        printf("\n\n");
        printf("%d é maior que %d", n2, n2);
    } else {
        printf("\n\n");
        printf("Númweos são iguais.");
    }
    return (EXIT_SUCCESS);
}