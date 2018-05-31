/*
25) Faça um programa que gere os dez primeiros números primos acima de 100 e armazene-os em um
vetor. Escreva no final o vetor resultante.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int p, i, j, cont, quant_primo, raiz;
    int n = 101, primo[10];
    i = 1;
    p = 0;
    quant_primo = 0;

    do {
        cont = 0;
        for (i = 1; i < n; i++) { //Verificar se o número é primo
            if (n % i == 0) {
                cont++;
            }
        }

        /*Se N for primo será armazenado no vetor*/
        if (cont < 2) {
            primo[p] = n;
            quant_primo++;
            p++;
        }
        n++;
    } while (quant_primo != 10); //O laço ira parar quando achar os 10 primeiros números primos

    printf("Os 10 primeiros números primos acima de 100 são: \n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", primo[i]);
    }
    return (EXIT_SUCCESS);
}

