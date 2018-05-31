/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

8) Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas. */

#include<stdio.h>
int main()
{
    float kg,grama;
printf("Digite seu peso em quilos: ");
    scanf("%f",&kg);

grama=kg*1000;

printf("Seu peso em gramas e de %.2f gramas.",grama);
}
