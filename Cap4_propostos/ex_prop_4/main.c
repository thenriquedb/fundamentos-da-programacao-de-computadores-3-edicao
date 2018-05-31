/* 4) Faça um programa que receba três números e mostre o maior. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int n1, n2, n3;

    printf("Qual número é maior? \n\n");
    printf("Digite um numéros: ");
    scanf("%d", &n1);
    printf("Digite um numéros: ");
    scanf("%d", &n2);
    printf("Digite um numéros: ");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3) {
        printf("\n\n");
        printf("%d é maior que %d e %d.", n1, n2, n3);

    } else if (n2 > n1 && n1 > n3) {
        printf("\n\n");
        printf("%d é maior que %d e %d.", n2, n1, n2);
        
    } else if (n3 > n1 && n3 > n2) {
        printf("\n\n");
        printf("%d é maior que %d e %d.", n3, n2, n3);

    } else {
        printf("\n\n");
        printf("Númweos são iguais.");
    }
    return (EXIT_SUCCESS);
}