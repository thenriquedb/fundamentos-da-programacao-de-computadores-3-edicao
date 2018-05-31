/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

23) Faça um programa que receba um número real, encontre e mostre:
a) a parte inteira desse número;
b) a parte fracionária desse número;
c) o arredondamento desse número. */

#include <stdio.h>
#include <math.h>
int main()

{
float numero,inteira,fracao,arred;

printf("Digite um numero real: ");
    scanf("%f%*c",&numero);

 	printf("Parte Inteira : %d \n",(int) numero);
   	printf("Parte Decimal : %f", numero - ((int)numero));
}
