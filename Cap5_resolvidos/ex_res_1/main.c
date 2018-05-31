/*
1) Um funcionário de uma empresa recebe, anualmente, aumento salarial. Sabe-se que:
 * 
a) Esse funcionário foi contratado em 2005, com salário inicial de R$ 1.000,00.
b) Em 2006, ele recebeu aumento de 1,5% sobre seu salário inicial.
c) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro do percentual do ano
anterior.
 * 
Faça um programa que determine o salário atual desse funcionário.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float n_salario, percentual, per_aumento;
    int ano_atual, ano_inicial;
    int cont = 1;
    float salario = 1000;

    printf("Calculo de salário \n\n");
    printf(" Salário inicial de R$ 1000,00 \n");
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    salario = 1000;
    percentual = 0.015;
    n_salario = salario * percentual + salario;

    for (cont = 2007; cont <= ano_atual; cont++) { // for (condição de inicio ; condição de terminino ; ação)
        /* Contador começa em 2006 pois se começar em 2005 irá contar o acresimo a partir de 2005,assim bugando o programa. */

        percentual = percentual * 2;
        per_aumento = n_salario * percentual;
        n_salario = n_salario + per_aumento;
    }
    printf("Seu novo salário será de R$ %.2f \n", n_salario);

    return (EXIT_SUCCESS);

}