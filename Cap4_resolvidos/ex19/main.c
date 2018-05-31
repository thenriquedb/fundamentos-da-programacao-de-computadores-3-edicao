
/* Fundamentos da Programação de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

19) F. Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique
e mostre a classificação dessa pessoa. */


#include <stdio.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    float peso,altura;

    printf("Classificação de acordo com o peso e a altura \n\n ");
    printf("Digite seu peso: ");
    scanf("%f",&peso);
    printf("Digite sua altura: ");
    scanf("%f",&altura);

    if (altura < 1.20) {
        if (peso<60) {
            printf("Sua classificação é A \n\n");
        }
        else if (peso >=60 && peso <=90) {
            printf("Sua classificação é D \n\n");
        }
        else if (peso >90) {
            printf("Sua classificação é G \n\n");
        }
    }

    else if (altura >= 1.20 && altura<=1.70) {
        if (peso<60) {
            printf("Sua classificação é B \n\n");
        }
        else if (peso >=60 && peso <=90) {
            printf("Sua classificação é E \n\n");
        }
        else if (peso >90) {
            printf("Sua classificação é H \n\n");
        }
    }

    else if (altura >= 1.70) {
        if (peso<60) {
            printf("Sua classificação é C \n\n");
        }
        else if (peso >=60 && peso <=90) {
            printf("Sua classificação é F \n\n");
        }
        else if (peso >90) {
            printf("Sua classificação é I \n\n");
        }
    }
system("pause");
return 0;
}

