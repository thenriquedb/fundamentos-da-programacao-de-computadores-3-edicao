
/* Fundamentos da Programação de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

7) Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e os dados neces- sários para executar cada operação.

Menu de opções:
  1. Somar doisnúmeros.
  2. Raiz quadrada deum número.

Digite a opção */

#include <stdio.h>
#include <math.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    int opcao;
    float num1,num2,soma,raiz;

    printf("Calculadora simples \n\n");
    printf("MENU DE OPÇÕES \n");
    printf("    1. Somar dois números. \n");
    printf("    2. Raiz quadrada de um número. \n\n");
    printf("Digite a opção desejada. ");
    scanf("%d",&opcao);

    if (opcao== 1)
    {
        printf("\n");
        printf("SOMA DE DOIS NÚMEROS \n\n");
        printf("Digite um número: ");
        scanf("%f",&num1);
        printf("Digite um número: ");
        scanf("%f",&num2);
        soma = num1 + num2;
        printf("\n");
        printf("    %.2f + %.2f = %.2f \n\n",num1,num2,soma);
    }
    else if (opcao == 2)
    {
        printf("\n");
        printf("RAIZ QUADRADADA DE UM NÚMERO \n\n");
        printf("Digite um número: ");
        scanf("%f",&num1);
        raiz = sqrt(num1);
        printf("    A raiz quadrada de %.2f é %.2f \n\n",num1,raiz);
    }
    else
    {
        printf("\n\n");
        printf("Comando inválido.");
        printf("\n\n");
    }

    system("pause");
    return 0;
}
