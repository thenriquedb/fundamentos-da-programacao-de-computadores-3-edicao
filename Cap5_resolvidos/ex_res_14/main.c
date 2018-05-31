/*
14) Faça um programa que receba o valor de uma dívida e mostre uma tabela com os seguintes dados:
valor da dívida, valor dos juros, quantidade de parcelas e valor da parcela. Os juros e a quantidade de parcelas seguem a tabela:
 * 
    QUANT. PARCELA   % DE JUROS
        1                   0
        3                   10
        6                   15
        9                   20
        12                  25
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int i, quant_parcela, per_juros, juros;
    float valor_divida, valor_parcela, total;

    per_juros = 10;
    quant_parcela = 3;

    printf("Digite o valor da divida: ");
    scanf("%f", &valor_divida);
    printf("VALOR DA DIVIDA: R$ %.2f \n\n", valor_divida);

    //Como a primeira parcela não possui juros ele deve ficar de fora do loop para não bugar o contador.
    printf("QTDE de parcela: 1 \n");
    printf("Juros: 0%% \n");
    printf("Valor da parcela: R$ %.2f \n\n", valor_divida);

    for (i = 1; i <= 12; i = i = i + 3) {
        juros = valor_divida * per_juros / 100;
        total = valor_divida + juros;
        valor_parcela = total / quant_parcela;

        printf("QTDE de parcela: %d \n", quant_parcela);
        printf("Juros: %d%% \n", per_juros);
        printf("Valor da parcela: R$ %.2f \n", valor_parcela);
        printf("Valor dos juros: %d \n", juros);
        printf("Valor total: R$ %.2f \n\n", total);

        quant_parcela = quant_parcela + 3;
        per_juros = per_juros+5;
    }

    return (EXIT_SUCCESS);
}
