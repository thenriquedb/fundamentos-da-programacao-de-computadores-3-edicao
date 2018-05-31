/*
21) Faça um programa que leia um conjunto de quinze valores e armazene-os em um vetor. A seguir, separe-os
em dois outros vetores (P e I) com cinco posições cada. O vetor P armazena números pares e o
vetor I, números ímpares. Como o tamanho dos vetores pode não ser suficiente para armazenar todos
os números, deve-se sempre verificar se já estão cheios. Caso P ou I estejam cheios, deve-se mostrá-los
e recomeçar o preenchimento da primeira posição. Terminado o processamento, mostre o conteúdo
restante dentro dos vetores P e I.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int n[15], p[5], imp[5];
    int i, j, k;
    int p1 = 0;
    int p2 = 0;

    for (i = 0; i < 15; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);

        //Verificar se é par ou impar
        if (n[i] % 2 == 0) {
            p[p1] = n[i];
            p1++;
        } else {
            imp[p2] = n[i];
            p2++;
        }

        if (p1 == 5) { //Verificar se o vetor do núemeros pares está cheio
            printf("\nVetor dos números pares cheio! Esvaziar: ");
            for (j = 0; j < 5; j++) {
                printf("%d | ", p[j]);
                p1 = 0;
            }
            printf("\n\n");
        }
        if (p2 == 5) { //Verificar se o vetor do núemeros impares está cheio
            printf("\nVetor dos números impares cheio! Esvaziar: ");
            for (k = 0; k < 5; k++) {
                printf("%d | ", imp[k]);
                p2 = 0;
            }
            printf("\n\n");
        }
    }
    return (EXIT_SUCCESS);
}

