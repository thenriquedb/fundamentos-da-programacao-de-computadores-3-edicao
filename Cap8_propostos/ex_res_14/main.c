/*
14) Faça uma sub-rotina que receba um vetor X de 30 elementos inteiros como parâmetro e retorne dois
vetores A e B. O vetor A deve conter os elementos de X que sejam maiores que zero e o vetor B, os ele-
mentos menores ou iguais a zero.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 30

int main(int argc, char** argv) {
    int i, vet[TAM];
    srand(time(NULL));
    void Separar_Valores_Positivos_e_Negativos(int vetor[], int T);

    printf("Vetor: ");
    for (i = 0; i < TAM; i++) {
        printf("%d | ", vet[i] = (rand() % 60) - 30);
    }
    Separar_Valores_Positivos_e_Negativos(vet, TAM);

    return (EXIT_SUCCESS);
}

void Separar_Valores_Positivos_e_Negativos(int vetor[], int T) {
    int positivos[T], negativos[T], P = 0, P1 = 0;
    int i;

    for (i = 0; i < T; i++) {
        if (vetor[i] <= 0) {
            negativos[P] = vetor[i];
            P++;
        } else {
            positivos[P1] = vetor[i];
            P1++;
        }
    }
    
    printf("\n\nValores positivos: ");
    for (i = 0; i < P1; i++) {
        printf("%d | ", positivos[i]);
    }
    printf("\nValores negativos: ");
    for (i = 0; i < P; i++) {
        printf("%d | ", negativos[i]);
    }
    printf("\n");
}