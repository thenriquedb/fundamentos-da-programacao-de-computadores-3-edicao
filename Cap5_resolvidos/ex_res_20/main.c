/*
20) Faça um programa para ler o código, o sexo (M — masculino; F — feminino) e o número de horas/
aula dadas mensalmente pelos professores de uma universidade, sabendo-se que cada hora/aula vale
R$ 30,00. Emita uma listagem contendo o código, o salário bruto e o salário líquido (levando em
consideração os descontos explicados a seguir) de todos os professores. Mostre também a média dos
salários líquidos dos professores do sexo masculino e a média dos salários líquidos dos professores do
sexo feminino. Considere:
    || desconto para homens, 10%, e, para mulheres, 5%;
    || as informações terminarão quando for lido o código = 99999. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    char sexo;
    int quant_horas, sair, contM, contF;

    float sal_bruto, sal_liquidoM, sal_liquidoF, total_M, total_F;
    float media_masculino, media_feminino, media_total;

    total_F = 0;
    total_M = 0;

    contF = 0;
    contM = 0;

    printf("CALCULO DE SALÁRIO \n\n");

    do {
        printf("Digite seu sexo (M. Masculino | F. Feminino): ");
        scanf(" %c", &sexo);
        printf("\n");
        printf("Digite o número de horas/aula mensalsamente:  ");
        scanf("%d", &quant_horas);
        sal_bruto = quant_horas * 30;

        switch (sexo) {
            case 'M':
                sal_liquidoM = sal_bruto - (sal_bruto * 0.1);
                printf("Salário bruto: R$ %.2f. \n", sal_bruto);
                printf("Salário liquido: R$ %.2f. \n\n", sal_liquidoM);
                contM++;
                break;

            case 'F':
                sal_liquidoF = sal_bruto - (sal_bruto * 0.05);
                printf("Salário bruto: R$ %.2f. \n", sal_bruto);
                printf("Salário liquido: R$ %.2f. \n\n", sal_liquidoF);
                contF++;
                break;

        }

        total_F = total_F + sal_liquidoF;
        total_M = total_M + sal_liquidoM;

        printf("Digite qualquer número para continuar ou 999 para encerrar: ");
        scanf("%d", &sair);
        printf("------------------------------------------------------\n\n");
    } while (sair != 999);

    //Condicionais sexo masculino
    if (contM == 0) {
        printf("Nenhum professor do sexo masculino. \n");
    } else {
        media_masculino = total_M / contM;
        printf("Media dos salários dos professores masculinos: R$ %.2f. \n", media_masculino);
    }

    //Condicionais sexo feminino
    if (contF == 0) {
        printf("Nenhum professora do sexo feminino. \n");
    } else {
        media_feminino = total_F / contF;
        printf("Media dos salários dos professores feminino: R$ %.2f. \n\n", media_feminino);
    }


    return (EXIT_SUCCESS);
}