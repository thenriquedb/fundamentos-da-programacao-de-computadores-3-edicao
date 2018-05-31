/*
2) Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre:
    || os números múltiplos de 2;
    || os números múltiplos de 3;
    || os números múltiplos de 2 e de 3. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int v[7];
    int i;

    for (i = 0; i < 7; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &v[i]);
    }
    printf("\n");
    
    for (i = 0; i < 7; i++) {
        if (v[i] % 2 == 0) {
            printf("\tO número %d é multiplo de 2. \n", v[i]);
        } else if (v[i] % 3 == 0) {
            printf("\tO número %d é multiplo de 3. \n", v[i]);
        }
        if (v[i] % 2 == 0 && v[i] % 3 == 0) {
            printf("\tO número %d é multiplo de 2 e 3. \n", v[i]);
        }
    }
    return (EXIT_SUCCESS);
}

