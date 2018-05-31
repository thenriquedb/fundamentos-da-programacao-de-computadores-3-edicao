/*
4) Faça um programa que preencha um vetor com oito números inteiros, calcule e mostre dois vetores
resultantes. O primeiro vetor resultante deve conter os números positivos e o segundo, os números negativos.
Cada vetor resultante vai ter, no máximo, oito posições, que não poderão ser completamente
utilizadas.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int n[8], pos[8], neg[8];
    int k, j, i, contP = 0, contN = 0;
    j = 0;
    k = 0;

    for (i = 0; i < 8; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);
        //Verificar se o valor digitado é positivo ou negativo
        if (n[i] > 0) {
            pos[k] = n[i];
            contP++;
            k++;
        } else if (n[i] < 0) {
            neg[j] = n[i];
            contN++;
            j++;
        }
    }

    //Imprimir números positivos
    if (contP > 0) {
        printf("\n\tTodos os números positivos digitados: ");
        for (i = 0; i < contP; i++) {
            printf("%d ", pos[i]);
        }
    } else {
        printf("\n\tNenhum número positivo digitado.");
    }

    //Imprimir números negativos
    if (contN > 0) {
        printf("\n\tTodos os números negativos digitados: ");
        for (i = 0; i < contN; i++) {
            printf("%d ", neg[i]);
        }
    } else {
        printf("\n\tNenhum número positivo digitado.");
    }
    return (EXIT_SUCCESS);
}

