/*
Faça um programa que receba o preço, a categoria (1 — limpeza; 2 — alimentação; ou 3 — vestuário)
e a situação (R — produtos que necessitam de refrigeração; e N — produtos que não necessitam de refrigeração).

Calcule e mostre:
 * O valor do aumento, usando as regras que se seguem
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float preco, aumento, imposto;
    int categoria;
    char refrigeracao;

    printf("Classificação de produtos \n \n");
    printf("Digite a categoria do produto,sendo: \n"
            "1. Limpeza \n"
            "2. Alimentação \n"
            "3. Vestuário \n");
    printf("Digite a categoria desejada: ");
    scanf("%d", &categoria);
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    printf("O produto precisa de refrigeraçãO? \n"
            "S - Sim \n"
            "N - Não \n");
    printf("Digite a opção desejada: ");
    scanf(" %c", &refrigeracao);
    printf("\n\n");

    switch (refrigeracao) {
        case 'S': case 's':
            if (preco <= 25) {
                if (categoria == 1) {
                    printf("Esse é produto necessita de rerigeração \n");
                    printf("O porduto sofrerá um aumento de 5%%. \n");
                    printf("O novo preço será de R$ %.2f.", preco = preco * 1.05);
                } else if (categoria == 2) {
                    printf("Esse é produto necessita de rerigeração \n");
                    printf("O porduto sofrerá um aumento de 8%%. \n");
                    printf("O novo preço será de R$ %.2f.", preco = preco * 1.08);
                    //Como a categoria é 2 e necessita de refrigeração sera acresentado um acressimo de 5%
                    printf("Você pagará 5%% de impostos. \n");
                    printf("Pagará R$ %.2f.", imposto = preco * 0.05);
                    printf("O novo valor do´prdouto R$ %.2f.", preco = preco + imposto);
                }
            }
            if (categoria == 3) {
                printf("Esse é produto necessita de rerigeração \n");
                printf("O porduto sofrerá um aumento de 10%%. \n");
                printf("O novo preço será de R$ %.2f.", preco = preco * 1.10);
            }

            if (categoria != 2) {
                printf("Você pagará 8%% de impostos. \n");
                printf("Pagará R$ %.2f.", imposto = preco * 0.08);
                printf("O novo valor do´prdouto R$ %.2f.", preco = preco + imposto);
            }

            if (preco > 25) {
                if (categoria == 1)
                    printf("Esse é produto necessita de rerigeração \n");
                printf("O porduto sofrerá um aumento de 12%%. \n");
                printf("O novo preço será de R$ %.2f.", preco = preco * 1.12);
            } else if (categoria == 2) {
                printf("Esse é produto necessita de rerigeração \n");
                printf("O porduto sofrerá um aumento de 15%%. \n");
                printf("O novo preço será de R$ %.2f.", preco = preco * 1.15);
            }

            if (categoria == 3) {
                printf("Esse é produto necessita de rerigeração \n");
                printf("O porduto sofrerá um aumento de 18%%. \n");
                printf("O novo preço será de R$ %.2f.", preco = preco * 1.18);
            }

            if (categoria != 2) {
                printf("Você pagará 8%% de impostos. \n");
                printf("Pagará R$ %.2f.", imposto = preco * 0.08);
                printf("O novo valor do´prdouto R$ %.2f.", preco = preco + imposto);
            }
            break;

    //Caso não precisa de refrigeração.
        case 'N': case 'n':
            if (preco <= 25) {
                if (categoria == 1) {
                    printf("Esse é produto necessita de rerigeração \n");
                    printf("O porduto sofrerá um aumento de 5%%. \n");
                    printf("O novo preço será de R$ %.2f.", preco = preco * 1.05);
                } else if (categoria == 2) {
                    printf("Esse é produto necessita de rerigeração \n");
                    printf("O porduto sofrerá um aumento de 8%%. \n");
                    printf("O novo preço será de R$ %.2f.", preco = preco * 1.08);
                }

                if (categoria == 3) {
                    printf("Esse é produto necessita de rerigeração \n");
                    printf("O porduto sofrerá um aumento de 10%%. \n");
                    printf("O novo preço será de R$ %.2f.", preco = preco * 1.10);
                }
            }
            if (preco > 25) {
                if (categoria == 1) {
                    printf("Esse é produto necessita de rerigeração \n");
                    printf("O porduto sofrerá um aumento de 12%%. \n");
                    printf("O novo preço será de R$ %.2f.", preco = preco * 1.12);
                } else if (categoria == 2) {
                    printf("Esse é produto necessita de rerigeração \n");
                    printf("O porduto sofrerá um aumento de 15%%. \n");
                    printf("O novo preço será de R$ %.2f.", preco = preco * 1.15);
                }

                if (categoria == 3) {
                    printf("Esse é produto necessita de rerigeração \n");
                    printf("O porduto sofrerá um aumento de 18%%. \n");
                    printf("O novo preço será de R$ %.2f.", preco = preco * 1.18);
                }
                if (categoria != 2) {
                    printf("Você pagará 8%% de impostos. \n");
                    printf("Pagará R$ %.2f.", imposto = preco * 0.08);
                    printf("O novo valor do´prdouto R$ %.2f.", preco = preco + imposto);
                }
            }
            //Fim das comparativas;
            break;
    }
    printf("\n\n");
    return (EXIT_SUCCESS);
}