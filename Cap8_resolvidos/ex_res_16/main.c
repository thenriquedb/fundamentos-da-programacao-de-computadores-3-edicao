/*
16) Crie uma sub-rotina que receba dois vetores A e B de dez elementos inteiros como parâmetro. A sub-
-rotina deverá determinar e mostrar um vetor C que contenha os elementos de A e B em ordem decrescente.
O vetor C deverá ser mostrado no programa principal.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    /*Prefiro declarar a função primeiro para organizar o meu codigo. */
    void OrdenarVetor(int V1[], int V2[], int N);

    int TAM = 10;
    int i, j, vetA[TAM], vetB[TAM];

    printf("Vetor A \n");
    for (i = 0; i < TAM; i++) {
        printf("\tVA[%d]: ", i);
        scanf("%d", &vetA[i]);
    }

    printf("\nVetor B \n");
    for (i = 0; i < TAM; i++) {
        printf("\tVB[%d]: ", i);
        scanf("%d", &vetB[i]);
    }

    OrdenarVetor(vetA, vetB, TAM);

    return (EXIT_SUCCESS);
}


void OrdenarVetor(int V1[], int V2[], int N) {
    int i, j, aux, p = 0, V3[N * 2];

    //Laço para fazer a uniao dos vetores A e B
    for (i = 0; i < N * 2; i++) {
        if (i < N) {
            V3[i] = V1[i];
        } else {
            V3[i] = V2[p];
            p++;
        }
    }

    //Bublle sort para organiza-lo em ordem decressente
    for (i = 0; i < N * 2; i++) {
        for (j = i + 1; j < N*2; j++) {
            if (V3[i] < V3[j]) {
                aux = V3[i];
                V3[i] = V3[j];
                V3[j] = aux;
            }
        }
    }

    printf("\nVetor organizado: \n");
    for (i = 0; i < N * 2; i++) {
        printf("%d ", V3[i]);
    }
}