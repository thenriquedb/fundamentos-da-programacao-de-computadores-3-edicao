/* Fundamentos da Programação de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

13) Faça um programa que apresente o menu a seguir, permita ao usuário escolher a opção desejada, re- ceba os dados necessários para executar a
operação e mostre o resultado. Verifique a possibilidade de opção inválida e não se preocupe com restrições, como salário negativo.

Menu de opções:
1. Imposto
2. Novo salário
3. Classificação  */

#include <stdio.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    int opt;
    float sal,imposto;

    printf("CODIGO     OPÇÕES \n");
    printf("  1        Impostos \n");
    printf("  2        Novo salário \n");
    printf("  3        Classificação \n\n");

    printf("Digite a opção desejada: ");
        scanf("%d",&opt);
    printf("\n\n");

    switch (opt) {
    //Se opção 1 for selecionada
        case 1:
            printf("Impostos \n\n");
            printf("    Digite o valor de seu salário: ");
            scanf("%f",&sal);
                if (sal < 500) {
                    imposto = sal  * 0.05;
                    printf("    Você pagará %.2f reais de impostos.",imposto);
                    printf("\n\n");
                }

                if (sal>=500 && sal <=800) {
                    imposto = sal  * 0.1;
                    printf("    Você pagará %.2f reais de impostos.",imposto);
                    printf("\n\n");
                }

                if (sal>850) {
                    imposto = sal  * 0.15;
                    printf("    Você pagará %.2f reais de impostos.",imposto);
                    printf("\n\n");
                }
        break;

    //Se opção 2 for selecionada
        case 2:
            printf(" Aumento de salário \n\n");
            printf("    Digite o valor de seu salário: ");
            scanf("%f",&sal);

                if (sal>1500) {
                    printf("    O Seu aumento será de R$ 25,00. \n");
                    printf("    Seu novo salário será de %.2f reais",sal+25);
                    printf("\n\n");
                }

                else if (sal>=750 && sal<=1500) {
                    printf("    O Seu aumento será de R$ 50,00. \n");
                    printf("    Seu novo salário será de %.2f reais",sal+50);
                    printf("\n\n");
                }

                 else if (sal>=450 && sal<750) {
                    printf("    O Seu aumento será de R$ 75,00. \n");
                    printf("    Seu novo salário será de %.2f reais",sal+75);
                    printf("\n\n");
                }

                 else if (sal<450) {
                    printf("    O Seu aumento será de R$ 100,00. \n");
                    printf("    Seu novo salário será de %.2f reais",sal+100);
                    printf("\n\n");
                }
        break;

//Se opção 3 for selecionada
        case 3:
            printf("Classificação do salário \n\n");
            printf("    Digite o valor de seu salário: ");
            scanf("%f",&sal);
                if (sal <= 700) {
                    printf("    Mal remunerado.");
                    printf("\n\n");
                }

                else if (sal>700) {
                    printf("    Bem remunerado.");
                    printf("\n\n");
                }
        break;

//Se não for digitada nenhuma das opções possiveis
        default: {
        printf("Opção inválida");
        printf("\n\n");
        }
    }
}
