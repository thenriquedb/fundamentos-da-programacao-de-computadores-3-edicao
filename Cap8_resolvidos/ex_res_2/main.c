/*
2) Faça um programa contendo uma sub-rotina que receba dois números positivos por parâmetro e re-
torne a soma dos N números inteiros existentes entre eles.
 */

#include <stdio.h>
#include <stdlib.h>

int Soma(int a, int b) {
    int soma = a+b;
    printf("Soma: %d \n",soma);
}

int main(int argc, char** argv) {
    int x,y;
    
    printf("Número 1: ");
    scanf("%d",&x);
    printf("Número 2: ");
    scanf("%d",&y);
    
    Soma(x,y);
    
    return (EXIT_SUCCESS);
}

