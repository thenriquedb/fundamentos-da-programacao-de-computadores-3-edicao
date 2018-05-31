/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

17) Faça um programa que receba o raio, calcule e mostre:
a) o comprimento de uma esfera; sabe-se que C= 2*pi*R
b) a área de uma esfera; sabe-se que A=pi*R^2
c) o volume de uma esfera; sabe-se que V= 3/4 *pi*R^3  */

#include <stdio.h>
#include <math.h>
int main()

{
    float raio,comprimento,area,volume;
printf("CALCULO DE AREA,COMPRIMENTO E VOLUME DE UMA ESFERA \n \n");

printf("Digite o raio da esfera: ");
    scanf("%f",&raio);

// Calculos
comprimento=(2*3.14)*raio;
area=3.14 * pow(raio,2);
volume=(4*3.14 * pow(raio,3) ) / 4;

printf("O comrpimento da esfera e %.2f \n",comprimento);
printf("A area da circuferencia e %.2f \n",area);
printf("O volume da esfera e %.2f",volume);

}


