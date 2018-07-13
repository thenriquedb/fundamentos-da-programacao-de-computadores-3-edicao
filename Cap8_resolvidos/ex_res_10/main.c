/*
10) Crie uma sub-rotina que receba como parâmetro um valor inteiro e positivo N e retorne o valor de S,
obtido pelo seguinte cálculo:
 
S = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!
 */

#include <stdio.h>
#include <stdlib.h>

float CalculoExpressao(int N) {
    int i, j;
    double S = 0, num = 1, fat = 1;

    for (i = 0; i <= N; i++) {
        //Calculo fatorial
        for (j = 1; j <= N; j++) {
            fat *= j;
        }
        S += num / fat;
    }
    
    return S;
}

int main(int argc, char** argv) {
    int N;

    printf("Digite um valor para N: ");
    scanf("%d", &N);

    printf("S: %.20lf \n", CalculoExpressao(N)); //lf é usado para imprimir variaveis do tipo double | e 20 é numero de casas apos a virgula
    
    return (EXIT_SUCCESS);
}

