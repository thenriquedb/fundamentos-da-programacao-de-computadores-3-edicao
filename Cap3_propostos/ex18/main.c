/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em
Fahrenheit. Sabe-se que F=180*(C+32)/100.  */

#include <stdio.h>
int main()
{
float celsius,fahr;
    printf("CONVERSAO DE CELSIUS PARA FAHRENHEIT \n \n");

    printf("Digite a temperatura em celsius: ");
        scanf("%f",&celsius);

fahr=1.8 * celsius +32; // Formula para converter as unidades
printf("%.2f C convertidos a fahrenheit equiave a %.2f",celsius,fahr);
}


