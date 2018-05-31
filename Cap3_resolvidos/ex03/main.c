/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

    2) Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.
*/

#include <stdio.h>

int main ()

{
float n1;
float n2;
float n3;
float soma1=0,soma2=0,soma3=0,total1=0,total2=0,total3=0,total4=0;
float media=0;

float p1;
float p2;
float p3;

printf("CALCULO DE MEDIA PONDERADA \n");
printf("\n \n");

printf("Digite a primeira nota: ");
    scanf("%f%*c",&n1);
    printf("Digite seu peso: ");
    scanf("%d",&p1);

printf("\n \n");

printf("Digite a segunda nota: ");
    scanf("%f",&n2);
    printf("Digite seu peso: ");
    scanf("%d%*c",&p2);

printf("\n \n");

printf("Digite a terceira nota: ");
    scanf("%f",&n3);
    printf("Digite seu peso: ");
    scanf("%d",&p3);

total1=n1*p1;
total2=p2*n2;
total3=p3*n3;
total4=total1+total2+total3+total4;
media=total4 / (p1+p2+p3);


printf("\n \n");

printf("\n \n");
printf("A media ponderada das nota e: %.2f",media);
return 0;
}
