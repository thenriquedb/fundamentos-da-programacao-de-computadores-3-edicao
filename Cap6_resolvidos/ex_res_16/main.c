/*
16¨) Faça um programa que preencha um vetor com dez números inteiros e um segundo vetor com cinco
números inteiros. Calcule e mostre dois vetores resultantes. O primeiro vetor resultante será composto
pelos números pares, gerados pelo elemento do primeiro vetor somado a todos os elementos do segundo
vetor; o segundo será composto pelos números ímpares gerados pelo elemento do primeiro vetor somado
a todos os elementos do segundo vetor. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int x[10], y[5], pares[10], impares[10];
    int contP = 0, contI = 0, somaY = 0;
    int i, r;

    //P1: Posição pares | P2: Posição dos impares
    int p1 = 0;
    int p2 = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o %d número: ", i + 1);
        scanf("%d", &x[i]);
        
        /*Irá verificar se o número digitado é par ou impar e armzanerá no vetor correspondente*/
        if (x[i] % 2 == 0) {
            pares[p1] = x[i];
            p1++;
            contP++;
        } else {
            impares[p2] = x[i];
            contI++;
            p2++;
        }
    }

    printf("\nSegundo vetor\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &y[i]);
        somaY += y[i];
    }

    printf("\n\t1º Vetor resultantes: ");
    for (i = 0; i < contP; i++) {
        printf("%d | ", r = pares[i] + somaY);
    }

    printf("\n\t2º Vetor resultantes: ");
    for (i = 0; i < contI; i++) {
        printf("%d | ", r = impares[i] + somaY);
    }
    printf("\n");
    return (EXIT_SUCCESS);
}

