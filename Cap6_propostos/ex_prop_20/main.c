/*
20) Faça um programa que leia um vetor com dez posições para números inteiros e mostre somente os nú-
meros positivos.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int n[10], i, cont = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);
        if (n[i] > 0) {
            cont++; //Conntador usado para verificar se foi digitadoo algum número positivo
        }
    }
    
    if (cont > 0) {
        printf("\nNúmeros positivos digitados: ");
        for (i = 0; i < 10; i++) {
            if (n[i] > 0) {
                printf("%d | ", n[i]);
            }
        }
    } else {
        printf("\nNenhum número positivo digitado. \n");
    }
    return (EXIT_SUCCESS);
}

