/*
7) Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de números
negativos e a soma dos números positivos desse vetor. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float n[10], soma = 0;
    int cont_neg = 0, i;

    for (i = 0; i < 10; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%f", &n[i]);
        if (n[i] > 0 || n[i] == 0) {
            soma = soma + n[i];

        } else {
            cont_neg++;
        }
    }

    if (cont_neg > 0) {
        printf("\nForam digitados %d números negativos. \n", cont_neg);
    } else {
        printf("\nNenhum número negativo foi digitado. \n");
    }

    if (soma > 0) {
        printf("A soma dos números positivos é de %.2f. \n", soma);
    } else {
        printf("Nenhum número positco foi digitado. \n");
    }
    return (EXIT_SUCCESS);
}

