/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

16) Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa */

#include <stdio.h>
#include <math.h>

int main()
{
float cat1,cat2,hip;

printf("TEOREMA DE PITAGORAS \n \n");
    printf("Digite o valor do primeiro cateto: ");
        scanf("%f",&cat1);
    printf("Digite o valor do segundo cateto: ");
        scanf("%f",&cat2);
// Teorema de PiTAGORAS
hip=pow(cat1,2)+ pow(cat2,2);
hip= sqrt(hip);

printf("O valor da hipotenusa e de %.2f",hip);
}
