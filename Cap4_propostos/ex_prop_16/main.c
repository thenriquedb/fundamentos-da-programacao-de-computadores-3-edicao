/*
 16) Uma empresa decide aplicar descontos nos seus preços usando a tabela a seguir. Faça um programa que
receba o preço atual de um produto e seu código, calcule e mostre o valor do desconto e o novo preço.
 * 
PREÇO ATUAL                    % DE DESCONTO
Até R$ 30,00                    Sem desconto
Entre R$ 30,00 e R$ 100,00      10%
Acima de R$ 100,00              15%
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float preco, desconto;

    printf("Valor do desconto \n \n");
    printf("Digite o valor do produto: ");
    scanf("%f", &preco);

    if (preco < 30) {
        printf("Sem desconto");

    } else if (preco >= 30 && preco <= 100) {
        printf("10%% de desconto \n");
        printf("Valor do desconto: R$ %.2f \n", desconto = preco * 0.1);
        printf("Novo preço: R$ %.2f", preco = preco - desconto);
    }

    else if (preco > 100) {
        printf("15%% de desconto \n");
        printf("Valor do desconto: R$ %.2f \n", desconto = preco * 0.15);
        printf("Novo preço: R$ %.2f", preco = preco - desconto);
    }
    
    printf("\n \n");
    return (EXIT_SUCCESS);
}

