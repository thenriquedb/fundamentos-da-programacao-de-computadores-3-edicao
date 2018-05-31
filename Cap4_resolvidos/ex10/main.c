
/* Fundamentos da Programação de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

8) Faça um programa que determine a data cronologicamente maior entre duas datas fornecidas pelo
usuário. Cada data deve ser composta por três valores inteiros, em que o primeiro representa o dia, o
segundo, o mês e o terceiro, o ano. */

#include <stdio.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    int dia,mes,ano;
    int dia2,mes2,ano2;

    printf("Comparador de datas \n\n");

    printf("Primeira data \n");
    printf("    Digite o dia (1 a 31): ");
    scanf("%d",&dia);
    printf("    Digite o mês (1 a 12): ");
    scanf("%d",&mes);
    printf("    Digite o ano: ");
    scanf("%d",&ano);

    printf("\n");

    printf("Segunda data \n");
    printf("    Digite o dia (1 a 31): ");
    scanf("%d",&dia2);
    printf("    Digite o mês (1 a 12): ");
    scanf("%d",&mes2);
    printf("    Digite o ano: ");
    scanf("%d",&ano2);

//Inicio compartivo de anos
    if (ano > ano2){
        printf("\n\n");
        printf("A maior data é %d/%d/%d \n",dia,mes,ano);
    }
    else if (ano2 > ano) {
        printf("\n\n");
        printf("A maior data é %d/%d/%d \n",dia2,mes2,ano2);
        printf("\n\n");
    }
//

//Inicio compartivo dos meses
    if (mes > mes2) {
        if (ano > ano2) {
            printf("\n\n");
            printf("A maior data é %d/%d/%d",dia,mes,ano);
            printf("\n\n");
        }
        else if( ano2 > ano); {
            printf("\n\n");
            printf("A maior data é %d/%d/%d",dia2,mes,ano2);
            printf("\n\n");
        }
    }

    else if (mes2 > mes) {
        if (ano > ano2) {
            printf("\n\n");
            printf("A maior data é %d/%d/%d",dia,mes,ano);
            printf("\n\n");

        }
        else if (ano2 > ano); {
            printf("\n\n");
            printf("A maior data é %d/%d/%d",dia2,mes2,ano2);
            printf("\n\n");

        }
    }
 //
 //Inicio compartivo dos dias
    if (dia > dia2) {
        if (ano > ano2) {
            printf("\n\n");
            printf("A maior data é %d/%d/%d",dia,mes,ano);
            printf("\n\n");
        }
        else if( ano2 > ano); {
            printf("\n\n");
            printf("A maior data é %d/%d/%d",dia,mes,ano2);
            printf("\n\n");
        }
    }

    else if (dia2 > dia) {
        if (ano > ano2) {
            printf("\n\n");
            printf("A maior data é %d/%d/%d",dia2,mes,ano);
            printf("\n\n");

        }
        else if (ano2 > ano); {
            printf("\n\n");
            printf("A maior data é %d/%d/%d",dia2,mes2,ano2);
            printf("\n\n");

        }
    }
system("pause");
return 0;
}
