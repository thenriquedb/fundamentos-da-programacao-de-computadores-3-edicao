/*
14) Faça uma sub-rotina que receba um vetor X de 30 elementos inteiros como parâmetro e retorne dois
vetores A e B. O vetor A deve conter os elementos de X que sejam maiores que zero e o vetor B, os ele-
mentos menores ou iguais a zero.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 30

void Separar_Valores_Positivos_e_Negativos(int *vetor, int *positivos, int *negativos, int *Tamanho);

int main(int argc, char** argv) {
    int i, vet[TAM];
    int Positivos[TAM], Negativos[TAM], Tamanho[2];

    srand(time(NULL));

    printf("Vetor: ");
    for (i = 0; i < TAM; i++) {+
        printf("%d | ", vet[i] = (rand() % 60) - 30);
    }

    Separar_Valores_Positivos_e_Negativos(&vet, &Positivos, &Negativos, &Tamanho);

    printf("\n\nNuméros positivos: ");
    for (i = 0; i < Tamanho[0]; i++) {
        printf("%d | ",Positivos[i]);
    }
    
    printf("\n\nNuméros negativos: ");
    for (i = 0; i < Tamanho[1]; i++) {
        printf("%d | ",Negativos[i]);
    }
    
    printf("\n");

    return (EXIT_SUCCESS);
}

void Separar_Valores_Positivos_e_Negativos(int *vetor, int *positivos, int *negativos, int *Tamanho) {
    int i, PP = 0, PN = 0;

    for (i = 0; i < TAM; i++) {
        if (vetor[i] > 0) {
            positivos[PP] = vetor[i];
            PP++;
        } else {
            negativos[PN] = vetor[i];
            PN++;
        }
    }

    /* Como não é possivel retornar mais de um valor em uma função, armazenei a 
     quantidade de números positvos em um vetor de 2 posições onde a primeira é 
     os valores positvos e a segunda os numeros positivos.*/
    
    Tamanho[0] = PP;
    Tamanho[1] = PN;
}