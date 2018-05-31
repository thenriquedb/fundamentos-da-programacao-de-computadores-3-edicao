/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

23) Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida doterceiro ângulo. Sabe-se que a soma dos ângulos de um
triângulo é 180 graus. */

#include <stdio.h>
int main()
{
    float ang1,ang2,ang3;
    printf("CALCULO DO TERCEIRO ANGULO DE UM TRIANGULO \n\n");
    printf("Digite o valor do primeiro angulo: ");
        scanf("%f",&ang1);
    printf("Digite o valor do segundo angulo: ");
        scanf("%f",&ang2);
ang3= 180 -(ang1+ang2);

printf("O terceiro angulo vale %.1f graus",ang3);
}
