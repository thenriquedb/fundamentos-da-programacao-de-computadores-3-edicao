/*
1) Faça um programa que leia cinco grupos de quatro valores (A, B, C, D) e mostre-os na ordem lida. Em seguida,
organize-os em ordem crescente e decrescente.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char** argv) {
    setlocale(LC_ALL, "portuguese");
    int i, j, k;
    int aux, numeros[4];

    i = 0;

    for (i = 1; i <= 5; i++) {
        printf("\n----------------------------------------\n");
        printf("GRUPO %d \n\n", i);


        for (j = 0; j < 4; j++) { //Loop que fará o scan do vetor
            printf("Digite 4 números: ");
            scanf("%d", &numeros[j]);
        }
        printf("\n");

        //Imprimirá a ordem que os números foram digitados
        printf("Ordem atual dos valores: ");
        for (j = 0; j < 4; j++){
            printf("| %d | ", numeros[j]);
        }
        printf("\n");

        //Método de ordenação Bubblesort
        
        for (j = 0; j < 4; j++) { //Vai começar a conferir o vetor no indice 0
            for (k = j + 1; k < 4; k++) { //Vai começar a conferir o vetor no indice 1
                if(numeros[j]>numeros[k]){
                    /*Se a posicao 0 for maior que a posicao 1,os valores serão trocados de posicação.
                    Ou seja o valor da P1 vai pro P0 e o P0 para o P1. Isso sera repetido até a total ordenação dos numeros */
                    aux = numeros[j];
                    numeros[j] = numeros[k];
                    numeros[k] = aux;
                }
            }
        }
        
        printf("Números em ordem crescente \n");
        for (j=0; j<4; j++) {
            printf("| %d | ",numeros[j]);
        }

        printf("\n");

        //Método de ordenação Bubblesort
        for (j = 0; j < 4; j++) {
            for (k = j + 1; k < 4; k++) {
                if(numeros[j]<numeros[k]){
                    aux = numeros[j];
                    numeros[j] = numeros[k];
                    numeros[k] = aux;
                }
            }
        }

        printf("Números em ordem decrescente \n");
        for (j=0; j<4; j++) {
            printf("| %d | ",numeros[j]);
        }


        return (EXIT_SUCCESS);
    }
}