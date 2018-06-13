/*
10) Elabore um programa que preencha uma matriz 10X10 com números inteiros, execute as trocas es-
pecificadas a seguir e mostre a matriz resultante:
    || a linha 2 com a linha 8;
    || a coluna 4 com a coluna 10;
    || a diagonal principal com a diagonal secundária;
    || a linha 5 com a coluna 10.
  
 IMPORTANTE! Para melhor visualização achei melhor imprimir cada troca separadamente;
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 10
#define C 10

int main(int argc, char** argv) {
    int mat[L][C], matCopia[L][C], diag1[10], diag2[10];
    int i, j, p = 0, c = 9, cont, aux;

    srand(time(NULL)); //Para gerar numeros aleatorios cada vez que o programa for executado

    //Impressão da matriz inicial
    printf("Matriz inicial: \n\n");
    for (i = 0; i < L; i++) {
        cont = 0;
        for (j = 0; j < C; j++) {
            //Indice das linhas;
            if (cont == 0) {
                printf("%4dº: ", i + 1);
            }
            printf("%4d", mat[i][j] = rand() % 100);
            matCopia[i][j] = mat[i][j];
            cont++;
            //A cada linha impressa será feita uma quebra de linha;
            if (cont == C) {
                printf("\n");
            }
        }
    }

    printf("\n--------------------------------------------------------------------------\n");

    //Trocar a linha 2 com 8
    for (i = 0; i < L; i++) {
        aux = mat[2 - 1][i];
        matCopia[2 - 1][i] = mat[8 - 1][i];
        matCopia[8 - 1][i] = aux;
    }

    printf("Troca da linha 2 com a 8 \n\n");
    for (i = 0; i < L; i++) {
        cont = 0;
        for (j = 0; j < C; j++) {
            if (cont == 0) {
                printf("%dº: \t", i + 1);
            }
            printf("%4d", matCopia[i][j]);
            cont++;
            if (cont == C) {
                printf("\n");
            }
        }
    }

    printf("\n--------------------------------------------------------------------------\n");

    //Trocar a coluna 4 com 10
    for (i = 0; i < L; i++) {
        aux = mat[i][4 - 1];
        matCopia[i][4 - 1] = mat[i][10 - 1];
        matCopia[i][10 - 1] = aux;
    }

    printf("Troca da coluna 4 com a 10 \n\n");
    for (i = 0; i < L; i++) {
        cont = 0;
        for (j = 0; j < C; j++) {
            if (cont == 0) {
                printf("%dº: \t", i + 1);
            }
            printf("%4d", matCopia[i][j]);
            cont++;
            if (cont == C) {
                printf("\n");
            }
        }
    }

    printf("\n--------------------------------------------------------------------------\n");

    //Pegar os valores das diagonais e armazena-los em 2 vetores
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            if (i == j) {
                diag1[p] = mat[i][j];
                diag2[p] = mat[i][c--];
                p++;
            }
        }

    }
    p = 0;
    c = 9;

    //Substituir os valores de cada diagonal em sua posição oposta
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {

            if (i == j) {
                matCopia[i][j] = diag2[p];
                matCopia[i][c] = diag1[p];
                c--;
                p++;
            }
        }
    }

    printf("Troca da diagonal principal com a secundária: \n\n");
    for (i = 0; i < L; i++) {
        cont = 0;
        for (j = 0; j < C; j++) {
            if (cont == 0) {
                printf("%4dº: ", i + 1);
            }
            printf("%4d", matCopia[i][j]);
            cont++;
            if (cont == C) {
                printf("\n");
            }
        }
    }

    printf("\n--------------------------------------------------------------------------\n");
    
    //Trocar linha 5 pela coluna 10
    int linha5[10], coluna10[10]; //Variaveis para armazenar os valores de cada posição da linha 5 e coluna 10
    int p1 = 0, p2 = 0; //Responsavel por controlar as posiçoes dos vetores linha5 e coluna 10 respectivamente

    //Laço para pegar os das posições desejadas
    printf("Troca da linha 5 com a coluna 10: \n\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            
            //Pegar os valores da linha 4
            if (i == 4) {
                linha5[p1] = mat[4][j];
                p1++;
            }
            
            //Pegar os valores da coluna 10
            if (j == 9) {
                coluna10[p2] = mat[i][j];
                p2++;
            }
        }
    }

    p1 = 0;
    p2 = 0;

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            if (i == 4) {
                matCopia[4][j] = coluna10[p1];
                p1++;
            }

            if (j == 9) {
                matCopia[i][9] = linha5[p2];
                p2++;
            }
        }
    }

    for (i = 0; i < L; i++) {
        cont = 0;
        for (j = 0; j < C; j++) {
            if (cont == 0) {
                printf("%dº: \t", i + 1);
            }
            printf("%4d", matCopia[i][j]);
            cont++;
            if (cont == C) {
                printf("\n");
            }
        }
    }
    printf("\n--------------------------------------------------------------------------\n");

    return (EXIT_SUCCESS);
}
