/*
 24) Faça um programa que leia um vetor A de dez posições contendo números inteiros. Determine e mostre,
a seguir, quais elementos de A estão repetidos e quantas vezes cada um se repete.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a[10], aux;
    int i, j, cont = 1, ver = 0;
 

    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nVerificação \n");
    //verificar se repete
    for (i = 0; i < 10; i++) {
        cont = 0;
        for (j = 0; j < 10; j++) {
            if (a[i] == a[j]) {
                cont++;
            }
        }
        if (cont > 1) {
            printf("\tNúmero %d se repte %d vezes. \n", a[i], cont);
        }
    }
    return (EXIT_SUCCESS);
}

