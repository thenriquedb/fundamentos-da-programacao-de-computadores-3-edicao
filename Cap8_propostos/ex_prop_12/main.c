/*
12) Crie uma sub-rotina que receba como parâmetro dois valores X e Z, calcule e retorne X^z sem utilizar
funções ou operadores de potência prontos.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int x, z;
    void Potencia(int x, int z);

    printf("Digite um valor para X: ");
    scanf("%d", &x);

    printf("Digite um valor para Z: ");
    scanf("%d", &z);

    Potencia(x, z);

    return (EXIT_SUCCESS);
}

void Potencia(int x, int z) {
    int i, pot = x;

    for (i = 1; i < z; i++) {
        pot = pot* x;
    }
    printf("X^Z = %d \n", pot);
}

