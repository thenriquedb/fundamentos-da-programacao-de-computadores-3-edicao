/*
22) Criar um programa que:
    || utilize uma sub-rotina para receber os elementos de uma matriz 10X5 de números reais;
    || utilize uma sub-rotina para calcular a soma de todos os elementos localizados abaixo da sexta linha
dessa matriz;
Os resultados deverão ser mostrados no programa principal.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 10
#define COL 5

//Função responsavel por prencher a matriz com numeros reais
void Prencher_Matriz(float mat[][COL]);

//Função responsavel para imprimir a matriz
void Imprimir_Matriz(float mat[][COL]);

//Função responsavel por retornar a soma dos elementos abaixo da 6ª linha
float Somar(float mat[][COL]);



int main(int argc, char** argv) {
    float matriz[LIN][COL];
    int i, j, div;

    Prencher_Matriz(matriz);
    Imprimir_Matriz(matriz);
 
    printf("\nA soma dos elementos abaixo da 6ª linha é %.1f. \n",Somar(matriz));

    return (EXIT_SUCCESS);
}

void Prencher_Matriz(float mat[][COL]) {
    int i, j;

    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            mat[i][j] = ((float) rand() / RAND_MAX)*100; //Gerar numeros decimais aleatorios
        }
    }
}

void Imprimir_Matriz(float mat[][COL]) {
    int i, j;

    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            printf("%.1f \t", mat[i][j]);
        }
        printf("\n");
    }
}

float Somar(float mat[][COL]) {
    int i, j;
    float soma = 0;

    for (i = 6; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            soma += mat[i][j];
        }
    }
    
    return soma;
}