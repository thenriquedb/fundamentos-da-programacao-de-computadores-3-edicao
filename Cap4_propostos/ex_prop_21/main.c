/*
21) Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência.
A procedência obedece à tabela a seguir.

CÓDIGO DE ORIGEM    ProCEdêNCiA
1                   Sul
2                   Norte
3                   Leste
4                   Oeste
5 ou 6              Nordeste
7 ou 8 ou 9         Sudeste
10 a 20             Centro-oeste
21 a 30             Nordeste
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int codigo;
    printf("Procedência de produtos \n\n");
    printf("Digite o codigo de origem: ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        printf("Procedência: Sul");
    }
    else if (codigo == 2) {
        printf("Procedência: Norte");
    }
    else if (codigo == 3) {
        printf("Procedência: Lest");
    }
    else if (codigo == 4) {
        printf("Procedência: Oeste ");
    } 
    else if (codigo == 5 || codigo == 6) {
        printf("Procedência: Nordeste");
    }
    else if (codigo == 7 || codigo == 8 || codigo == 9) {
        printf("Procedência: Sudeste");
    } 
    else if (codigo >= 10 && codigo <= 20) {
        printf("Procedência: Centro-Oeste");
    } 
    else if (codigo > 20 && codigo <= 30) {
        printf("Procedência: Nordeste");
    }
    else {
        printf("Codigo inválido.");
    }
   
    printf("\n \n");
    return (EXIT_SUCCESS);
}

