/* 16) Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas. Finalize digitando
idade igual a zero. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int idade, soma, i;
    float media;

    i = 0;
    soma = 0;

    do {
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        soma += idade;

        if (idade != 0) {
            i++;
        }
    } while (idade != 0);

    if (i > 0) {
        media = soma / i;
        printf("\n A media das idades digitadas é: %.1f. \n", media);
    } else {
        printf("Nenhuma idade digitada. \n");
    }
    return (EXIT_SUCCESS);
}

