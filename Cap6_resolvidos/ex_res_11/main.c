/*
11) Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um vetor.
Calcule e mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o mês por
extenso: 1 – janeiro, 2 – fevereiro...). Desconsidere empates.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int maior_m, menor_m;
    int m, i, j, k;
    float maior_t, menor_t, temp[12];

    for (i = 0; i < 12; i++) {
        printf("Digite a temperatura média do mês %d: ", i + 1);
        scanf("%f", &temp[i]);
        maior_m = temp[i];
        menor_m = temp[i];
    }
    return (EXIT_SUCCESS);
}

