/*
24) Faça um programa que leia um vetor com quinze posições para números inteiros. Crie, a seguir, um vetor
resultante que contenha todos os números primos do vetor digitado. Escreva o vetor resultante.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int TAM = 15;
    int n[TAM], primo[TAM];
    int i, j, p = 0, cont, ver = 0;

    for (i = 0; i < TAM; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);

        cont = 0;
        for (j = 2; j <= n[i]; j++) { //Verificar se o número digitado é primo
            if (n[i] % j == 0) {
                cont++;
            }
        }
        if (cont < 2) {
            primo[p] = n[i]; //Se N for primo será armzenado no vetor de primos
            p++;
            ver++; //Contagem dos números primos para verificação no final
        }
    }

    if (ver > 0) {
        printf("\nNúmeros primos digitados: ");
        for (i = 0; i < p; i++) {
            printf("%d | ", primo[i]);
        }
    }else {
        printf("\nNenhum número primo digitado. \n");
    }
    return (EXIT_SUCCESS);
}

