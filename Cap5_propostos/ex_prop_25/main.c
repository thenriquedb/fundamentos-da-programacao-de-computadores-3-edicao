/* 25) Uma agência bancária possui vários clientes que podem fazer investimentos com rendimentos mensais,
conforme a tabela a seguir:

Tipo    Descrição              Rendimento mensal
1       Poupança                    1,5%
2       Poupança plus               2%
3       Fundos de renda fixa        4%
 
Faça um programa que leia o código do cliente, o tipo do investimento e o valor investido, e que calcule
e mostre o rendimento mensal de acordo com o tipo do investimento. No final, o programa deverá mostrar
o total investido e o total de juros pagos.
A leitura terminará quando o código do cliente digitado for menor ou igual a 0.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int i, tipo, codigo;
    float vlr_investido, juros, rendimento;
    i = 1;
    do {
        printf("%dº Cliente \n", i);
        printf("    Digite seu codigo: ");
        scanf("%d", &codigo);
        printf("    Digite o valor do investimento: ");
        scanf("%f", &vlr_investido);
        printf("Tipos de investimentos \n");
        printf("    1. Poupança \n");
        printf("    2. Poupança Plus \n");
        printf("    3. Fundos de renda fixa \n");
        printf("Digite a opção desejada ou 0  para sair: ");
        scanf("%d", &tipo);
        printf("\n");
        if (tipo == 0) {
            break;
        }

        switch (tipo) {
            case 1:
                rendimento = (vlr_investido / 100) * 1.5;
                break;
            case 2:;
                rendimento = (vlr_investido / 100) * 2;
                break;
            case 3:
                rendimento = (vlr_investido / 100) * 4;
                break;
        }
        printf("TOTAL \n");
        printf("    Valor investido: R$ %.2f. \n", vlr_investido);
        printf("    Valor do rendimento mensal: R$ %.2f. \n", rendimento);
        i++;
        printf("\n");
    } while (tipo = !0);



    return (EXIT_SUCCESS);
}

