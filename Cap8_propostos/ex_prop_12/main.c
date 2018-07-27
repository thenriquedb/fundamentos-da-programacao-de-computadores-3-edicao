/*
12) Crie uma sub-rotina que receba como parâmetro dois valores X e Z, calcule e retorne X^z sem utilizar
funções ou operadores de potência prontos.
 */

#include <stdio.h>
#include <stdlib.h>

int Potencia(int x, int z);

int main(int argc, char** argv) {
    int x, z;

    printf("Digite um valor para X: ");
    scanf("%d", &x);

    printf("Digite um valor para Z: ");
    scanf("%d", &z);

    printf("X^Z = %d \n", Potencia(x, z));

    return (EXIT_SUCCESS);
}

int Potencia(int x, int z) {
    int i, pot = x;

    for (i = 1; i < z; i++) {
        pot = pot* x;
    }
    return pot;
}

