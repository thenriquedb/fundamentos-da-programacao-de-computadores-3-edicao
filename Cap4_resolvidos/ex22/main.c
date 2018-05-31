/* Fundamentos da Programação de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

22)
*/

#include <stdio.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"Portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    float salario,tempo,gratificacao,imposto;

    printf("Calculo de salário \n\n");
    printf("Digite seu salário: ");
    scanf("%f",&salario);
    printf("Digite seu tempo de serviço: ");
    scanf("%f",&tempo);
    printf("\n\n");

// Para facilitar a criação do codigo decidi trabalhar com margens de erro.

//1º Bloco
    if (salario < 500)
        if (salario < 200) {
            printf("    Você está insento de impostos. \n");
            printf("    Sua classificação é A \n");

        if (tempo > 0 && tempo <3)
        {
            printf("    Você reberá R$ 23,00 de gratificação. \n");
            printf("    Seu salário líquido será de R$ %.2f.",salario + 23);
            printf("\n\n");
        }

        else if (tempo >=3 && tempo <6)
        {
            printf("    Você reberá R$ 35,00 de gratificação. \n");
            printf("    Seu salário líquido será de R$ %.2f.",salario + 33);
            printf("\n\n");
        }

        else if (tempo >= 6)
        {
            printf("    Você reberá R$ 33,00 de gratificação. \n");
            printf("    Seu salário líquido será de R$ %.2f.",salario + 33);
            printf("\n\n");
        }

        if (salario >=200 && salario <450)
        {
            printf("    Sua classificação é B \n");
        }
        if (tempo > 0 && tempo <3)
        {
            imposto = salario * 0.03;
            printf("    Você reberá R$ 23,00 de gratificação. \n");
            printf("    Você pagará R$ %.2f de impostos. \n",imposto);
            printf("    Seu salário líquido será de R$ %.2f. \n",salario - imposto + 23);
            printf("\n\n");
        }

        else if (tempo >=3 && tempo <6)
        {
            imposto = salario * 0.03;
            printf("    Você reberá R$ 35,00 de gratificação. \n");
            printf("    Você pagará R$ %.2f de impostos. \n",imposto);
            printf("    Seu salário líquido será de R$ %.2f. \n",salario - imposto + 23);
            printf("\n\n");
        }

        else if (tempo >= 6);
        {
            imposto = salario * 0.03;
            printf("    Você reberá R$ 33,00 de gratificação. \n");
            printf("    Você pagará R$ %.2f de impostos. \n",imposto);
            printf("    Seu salário líquido será de R$ %.2f. \n",salario - imposto + 23);
            printf("\n\n");
        }
        }

    if (salario >=450 && salario<500)
    {
        printf("    Sua classificação é B \n");

    if (tempo > 0 && tempo <3)
    {
        imposto = salario * 0.03;
        printf("    Você reberá R$ 23,00 de gratificação. \n");
        printf("    Você pagará R$ %.2f de impostos. \n",imposto);
        printf("    Seu salário líquido será de R$ %.2f. \n",salario - imposto + 23);
        printf("\n\n");
    }

    else if (tempo >=3 && tempo <6)
    {
        imposto = salario * 0.03;
        printf("    Você reberá R$ 35,00 de gratificação. \n");
        printf("    Você pagará R$ %.2f de impostos. \n",imposto);
        printf("    Seu salário líquido será de R$ %.2f. \n",salario - imposto + 23);
        printf("\n\n");
    }

    else if (tempo >= 6)
    {
        imposto = salario * 0.03;
        printf("    Você reberá R$ 33,00 de gratificação. \n");
        printf("    Você pagará R$ %.2f de impostos. \n",imposto);
        printf("    Seu salário líquido será de R$ %.2f. \n",salario - imposto + 23);
        printf("\n\n");
    }
}

if (salario >= 500 && salario < 700);
{
    if (salario >=500 && salario < 600)
    {
        printf("    Sua classificação é B \n");
    }
    else
    {
        printf("    Sua classificação é C \n");
    }

    if (tempo > 0 && tempo <3)
    {
        imposto = salario * 0.08;
        printf("    Você reberá R$ 20,00 de gratificação. \n");
        printf("    Você pagará R$ %.2f de impostos. \n",imposto);
        printf("    Seu salário líquido será de R$ %.2f. \n",salario - imposto + 20);
        printf("\n\n");
    }

    else if (tempo >= 3)
    {
        imposto = salario * 0.08;
        printf("    Você reberá R$ 30,00 de gratificação. \n");
        printf("    Você pagará R$ %.2f de impostos. \n",imposto);
        printf("    Seu salário líquido será de R$ %.2f. \n",salario - imposto + 30);
        printf("\n\n");
    }
}
//Fim do 4º bloco

//inicio do 5º bloco
if (salario >= 700);
{
    printf("    Sua classificação é C \n");
    if (tempo > 0 && tempo <3)
    {
        imposto = salario * 0.12;
        printf("    Você reberá R$ 20,00 de gratificação. \n");
        printf("    Você pagará R$ %.2f de impostos. \n",imposto);
        printf("    Seu salário líquido será de R$ %.2f. \n",salario - imposto + 20);
        printf("\n\n");
    }

    else if (tempo >= 3)
    {
        imposto = salario * 0.12;
        printf("    Você reberá R$ 30,00 de gratificação. \n");
        printf("    Você pagará R$ %.2f de impostos. \n",imposto);
        printf("    Seu salário líquido será de R$ %.2f. \n",salario - imposto + 30);
        printf("\n\n");
    }
}
}







