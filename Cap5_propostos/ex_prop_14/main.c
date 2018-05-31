/*
14) Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião
em relação ao filme: ótimo — 3; bom — 2; regular — 1. Faça um programa que receba a idade e a opinião
de quinze espectadores, calcule e mostre:

    || a média das idades das pessoas que responderam ótimo;
    || a quantidade de pessoas que responderam regular; e
    || a percentagem de pessoas que responderam bom, entre todos os espectadores analisados. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int opniao, i, contO, contR, contB, somaO, idade;

    i = 0;
    contO = 0;
    contB = 0;
    contR = 0;

    printf("Análise de cinema \n");

    for (i = 1; i <= 15; i++) {
        printf("%dº Pessoa \n", i);
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("   O que achou do filme(1. Regular | 2. Bom | 3. Otimo): ");
        scanf("%d", &opniao);

        switch (opniao) {
            case 1: // REGULAR
                contR++;
                break;

            case 2: // BOM
                contB++;
                break;

            case 3: // OTIMO
                contO++;
                somaO += idade;
                break;
        }

    }

    return (EXIT_SUCCESS);
}

