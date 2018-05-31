/*
10) Faça um programa que preencha um vetor com dez números inteiros e um segundo vetor com cinco nú-
meros inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor resultante será composto pela
soma de cada número par do primeiro vetor somado a todos os números do segundo vetor. O segundo
vetor resultante será composto pela quantidade de divisores que cada número ímpar do primeiro vetor
tem no segundo vetor.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int x[10], y[5], n_par[10], n_impar[10], div[10];
    int p = 0, p2 = 0, p3 = 0, soma = 0; //Px: posição
    int i, j, quant_div = 0;

    //Leitura do 1º Vetor
    printf("1º Vetor \n");
    for (i = 0; i < 10; i++) {
        printf("\tDigite o %d número: ", i + 1);
        scanf("%d", &x[i]);

        //Verificar se o número digitado é par ou impar e separa-los
        if (x[i] % 2 == 0 && x[i] != 0) {
            n_par[p] = x[i];
            p++;
        } else {
            n_impar[p2] = x[i];
            p2++;
        }
    }

    //Leitura do 2º Vetor
    printf("\n2º Vetor \n");
    for (i = 0; i < 5; i++) {
        printf("\tDigite o %d número: ", i + 1);
        scanf("%d", &y[i]);
        soma += y[i];
    }

    //1º Vetor resultante
    printf("\n1º Vetor resultante: \n");
    for (i = 0; i < p; i++) {
        printf("%d | ", n_par[i] + soma);
    }

    //2º vetor resultante
    for (i = 0; i < p2; i++) {
        quant_div = 0;
        /*Irá dividir os elementos impares do 1º vetor pelos do 2º e contar a quantidade de divores*/
        for (j = 0; j < 5; j++) {
            if (n_impar[i] % y[j] == 0) {
                quant_div++;
            }
        }
        div[p3] = quant_div;
        p3++;
    }

    printf("\n\n2º Vetor resultante \n");
    for (i = 0; i < p2; i++) {
        printf("%d | ", div[i]);
    }
    return (EXIT_SUCCESS);
}

