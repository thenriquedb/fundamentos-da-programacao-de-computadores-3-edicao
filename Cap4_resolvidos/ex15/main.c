/* Fundamentos da Programação de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

15) Faça um programa que receba o valor do salário mínimo, o número de horas trabalhadas, o número de dependentes do funcionário e
a quantidade de horas extras trabalhadas. Calcule e mostre o salário a receber do funcionário de acordo com as regras a seguir:

    * O valor da hora trabalhada é igual a 1/5 do salário mínimo.
    * O salário do mês é igual ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada.
    * Para cada dependente, acrescentar R$ 32,00.
    * Para cada hora extra trabalhada, calcular o valor da hora trabalhada acrescida de 50%.
    * O salário bruto é igual ao salário do mês mais o valor dos dependentes mais o valor das horas extras.
    * Calcular o valor do imposto de renda retido na fonte de acordo com a tabela a seguir:

        IRRF        SALÁRIO BRUTO
        Isento      Inferior a R$200,00
        10%         De R$200,00 até R$500,00
        20%         Superior a R$500,00

    * O salário líquido é igual ao salário bruto menos IRRF.
    * A gratificação é de acordo com a tabela a seguir:

        SALÁRIO LÍQUIDO             GRATIFICAÇÃO
        AtéR$350,00                 R$100,00
        Superior a R$ 350,00        R$ 50,00

    * O salário a receber do funcionário é igual ao salário líquido mais a gratificação.
*/

#include <stdio.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.

    int dependentes,hr_extra,hr_trab;;
    float sal_min,sal_mes,sal_bruto,sal_liq,imposto;
    float vlr_hrextra,vlr_hrtrabalhada,total_hrextra;

    printf("Calculo do salário total de um funcionário \n\n");
    printf("Digite o valor do salário mínimo: ");
        scanf("%f",&sal_min);
    printf("Digite o número de horas trabalhadas: ");
        scanf("%d",&hr_trab);
    printf("Digite o número de dependentes do funcionário: ");
        scanf("%d",&dependentes);
    printf("Digite o numero de horas extras trabalhadas: ");
        scanf("%d",&hr_extra);

//Calculos segundo as regras propostas
    vlr_hrtrabalhada = sal_min / 5;
    sal_mes = hr_trab * vlr_hrtrabalhada;;
    vlr_hrextra = vlr_hrtrabalhada * 1.5;
    total_hrextra = vlr_hrextra * hr_extra;
    sal_bruto = total_hrextra + sal_mes;
    sal_bruto = sal_bruto + (32*dependentes);
//Fim dos calculos
    printf("\n\n");

//Calculo dos impostos
    if (sal_bruto >=200 && sal_bruto<=500) {
        imposto = sal_bruto * 0.1;
        sal_liq = sal_bruto - imposto;
}

   else if (sal_bruto >500) {
        imposto = sal_bruto * 0.2;
        sal_liq = sal_bruto - imposto;
}

//Calculo de bonificação
    if (sal_liq<350) {
        sal_liq = sal_liq + 100;
        printf("O valor total de seu salário é de %.2f reais. \n",sal_liq);
    }

    else if(sal_liq >= 350) {
        sal_liq = sal_liq + 50;
        printf("O valor total de seu salário é de %.2f reais. \n",sal_liq);
    }
system("pause");
return 0;
}
