/*
1) Faça uma sub-rotina que receba um número inteiro e positivo N como parâmetro e retorne a soma dos núme-
ros inteiros existentes entre o número 1 e N (inclusive). */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num;

    void SomaNumeros(int N);

    printf("Digite um número qualquer positivo: ");
    scanf("%d", &num);

    SomaNumeros(num);

    return (EXIT_SUCCESS);
}

void SomaNumeros(int N) {
    int i, soma = 0;

    for (i = 1; i <=N; i++) {
        soma += i;
    }

    printf("A soma dos números entre 1 e %d é %d. \n", N, soma);
}
