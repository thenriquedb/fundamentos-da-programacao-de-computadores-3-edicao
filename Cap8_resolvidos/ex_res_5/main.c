/*
5) Crie um programa que receba os valores antigo e atual de um produto. Chame uma sub-rotina que
determine o percentual de acréscimo entre esses valores. O resultado deverá ser mostrado no programa
principal.
 */

#include <stdio.h>
#include <stdlib.h>

/* Para calcular a porcentagem de acressimo dos valores basta fazer: 
 *Fazer a difereça entre o valor atual e o valor antigo;
 *Em seguida dividir o resultado anterior pelo valor antigo;
 *Como é porcentagem bastar multplicar por 100;  
 */

float CalculoPercentual(float VAntigo, float VAtual) {
    float percentual = ((VAtual - VAntigo) / VAntigo)*100;
    return percentual;

}

int main(int argc, char** argv) {
    float ValorAntigo, ValorAtual;

    printf("Valor antigo: ");
    scanf("%f", &ValorAntigo);

    printf("Valor atual: ");
    scanf("%f", &ValorAtual);


    printf("\nPercentual de aumento foi de %.2f%%. \n", CalculoPercentual(ValorAntigo, ValorAtual));

    return (EXIT_SUCCESS);
}

