/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

17) Cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que
o usuário deseja alcançar subindo a escada, calcule e mostre quantos degraus ele deverá subir para
atingir seu objetivo, sem se preocupar com a altura do usuário. Todas as medidas fornecidas devem
estar em metros. */

#include <stdio.h>
int main()
 {
float a_degrau,a_usuario,quant_degrau;

printf("CALCULO DA QUANTIDADE DE DEGRAUS DE UMA ESCADA \n \n");

printf("Digite a altura do degrau: ");
    scanf("%f",&a_degrau);
printf("Digite a altura que deseja alcancar: ");
    scanf("%f",&a_usuario);

//  Calculos

quant_degrau=a_usuario / a_degrau;

printf("Aproxidamente ira precisar de %.1f degraus.",quant_degrau);
return 0;

 }
