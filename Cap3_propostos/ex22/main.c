/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

22) Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número
de diagonais desse polígono. Sabe-se que ND=N * (N−3)/2, em que N é o número de lados dopolígono */

#include <stdio.h>
int main()
{
    float lado,diagonais;
    printf("CALCULO DE DIAGONAIS \n\n");

    printf("Digite o numero de lados do poligono: ");
        scanf("%f",&lado);
// Calculos
diagonais=(lado *lado-3) / 2;

printf("Um poligono de %.0f lados possui %.2f diagonais",lado,diagonais);
}
