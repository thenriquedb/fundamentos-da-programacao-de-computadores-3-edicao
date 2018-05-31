/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

10) Faça um programa que calcule e mostre a área de um quadrado S. abe-se que: A= lado * lado.*/

#include <stdio.h>
#include <math.h>
int main()
{
    float lado,area;

printf("CALCULO DA AREA DE UM QUADRADO \n \n");

printf("Digite o valor do lado: ");
    scanf("%f",&lado);

area=pow(lado,2);

printf("A area do quadrado e de %.2f",area);
}
