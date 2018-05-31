/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

8) Faça um programa que calcule e mostre a área de um trapézio.
Sabe-se que: A = ((base maior + base menor) * altura)/2 */

#include<stdio.h>
int main()
{
    float b_maior,b_menor,altura,area;

printf("AREA DE UM TRAPEZIO \n \n");

printf("Digite a base maior: ");
    scanf("%f",&b_maior);
printf("Digite a base menor: ");
    scanf("%f",&b_menor);
printf("Digite a altura: ");
    scanf("%f",&altura);

area=(b_maior+b_menor)*altura / 2;
printf("A area do trapezio e %.2f",area);

}
