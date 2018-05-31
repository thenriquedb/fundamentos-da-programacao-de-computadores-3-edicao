/*
15) Faça um programa que preencha um primeiro vetor com dez números inteiros, e um segundo vetor
com cinco números inteiros. O programa deverá mostrar uma lista dos números do primeiro vetor com
seus respectivos divisores armazenados no segundo vetor, bem como suas posições.
Exemplo de saída do programa:
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int n[10];
    int d[5];
    int i, j, k;

    printf("Primeiro vetor \n");
    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);
    }

    printf("\nSegundo vetor \n");
    for (i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &d[i]);
    }
    printf("\nDivisores\n");
    
    //Veriicar divisores
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 5; j++) {
            if (n[i] % d[j] == 0) {
                printf("\tO número %d é divisivel por %d na posição %d. \n", n[i], d[j], j);
            }
        }
    }
    return (EXIT_SUCCESS);
}



