/*
1) Faça uma sub-rotina que receba um número inteiro e positivo N como parâmetro e retorne a soma dos núme-
ros inteiros existentes entre o número 1 e N (inclusive). */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num;

    printf("Digite um número qualquer positivo: ");
    scanf("%d", &num);

    printf("A soma dos numeros entre 1 e %d é de %d. \n", num, SomaNumeros(num));

    return (EXIT_SUCCESS);
}

int SomaNumeros(int N) {
    int i, soma = 0;

    for (i = 2; i < N; i++) {
        soma += i;
    }

    return soma;
}
