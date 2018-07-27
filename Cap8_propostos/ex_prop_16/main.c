/*
16) Faça uma sub-rotina que receba um vetor X de 20 de números reais como parâmetro e retorne a soma
dos elementos de X.
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 5

float SomaVetor(float vetor[], int T);

int main(int argc, char** argv) {
    float vet[TAM];
    int i;

    printf("Vetor: \n");
    for (i = 0; i < TAM; i++) {
        printf("V[%d]: ", i);
        scanf("%f", &vet[i]);
    }

    printf("\nA soma dos elementos do vetor é: %.2f. \n", SomaVetor(vet, TAM));
}

float SomaVetor(float vetor[], int T) {
    float soma = 0;
    int i;
    for (i = 0; i < TAM; i++) {
        soma += vetor[i];
    }
    return soma;
}