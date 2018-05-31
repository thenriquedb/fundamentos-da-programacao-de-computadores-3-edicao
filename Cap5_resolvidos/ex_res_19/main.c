/*
19) Faça um programa que leia um número não determinado de pares de valores [m,n],
todos inteiros epositivos, um par de cada vez, e que calcule e mostre a soma de 
todos os números inteiros entre m e n (inclusive). A digitação de pares terminará 
quando m for maior ou igual a n. d*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int M, N, i;
    int soma;

    do {
        printf("Digite M: ");
        scanf("%d", &M);
        printf("Digite N: ");
        scanf("%d", &N);

        for (i = M; i <= N; i++) {
            soma = soma + i;
        }

        printf("A soma dos números entre %d e %d é: %d. \n\n", M, N, soma);
        soma = 0;
        /*A varivel soma deve ser zerada a cada final de loop pois se isso não 
        acontecer, nas proximas execuções a nova soma será feita em cima da antiga. */
        
    } while (M < N);

    return (EXIT_SUCCESS);
}

