/*
10) O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor
e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a
seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.
 * 
CusTo dE FáBriCA                        % do distrbuidor        % dos impostos
Até R$ 12.000,00                               5                    isento
Entre R$ 12.000,00 e R$ 25.000,00              10                    15
Acima de R$ 25.000,00                          15                    20
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float custo, total;

    printf("Valor total de um veículo \n\n");
    printf("Digite o preço de fabrica: ");
    scanf("%f", &custo);

    if (custo < 12000) {
        custo = custo * 1.05;
        printf("Preço total do veículo: R$ %.2f ", custo);
    } else if (custo >= 12000 && custo <= 25000) {
        custo = custo * 1.25;
        printf("Preço total do veículo: R$ %.2f ", custo);
    } else {
        custo = custo * 1.35;
        printf("Preço total do veículo: R$ %.2f ", custo);
    }

    return (EXIT_SUCCESS);
}

