/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

24) Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela vai passar por vários países e
precisa converter seu dinheiro em dólares, marco alemão e libra esterlina.Sabe--se que a cotação do dólar é de R$ 1,80;
do marco alemão, de R$ 2,00; e da libra esterlina, de R$ 3,57. Oprograma deve fazer as conversões e mostrá-las
 */

#include <stdio.h>
int main()
{
float reais,dolar,marco,libra;

    printf("CONVERSAO DE MOEDAS \n\n");

    printf("Digite o valor em reais: ");
        scanf("%f",&reais);
//Calculos para as conversoes.
dolar=reais / 1.8;
marco=reais / 2;
libra=reais / 3.57;

printf("%.2f reais convertido em doalr e %.2f \n",reais,dolar);
printf("%.2f reais convertido em marco alemao e %.2f \n",reais,marco);
printf("%.2f reais convertido em libras esterlina e %.2f \n",reais,libra);





}
