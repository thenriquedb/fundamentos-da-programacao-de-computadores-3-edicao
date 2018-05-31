/*
Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor a receber. Sabe-se que este é composto pelo salário bruto acrescido de gratificação e descontado
o imposto de 7% sobre o salário.
 * 
SALÁRIO                         GRATIFICAÇÃO
Até R$ 350,00                   R$ 100,00
R$ 350,00 R$ 600,00             R$ 75,00
R$ 600,00 R$ 900,00             R$ 50,00
Acima de R$ 900,00              R$ 35,00
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float sal, n_sal, imposto;

    printf("Calculo de salário \n\n");
    printf("Digite o valor de seu salário bruto: ");
    scanf("%f", &sal);

    if (sal <= 350) {
        n_sal = (sal + 100);
        imposto = n_sal * 0.07;
        n_sal = n_sal - imposto;
        printf("Seu salário liquido será de R$ %.2f.", n_sal);

    } else if (sal > 350 && sal < 600) {
        n_sal = (sal + 75);
        imposto = n_sal * 0.07;
        n_sal = n_sal - imposto;
        printf("Seu salário liquido será de R$ %.2f.", n_sal);

    } else if (sal >= 600 && sal <= 900) {
        n_sal = (sal + 50);
        imposto = n_sal * 0.07;
        n_sal = n_sal - imposto;
        printf("Seu salário liquido será de R$ %.2f.", n_sal);

    } else if (sal > 900) {
        n_sal = (sal + 35);
        imposto = n_sal * 0.07;
        n_sal = n_sal - imposto;
        printf("Seu salário liquido será de R$ %.2f.", n_sal);
    }
    printf("\n \n");
    return (EXIT_SUCCESS);
}

