/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

3) Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
com validações.*/

#include<stdio.h>
int main()

{
    float n1,n2,div;
printf("DIVISÃO POR 2 NUMEROS \n\n");

printf("Digite um numero: ");
    scanf("%f",&n1);
printf("Digite um numero diferente de 0: ");
    scanf("%f",&n2);

div=n1/n2;

printf("A divisão de %.2f por %.2f é %.2f",n1,n2,div);
}
