/*
15) Faça uma sub-rotina que receba como parâmetro um vetor A com cinco números reais e retorne esses
números ordenados de forma crescente.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int TAM = 5;
    int i, vet[TAM];

    for (i = 0; i < TAM; i++) {
        printf("V[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    void OrdenarVetor(int vetor[], int T);
    OrdenarVetor(vet, TAM);

    return (EXIT_SUCCESS);
}

void OrdenarVetor(int vetor[], int T) {
    int i, j, aux;

    //Método bublle sort
    for (i = 0; i < T; i++) {
        for (j = i + 1; j < T; j++) 
        {
            if (vetor[i] > vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("\nVetor organizado: \n");
    for (i = 0; i < T; i++) {
        printf("%d ", vetor[i]);
    }
}