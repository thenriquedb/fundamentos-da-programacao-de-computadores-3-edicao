/*
 DESCRIÇÇÃO: 
 Na opção 1: receber o salário de um funcionário, calcular e mostrar o novo salário usando as regras a seguir:
    Salario                             % de aumento
Até R$ 210,00                           15%
De R$ 210,00 a R$ 600,00 (inclusive)    10%
Acima de R$ 600,00                      5%

Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor de suas férias. Sabe-se que as
férias equivalem a seu salário acrescido de um terço do salário.

Na opção 3: receber o salário de um funcionário e o número de meses de trabalho na empresa, no máximo
doze, calcular e mostrar o valor do décimo terceiro. Sabe-se que o décimo terceiro equivale a seu salário
multiplicado pelo número de meses de trabalho dividido por 12.
 
Na opção 4: sair do programa. 
 
 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int opcao, meses;
    float salario, n_salario, ferias, decimo_terceiro;

    do {
        printf("Menu de opções \n");
        printf("\t 1. Novo salário \n\t 2. Férias \n\t 3. 13º Salário \n\t 4. Sair \n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        printf("\n");

        if (opcao == 4) {
            break;
        }

        switch (opcao) {
            case 1:
                printf("Novo salário \n");
                printf("    Digite seu salário atual: ");
                scanf("%f", &salario);

                if (salario < 210) {
                    n_salario = salario * 1.15; //Aumento de 15%
                } else if (salario >= 210 && salario <= 600) {
                    n_salario = salario * 1.10; //Aumento de 15%
                } else if (salario > 600) {
                    n_salario = salario * 1.05; //Aumento de 5%
                }

                printf("    Seu novo salário sera de R$ %.2f. \n \n", n_salario);
                break;

            case 2:
                printf("Férias \n");
                printf("    Digite seu salário atual: ");
                scanf("%f", &salario);
                ferias = salario + (salario / 3);
                break;

            case 3:
                printf("13º Salário \n");
                printf("Digite seu salário atual: ");
                scanf("%f", &salario);
                do {
                    printf("    Digite a quantidade de meses trabalhados (No máximo 12): ");
                    scanf("%d", &meses);

                    decimo_terceiro = salario * meses / 12;

                    printf("    Você receberá R$ %.2f de 13º. \n\n", decimo_terceiro);
                } while (meses > 12);
                break;
                
            default: 
                printf("Opção inválida. \n\n");
        }
    } while (opcao != 4);



    return (EXIT_SUCCESS);
}

