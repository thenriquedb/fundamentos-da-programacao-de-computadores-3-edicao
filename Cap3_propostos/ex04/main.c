/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

4) Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando
peso 2 para a primeira e peso 3 para a segunda. */

#include<stdio.h>
int main()

{
float n1,n2,med;
printf("CALCULO DE MEDIA PONDERADA \n\n");

printf("Digite um numero: ");
    scanf("%f",&n1);
printf("Digite um numero: ");
    scanf("%f",&n2);

med=(n1*2+n2*3)/ 5;

printf("A media ponderada de %.2f e %.2f e %.2f",n1,n2,med);
}
