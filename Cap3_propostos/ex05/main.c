/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

5) Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
que este sofreu um desconto de 10%.*/

#include<stdio.h>
int main()
{
float preco,desconto,n_preco;

printf("CALCULO DE DESCONTO \n \n");

printf("Digite o valor do produto: ");
    scanf("%f",&preco);

desconto=preco * 0.1;
n_preco= preco - desconto;

printf("\n \n");
printf("O valor do produto com 10%% de desconto sera de %.2f reais",n_preco);


}
