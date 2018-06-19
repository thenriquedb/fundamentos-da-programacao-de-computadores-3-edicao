/*
16) Faça um programa que preencha uma matriz 7x7 de números inteiros e crie dois vetores com sete po-
sições cada um que contenham, respectivamente, o maior elemento de cada uma das linhas e o menor
elemento de cada uma das colunas. Escreva a matriz e os dois vetores gerados.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define T 7 //Varivel para definir o tamanho da matriz

int main(int argc, char** argv) {
    int mat[T][T], maior, menor, linha[T * 2], coluna[T * 2];
    int i, j, p = 0, cont = 0;

    srand(time(NULL));

    //Irá prencher a matriz com valores aleatorios entre 1 e 10
    for (i = 0; i < T; i++) {
        cont = 0;
        for (j = 0; j < T; j++) {
            if (cont == 0) {
                printf("%dº ", i + 1);
            }
            mat[i][j] = (rand() % 10) + 1; //Como não quero que não gere 0, basta somar 1
            printf("%4d", mat[i][j]);

            if (cont == T - 1) {
                printf("\n");
                cont = 0;
            }
            cont++;
        }
    }


    //Laço para descobrir o maior e menor valor de cada linha,respectivamente
    p = 0;
    for (i = 0; i < T; i++) {
        maior = mat[i][0];
        menor = mat[i][0];

        for (j = 0; j < T; j++) {
            if (mat[i][j] > maior) {
                maior = mat[i][j];
            }
            if (mat[i][j] < menor) {
                menor = mat[i][j];
            }
        }

        linha[p] = maior;
        p++;
        linha[p] = menor;
        p++;
    }

    cont = 0;//Responsavel por controlar a impressão dos pares
    printf("\nMaior e menor elmento de cada linha respectivamente: \n");
    for (i = 0; i < T * 2; i++) {
        if (cont == 0) {
            printf("(");
        }
        printf("%d", linha[i]);
        cont++;
        
                if(cont == 1) {
            printf(",");
        }
        
        if (cont == 2) {
            printf(") ");
            cont = 0;
        }
    }

    //Laço para descobrir o maior e menor valor de cada coluna,respectivamente
    p = 0;
    for (i = 0; i < T; i++) {
        maior = mat[0][i];
        menor = mat[0][i];

        for (j = 0; j < T; j++) {
            if (mat[j][i] > maior) {
                maior = mat[j][i];
            }
            if (mat[j][i] < menor) {
                menor = mat[j][i];
            }
        }
        coluna[p] = maior;
        p++;
        coluna[p] = menor;
        p++;
    }

    cont = 0;
    printf("\n\nMaior e menor elmento de cada coluna respectivamente: \n");
    for (i = 0; i < T * 2; i++) {
        if (cont == 0) {
            printf("(");
        }
        printf("%d", coluna[i]);
        cont++;
        
        if(cont == 1) {
            printf(",");
        }
        
        if (cont == 2) {
            printf(") ");
            cont = 0;
        }
    }

    return (EXIT_SUCCESS);
}