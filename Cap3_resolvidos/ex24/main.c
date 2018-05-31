/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

24) Faça um programa que receba uma hora formada por hora e minutos (um número real),
calcule e mostre a hora digitada apenas em minutos. Lembre-se de que:
    ■ para quatro e meia, deve-se digitar 4.30;
    ■ os minutos vão de 0 a 59.*/

#include <stdio.h>
int main()
{
 float hora,hora2,min;


printf("TRANSFORMAÇÃO DE HORAS EM MINUTOS \n \n");

printf("Digite as horas (No formato hora.min): ");
    scanf("%f",&hora);
hora2 = hora;

hora=(int) hora;
min=(hora2-hora)*100; // Multiplicacao por 100 é necessaria paara transformar em minutos novamente
hora=hora*60;
hora2=hora+min;

printf("Conversao para minutos: %.0f",hora2);
}
