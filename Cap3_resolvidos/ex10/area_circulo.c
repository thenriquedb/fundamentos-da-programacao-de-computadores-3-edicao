/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

10. Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = pi* R2. */

#include <stdio.h>
int main()

{
    float pi=3.14,raio,area;
    printf("CALCULO DA AREA DE UM CIRCULO \n \n");

    printf("Digite o valor do raio da circuferência: ");
        scanf("%f",&raio);
    area=pi*raio*raio;
    printf("A area do circulo é: %.2f",area);
    return 0;
}
