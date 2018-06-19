/*
5) Faça um programa que preencha dois vetores, X e Y, com dez números inteiros cada. Calcule e mostre
os seguintes vetores resultantes:
 
    || A união de X com Y (todos os elementos de X e de Y sem repetições).
    || A diferença entre X e Y (todos os elementos de X que não existam em Y, sem repetições). 
    || A soma entre X e Y (soma de cada elemento de X com o elemento de mesma posição em Y). 
    || O produto entre X e Y (multiplicação de cada elemento de X com o elemento de mesma posição em Y). 
    || A intersecção entre X e Y (apenas os elementos que aparecem nos dois vetores, sem repetições). 
 */

#include <stdio.h>
#include <stdlib.h>
#define T 3

int main(int argc, char** argv) {
    int vet1[T], vet2[T], uniao_repetidos[T * 2], cont;
    int i, j, p = 0;

    printf("Vetor 1 \n");
    for (i = 0; i < T; i++) {
        printf("\tV[%d] = ", i);
        scanf("%d", &vet1[i]);

        if (i == T - 1) {
            printf("\n\n");
        }
    }

    printf("Vetor 2 \n");
    for (i = 0; i < T; i++) {
        printf("\tV2[%d] = ", i);
        scanf("%d", &vet2[i]);

        if (i == T - 1) {
            printf("\n\n");
        }
    }

    //União de X e Y sem repetições
    for (i = 0; i < T; i++) {
        cont = 0;

        for (j = 0; j < T; j++) {
            if (vet1[i] == vet2[j]) {
                cont++;
            }
        }

        if (cont > 0) {
            uniao_repetidos[p] = vet1[i];
            p++;
        }
    }
    if (p > 0) {
        printf("União X & Y (Sem repetições): ");
        for (i = 0; i < p; i++) {
            printf("%d ", uniao_repetidos[i]);
        }
    } else {
        printf("Todos os valroes diferentes.");
    }

    //-----------------------------DIFERENÇA X e Y-----------------------------
    int diferenca[T * 2];
    p = 0;

    for (i = 0; i < T; i++) {
        cont = 0;
        for (j = 0; j < T; j++) {
            if (vet1[i] != vet2[j]) {
                cont++;
            }
        }

        if (cont > 0) {
            diferenca[p] = vet1[i];
            printf("dife: %d \n",diferenca[p]);
            p++;
        }
    }

    printf("\n\nDiferença X & Y (Sem repetições): ");
    for (i = 0; i < p; i++) {
        printf("%d ", diferenca[i]);
    }
    //-----------------------------------------------------------------------------

    return (EXIT_SUCCESS);
}

