/*
19) Faça uma sub-rotina que receba como parâmetro dois vetores de dez números inteiros, determine e mos-
tre o vetor intersecção entre eles.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main(int argc, char** argv) {
    int i, vet1[TAM], vet2[TAM];
    void Interseccao_de_Vetores(int V1[], int V2[], int T);

    srand(time(NULL));


    printf("Vetor 1: \n");
    for (i = 0; i < TAM; i++) {
        printf("%d | ", vet1[i] = rand() % 10);
    }

    printf("\n\nVetor 2: \n");
    for (i = 0; i < TAM; i++) {
        printf("%d | ", vet2[i] = rand() % 10);
    }

    Interseccao_de_Vetores(vet1, vet2, TAM);

    return (EXIT_SUCCESS);
}

void Interseccao_de_Vetores(int V1[], int V2[], int T) {
    int cont = 0, P = 0, i, j, k;
    int interseccao[T * 2], interseccaoSemRepeticao[TAM * 2];

    //Armazenará os valores presente em ambos os vetores em um vetor 
    for (i = 0; i < T; i++) {
        cont = 0;
        for (j = 0; j < T; j++) {
            if (V1[i] == V2[j]) {
                cont++;
            }
        }
        if (cont > 0) {
            interseccao[P] = V1[i];
            P++;
        }
    }

    //Removera os valores repetidos
    printf("\n\nIntersecção dos vetores: \n");
    int P1 = 0;
    for (i = 0; i < P; i++) {
        cont = 0;
        for (j = 0; j < P1; j++) {
            if (interseccao[i] == interseccaoSemRepeticao[j]) {
                cont++;
            }
        }
        if (cont < 1) {
            interseccaoSemRepeticao[P1] = interseccao[i];
            printf("%d | ", interseccaoSemRepeticao[P1]);
            P1++;
        }
    }
    printf("\n");
}