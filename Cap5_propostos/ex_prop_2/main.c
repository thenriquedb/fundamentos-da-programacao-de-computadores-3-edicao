/*
2) Uma companhia de teatro deseja montar uma série de espetáculos. A direção calcula que, a
R$ 5,00 o ingresso, serão vendidos 120 ingressos, e que as despesas serão de R$ 200,00. Diminuindo-se em
R$ 0,50 o preço dos ingressos, espera-se que as vendas aumentem em 26 ingressos. Faça um programa que
escreva uma tabela de valores de lucros esperados em função do preço do ingresso, fazendo-se variar esse pre-
ço de R$ 5,00 a R$ 1,00, de R$ 0,50 em R$ 0,50. Escreva, ainda, para cada novo preço de ingresso, o lucro
máximo esperado, o preço do ingresso e a quantidade de ingressos vendidos para a obtenção desse lucro. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float vlr_ingresso, lucro;
    int quant_ingresso;
    int i;

    vlr_ingresso = 5, 00;
    quant_ingresso = 120;

    printf("FUNÇÃO QUE CALCULA O LUCRO: F(x) = VALOR * QUANTIDADE - 200 \n\n ");

    printf("VALOR INGRESSO: R$ %.2f. \n", vlr_ingresso);
    lucro = quant_ingresso * vlr_ingresso - 200;
    printf("    Lucro: R$ %.2f. \n", lucro);
    printf("------------------------------------------------------------------\n");

    for (i = 5; i <= 12; i++) {
        /* Sabendo que cada diminuição de R$ 0,50 centavos aumenta 26 o número de ingressos
         aumenta 26 basta fazer: */

        vlr_ingresso = vlr_ingresso - 0.5;
        quant_ingresso = quant_ingresso + 26;
        printf("VALOR INGRESSO: R$ %.2f. \n", vlr_ingresso);
        lucro = quant_ingresso * vlr_ingresso - 200;
        printf("    Lucro: R$ %.2f. \n", lucro);
        printf("--------------------------------------------------------------- \n");
    }

    return (EXIT_SUCCESS);
}

