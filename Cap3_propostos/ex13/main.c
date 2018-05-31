/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

13. Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário. */

#include <stdio.h>
int main(void)

{
int numero, cont=0;

printf("TABUADA \n \n");
    printf("Digite um numero: ");
    scanf("%d",&numero);

    for (cont=0; cont<=10; cont++) // Nao pode utilizar ; apos o for,pq ele ira exibir apenas o ultimo valor do cont
        {
        printf("%d x %d = %d \n",numero,cont,numero*cont);
        }
return 0;
}
