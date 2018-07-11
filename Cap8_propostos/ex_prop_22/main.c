/*
22) Criar um programa que:
    || utilize uma sub-rotina para receber os elementos de uma matriz 10X5 de números reais;
    || utilize uma sub-rotina para calcular a soma de todos os elementos localizados abaixo da sexta linha
dessa matriz;
Os resultados deverão ser mostrados no programa principal.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 10
#define COL 5

int main(int argc, char** argv) {
    float mat[LIN][COL];
    int i, j, div;
    void Calcular_valores_abaixoLinha6(float *matriz[][COL);

    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            mat[i][j] = ((float) rand() / RAND_MAX)*100; //Gerar numeros decimais aleatorios

        }
    }
    return (EXIT_SUCCESS);
}

void Calcular_valores_abaixoLinha6(float *matriz[][COL]) {

}
