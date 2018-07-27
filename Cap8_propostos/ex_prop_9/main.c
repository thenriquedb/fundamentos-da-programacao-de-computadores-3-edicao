/*
9) Crie uma sub-rotina que receba como parâmetro um valor inteiro e positivo e retorne a soma dos divisores
desse valor.
 */

#include <stdio.h>
#include <stdlib.h>

int SomaDosDivisores(int n);

int main(int argc, char** argv) {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("A soma dos divisores de %d é %d. \n", num, SomaDosDivisores(num)
            );

    return (EXIT_SUCCESS);
}

int SomaDosDivisores(int n) {
    int i, soma = 0;

    for (i = 1; i <=n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }
    
    return soma;

}