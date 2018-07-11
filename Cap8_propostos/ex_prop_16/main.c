/*
16) Faça uma sub-rotina que receba um vetor X de 20 de números reais como parâmetro e retorne a soma
dos elementos de X.
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 20
int main(int argc, char** argv) {
    float vet[TAM];
    int i;

    void SomaVetor(float vetor[], int T);

    printf("Vetor: \n");
    for (i = 0; i < TAM; i++) {
        printf("V[%d]: ",i);
        scanf("%f",&vet[i]);
    }
    SomaVetor(vet,TAM);
}

void SomaVetor(float vetor[], int T) {
    float soma = 0;
    int i;
        for (i = 0; i < TAM; i++) {
            soma += vetor[i];
        }
    printf("\nA soma dos elementos do vetor é: %.2f. \n",soma);
}