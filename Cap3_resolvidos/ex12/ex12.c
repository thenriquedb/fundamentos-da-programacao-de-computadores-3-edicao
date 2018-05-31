/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro. */

#include <stdio.h>
#include <math.h>
int main()
{

int n1,n2,potencia;

    printf("Digite um numero: ");
        scanf("%d",&n1);
    printf("Digite um numero: ");
        scanf("%d",&n2);

    potencia=pow(n1,n2);

    printf("O resultado de %d elevado a %d e: %d",n1,2,potencia);
}
