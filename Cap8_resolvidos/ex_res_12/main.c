/*
12) Elabore uma sub-rotina que retorne um vetor com os três primeiros números perfeitos. Sabe-se que um
número é perfeito quando é igual à soma de seus divisores (exceto ele mesmo). Exemplo: os divisores
de 6 são 1, 2 e 3, e 1 + 2 + 3 = 6, logo 6 é perfeito.
 */

#include <stdio.h>
#include <stdlib.h>
int NumerosPerfeitos(int *vetor);

int main(int argc, char** argv) {
    int i, vetor[3];
    NumerosPerfeitos(&vetor);

    for (i = 0; i < 3; i++) {
        printf("RES[%d] = %d \n", i, vetor[i]);
    }

    return (EXIT_SUCCESS);
}

int NumerosPerfeitos(int *vetor) {
    int soma = 0, num = 1;
    int i, c = 0;

    do {
        //Laço para somar os divisores de cada numero
        for (i = 1; i < num; i++) {
            if (num % i == 0) {
                soma += i;
            }
        }

        //Irá verificar se a soma é igual ao numéro
        if (soma == num) {
            vetor[c] = soma;
            c++;
        }

        num++;
        soma = 0;

    } while (c != 3);
}