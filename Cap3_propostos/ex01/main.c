/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

1) Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo
segundo.*/

#include<stdio.h>
int main()
{
int n1,n2,soma;

printf("SOMA DE DOIS NUMEROS \n\n");
printf("Digite um numero: ");
    scanf("%d",&n1);
printf("Digite umnumero: ");
    scanf("%d",&n2);

soma=n1+n2;

printf("A soma dos dois numeros e: %d",soma);
}
