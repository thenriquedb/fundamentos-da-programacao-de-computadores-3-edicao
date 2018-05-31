/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

    2) Faça um programa que receba três notas, calcule e mostre a média aritmética.
*/
#include<stdio.h>
int main()

{
int n1;
int n2;
int n3;
int soma;
int media;

printf("Digite a primeira nota: \n");
    scanf("%d%*c",&n1);
printf("Digite a segunda nota: \n");
    scanf("%d%*c",&n2);
printf("Digite a terceira nota: \n");
    scanf("%d%*c",&n3);

soma=n1+n2+n3;
media=soma/3;

printf("A media das notas sera de: %f",media);
return 0;

}
