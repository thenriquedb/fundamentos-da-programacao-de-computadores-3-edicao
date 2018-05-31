/* Fundamentos da Programação de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

17) Faça um programa para resolver equações do 2º grau. */

#include <stdio.h>
#include <math.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    float a,b,c,raizes,x1,x2,delta;

    printf("Calculo de equações de segundo grau \n\n");
    printf("Digite o valor de A: ");
    scanf("%f",&a);
    printf("Digite o valor de B: ");
    scanf("%f",&b);
    printf("Digite o valor de C: ");
    scanf("%f",&c);
    printf("\n");

    if (delta > 0)
    {
        printf("Calculo das raizes \n");


        //Calculo do delta.
        delta = pow(b,2) - 4*a*c;

        x1 = ((-b + sqrt(delta)) / (2*a));
        x2 = ((-b - sqrt(delta)) / (2*a));

        printf("    X¹= %.2f \n",x1);
        printf("    X²= %.2f \n\n",x2);
    }

    else if (delta == 0)
    {
        //Calculo do delta.
        delta = pow(b,2) - 4*a*c;

        x1 = ((-b + sqrt(delta)) / (2*a));

        printf("    X¹= %.2f \n",x1);

    }

    else if (delta <0) {
         printf("Impossivel calcular. \n");
        printf("    Delta igual a %.2f. \n\n",delta);

    }

    system("pause");
    return 0;
}
