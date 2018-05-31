/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

14) Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a)a idade dessa pessoa em anos;
 b)a idade dessa pessoa em meses;
c)a idade dessa pessoa em d
ias;
d)a idade dessa pessoa em semanas. */

#include <stdio.h>
int main()

{
    int d_nascimento,ano_atual,i_anos,i_meses,i_dias,i_sem;

printf("CALCULO DE IDADE \n \n");

printf("Digite seu ano de nascimento: ");
    scanf("%d",&d_nascimento);
printf("Digite o ano atual: ");
    scanf("%d",&ano_atual);

i_anos=ano_atual - d_nascimento;
i_meses=i_anos*12;
i_dias=i_anos * 365;
i_sem=i_anos*52;

printf("Voce possui %d anos \n",i_anos);
printf("Ou %d meses \n",i_meses);
printf("Ou %d semanas \n",i_sem);
printf("Ou %d dias\n",i_dias);
}
