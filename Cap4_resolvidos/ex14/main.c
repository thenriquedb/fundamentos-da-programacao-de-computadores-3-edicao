/* Fundamentos da Programação de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

13) Faça um programa que receba o salário inicial de um funcionário, calcule e mostre o novo salário, acrescido de bonificação e de auxílio escola.  Bonificação

Ate 500 - 5%
Acima de 500 - 12%

Auxilio escola
    Ate 600: 150 reais
    acima: 100 reais
*/

#include <stdio.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    float sal,aumento;

    printf("Calculo de novo salário com base em bonificação e auxílio escola \n\n");
    printf("Digite o seu salário: ");
        scanf("%f",&sal);

    if (sal < 500) {
        printf("    Você tem direito a 5%% de aumento. \n");
        printf("    Seu novo salário será de %.2f",sal*1.05);
        printf("\n\n");
    }

    else if (sal>=500 && sal<=1200 && sal<600){
        printf("    Você tem direito a 12%% de aumento e ao auxílio escola de R$ 150,00.\n");
        printf("    Seu novo salário será de %.2f",sal*1.12+150);
        printf("\n\n");

    }

    else if (sal>=500 && sal<=1200){
        printf("    Você tem direito a 12%% de aumento.\n");
        printf("    Seu novo salário será de %.2f",sal*1.12);
        printf("\n\n");

    }

    else if (sal>1200 && sal>600){
        printf("    Você tem direito a 12%% de aumento e ao auxílio escola de R$ 100,00.\n");
        printf("    Seu novo salário será de %.2f",sal*1.12+100);
        printf("\n\n");

    }
}
