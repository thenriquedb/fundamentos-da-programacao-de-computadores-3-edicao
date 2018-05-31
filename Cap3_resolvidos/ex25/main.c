/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

25) Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo.
Esse programa deverá calcular e mostrar a quantidade de convites que devem ser vendidos para que, pelo menos, o custo do espetáculo seja alcançado.*/
#include <stdio.h>
int main()

{
float quantidade,custo,convite;
printf("PRORGAMA PARA CALCULAR A QUANTIDADE DE CONVITES A SEREM VENDIDOS PARA COBRIR O CUSTO DE UMA PEÇA DE TEATRO \n \n");

printf("Digite o custo total de produção: ");
        scanf("%f",&custo);
printf("Digite o valor do convite: ");
    scanf("%f",&convite);

// Calculos
quantidade=custo/convite;

printf("Sera necessario vender no minimo %.0f convites para cobrir o custo de producao do teatro.",quantidade);
}
