/* Fundamentos da Programação de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

11) Faça um programa que receba o código correspondente ao cargo de um funcionário e seu salário atual e mostre o cargo,
o valor do aumento e seu novo salário. Os cargos estão na tabela a seguir.  */

#include <stdio.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    int opt;
    float sal,aumento,n_sal;

    printf("Aumento de salário de acordo com o cargo \n\n");
    printf("CODIGO        CARGO \n");
    printf("  1        Escriturário\n");
    printf("  2        Secretário\n");
    printf("  3        Caixa\n");
    printf("  4        Gerente\n");
    printf("  5        Diretor\n\n");

    printf("Digite o codigo referente ao seu cargo: ");
        scanf("%d",&opt);
    printf("------------------------------------------------------\n");

    switch (opt) { //Switch é usado para simplificar os if.
    case 1:
        printf("Cargo de escriturário \n\n");
        printf("Digite seu salário: ");
        scanf("%f",&sal);

        aumento = sal * 0.5;
        n_sal = sal + aumento;

        printf("    O seu aumento será de %.2f reais \n",aumento);
        printf("    Seu novo salário será de %.2f reais \n\n",n_sal);
        printf("------------------------------------------------------\n");
    break;

    case 2:
        printf("Cargo de Secretário \n\n");
        printf("Digite seu salário: ");
        scanf("%f",&sal);

        aumento = sal * 0.35;
        n_sal = sal + aumento;

        printf("    O seu aumento será de %.2f reais \n",aumento);
        printf("    Seu novo salário será de %.2f reais \n\n",n_sal);
        printf("------------------------------------------------------\n");
    break;

    case 3:
        printf("Cargo de Caixa \n\n");
        printf("Digite seu salário: ");
        scanf("%f",&sal);

        aumento = sal * 0.2;
        n_sal = sal + aumento;

        printf("    O seu aumento será de %.2f reais \n",aumento);
        printf("    Seu novo salário será de %.2f reais \n\n",n_sal);
        printf("------------------------------------------------------\n");
    break;

    case 4:
        printf("Cargo de Gerente \n\n");
        printf("Digite seu salário: ");
        scanf("%f",&sal);

        aumento = sal * 0.1;
        n_sal = sal + aumento;

        printf("    O seu aumento será de %.2f reais \n",aumento);
        printf("    Seu novo salário será de %.2f reais \n\n",n_sal);
        printf("------------------------------------------------------\n");
    break;

    case 5:
        printf("Cargo de Secretário \n\n");
        printf("Não determinado \n \n");
        printf("------------------------------------------------------\n");
    break;

    default:
        printf("------------------------------------------------------\n");
        printf("Codigo inválido \n\n");
        printf("------------------------------------------------------\n");
    break;
    }
system("pause");
return 0;
}
