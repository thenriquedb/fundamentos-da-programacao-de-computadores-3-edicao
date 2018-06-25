/*
21) Escreva um algoritmo que leia um número não determinado de pares de valores x,y (x obrigatoria-
mente deve ser menor que y), todos inteiros e positivos, um par de cada vez. Para cada par, chame uma
sub-rotina que determine a soma dos números primos entre x e y (inclusive). O algoritmo deverá mos-
trar os valores de x e de y, seguidos pelo somatório calculado. A leitura dos pares terminará quando os
valores digitados para x e y forem iguais.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int x, y;

    void SomaPrimos_EntreXeY(int n1, int n2);

    do {
        do {
            printf("Digite um valor para X: ");
            scanf("%d", &x);
            printf("Digite um valor para Y: ");
            scanf("%d", &y);

            if (x > y) {
                printf("X precisa ser menor que Y. \n\n");
            } else if (x == y) {
                printf("Programa encerrado. \n\n");
            } else {
                SomaPrimos_EntreXeY(x, y);
            }
        } while (x < y);
    } while (x != y);

    return (EXIT_SUCCESS);
}

void SomaPrimos_EntreXeY(int n1, int n2) {
    int i, j, cont = 0, soma = 0;

    //Laço para somar os valroes primos entre N1 e N2
    for (i = n1; i <= n2; i++) {
        cont = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                cont++;
            }
        }
        if (cont <= 2) {
            soma += i;
        }
    }

    printf("Soma dos numeros primos entre %d e %d é %d. \n\n", n1, n2, soma);
}

