/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

17) Faça um programa que receba a medida do ângulo (em graus) formado por uma escada apoiada no
chão e encostada na parede e a altura da parede onde está a ponta da escada. Calcule dida dessa escada. e mostre a me-
Observação: as funções trigonométricas implementadas nas linguagens de programação trabalham
com medidas de ângulos em radianos. */

#include <stdio.h>
int main()

{
    float angulo,altura,escada,radiano;

printf("CALCULO DE COMPRIMENTO DA ESCADA \n \n");

printf("Digite a altura da parede em que a escada esta apoiada: ");
    scanf("%f",&altura);
printf("Digite o angulo em que a escada está apoiada: ");
    scanf("%f",&angulo);

// Calculos
radiano=angulo*3.14 / 180;
escada=altura/radiano;

printf("A altura da escada e de %.2f metros",radiano);
}
