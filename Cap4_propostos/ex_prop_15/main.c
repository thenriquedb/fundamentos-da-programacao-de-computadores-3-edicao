/*
15) Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um programa
que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido após um mês de
investimento, de acordo com o tipo de investimento.
 * 
TIPO        DESCRIÇÃO               RENDIMENTO MENsAL
1           Poupança                3%
2           Fundos de renda fixa    4%
 */
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int opcao;
    float valor;

    printf("Rendimento mensal \n\n");
    printf("Digite o valor: ");
    scanf("%f", &valor);
    printf("/n/n");

    printf("TIPO      DESCRIÇÃO \n"
            "1        Poupança \n"
            "2        Fundos de renda fixa \n");

    printf("\n Digite a opção desejada: ");
    scanf("%d1", &opcao);

    switch (opcao) {
        case 1:
            printf("Poupança - Rendimento de 3%% \n");
            printf("Seu rendimento será de R$ %.2f.", valor = valor * 1.03);
            break;

        case 2:
            printf("Fundos de renda fixa - Rendimento de 4%% \n");
            printf("Seu rendimento será de R$ %.2f.", valor = valor * 1.04);
            break;
    }
    printf("\n \n");
    return (EXIT_SUCCESS);
}