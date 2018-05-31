/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

 8) 9. Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área= (base * altura)/2.*/

#include <stdio.h>
int main()

{
    float base,altura,area;
    printf("CALCULO DA AREA DO TRIANGULO \n \n");

    printf("Digite a medida do base do triângulo: ");
        scanf("%f",&base);
    printf("Digite a medida da altura: ");
        scanf("%f",&altura);

    area=(base*altura)/2;

    printf("A area do triangulo e de: %.2f",area);

}
