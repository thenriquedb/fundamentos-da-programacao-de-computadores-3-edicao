
/* Fundamentos da Programação de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

7) Faça um programa que mostre a data e a hora do sistema nos seguintes formatos: DD/MM/AAAA – mês por extenso e hora:minuto. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese");
    int dia,mes,ano,hr,min;

    printf("Hora e data \n\n");
    printf("Digite o dia: ");
    scanf("%d",&dia);
    printf("Digite o mês: ");
    scanf("%d",&mes);
    printf("Digite o ano: ");
    scanf("%d",&ano);
    printf("\n \n");
    printf("Digite a hora: ");
    scanf("%d",&hr);
    printf("Digite os minutos: ");
    scanf("%d",&min);
    printf("\n\n");

    switch (mes)
    {
    case 1:
        printf("%d / JANEIRO / %d",dia,ano);
        break;

    case 2:
        printf("%d / FEVEREIRO / %d",dia,ano);
        break;

    case 3:
        printf("%d / MARÇO / %d",dia,ano);
        break;

    case 4:
        printf("%d / ABRIL / %d",dia,ano);
        break;

    case 5:
        printf("%d / MAIO / %d",dia,ano);
        break;

    case 6:
        printf("%d / JUNHO / %d",dia,ano);
        break;

    case 7:
        printf("%d / JULHO / %d",dia,ano);
        break;

    case 8:
        printf("%d / AGOSTO / %d",dia,ano);
        break;

    case 9:
        printf("%d / SETEMBRO / %d",dia,ano);
        break;

    case 10:
        printf("%d / OUTUBRO / %d",dia,ano);
        break;

    case 11:
        printf("%d / NOVEMBRO / %d",dia,ano);
        break;

    case 12:
        printf("%d / DEZEMBRO / %d",dia,ano);
        break;

    default:
    {
        printf("Opção inválida");
    }
    }
    printf("\n \n %d : %d \n \n",hr,min);

}
