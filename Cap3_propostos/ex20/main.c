/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

20) Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a dis-
tância em que a escada está da parede, calcule e mostre a medida da escada para que se possa alcançar
sua ponta  */

#include <stdio.h>
int main()

{
    float angulo,distancia,escada,radiano;

printf("CALCULO DA ALTURA DA PAREDE \n \n");

printf("Digite a distancia: ");
    scanf("%f",&distancia);
printf("Digite o angulo em que a escada está apoiada: ");
    scanf("%f",&angulo);

// Calculos
radiano=angulo*3.14 / 180;
escada=altura/radiano;

printf("A altura da escada e de %.2f metros",radiano);
}
