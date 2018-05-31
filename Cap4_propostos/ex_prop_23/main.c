/*
23) Faça um programa que receba:
 * 
 *o código do produto comprado; e
 * a quantidade comprada do produto.
Calcule e mostre:
 * o preço unitário do produto comprado, seguindo a Tabela I;
 *o preço total da nota;
 * o valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; e
 * o preço final da nota depois do desconto. 
 
 OBS: Tabelas presentws na pagina 93.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int codigo, quantidade;
    float nota, desconto, final;

    printf("Calculo de nota fiscal \n\n");
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("\n");

    if (codigo >= 1 && codigo <= 10) {
        printf("Valor do produdo: R$ 10.00. \n");
        printf("Valor total da nota: R$ %.2f \n", nota = quantidade * 10);
    } else if (codigo >= 11 && codigo <= 20) {
        printf("Valor do produdo: R$ 15.00. \n");
        printf("Valor total da nota: R$ %.2f \n", nota = quantidade * 15);
    } else if (codigo >= 21 && codigo <= 30) {
        printf("Valor do produdo: R$ 20.00. \n");
        printf("Valor total da nota: R$ %.2f \n", nota = quantidade * 20);
    } else if (codigo >= 31 && codigo <= 40) {
        printf("Valor do produdo: R$ 30.00. \n");
        printf("Valor total da nota: R$ %.2f \n", nota = quantidade * 30);
    } else {
        printf("Codigo inválido \n");
    }
    // Fim do calculo da nota

    printf("\n Calculo do desconto \n\n");
    if (nota < 250) {
        printf("Você receberá 5%% de desocnto. \n");
        printf("Seu desconto será de R$ %.2f. \n", desconto = nota * 0.05);
        printf(" O preço final será de R$ %.2f \n.", final = nota - desconto);
    } else if (nota >= 250 && nota <= 500) {
        printf("Você receberá 10%% de desocnto. \n");
        printf("Seu desconto será de R$ %.2f. \n", desconto = nota * 0.10);
        printf(" O preço final será de R$ %.2f \n.", final = nota - desconto);
    }
    else if (nota > 500) {
        printf("Você receberá 15%% de desocnto. \n");
        printf("Seu desconto será de R$ %.2f. \n", desconto = nota * 0.15);
        printf(" O preço final será de R$ %.2f \n.", final = nota - desconto);
    }
    return (EXIT_SUCCESS);
}

