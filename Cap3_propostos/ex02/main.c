/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

2) Faça um programa que receba três números, calcule e mostre a multiplicação desses números.*/

#include<stdio.h>
int main()
{
int n1,n2,n3,multiplicacao;

printf("MULTIPLICACAO DE TRES NUMEROS \n\n");

printf("Digite um numero: ");
    scanf("%d",&n1);
printf("Digite umnumero: ");
    scanf("%d",&n2);
printf("Digite umnumero: ");
    scanf("%d",&n3);

multiplicacao=n1*n2*n3;

printf("A soma dos dois numeros e: %d",multiplicacao);
}

