/*
 1) Faça um programa que preencha um vetor com nove números inteiros, calcule e mostre os números
primos e suas respectivas posições.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int t = 9;
    int i, j;
    int n[t];
    int cont = 0;

    //Esse laço irá armazenar os valores digitados no vetor N;
    for (i = 0; i < t; i++) {
        printf("Digite um número na posição %dº: ", i);
        scanf("%d", &n[i]);
    }
    printf("\n");

    //Verificar se os números é primo
    for (i = 0; i < t; i++) {
        cont = 0;
        for (j = 1; j < n[i]; j++) {
            if (n[i] % j == 0) {
                cont++;
            }
        }
        //O o número 4 está sendo reconhecido como primo
        if (cont <= 2 && n[i] != 4) {
            printf("\tO número %d é primo e esta na posição %d. \n", n[i], i);
        } else  {
            printf("\tO número %d não é primo e esta na posição %d. \n", n[i], i);
        }
    }
    return (EXIT_SUCCESS);
}
