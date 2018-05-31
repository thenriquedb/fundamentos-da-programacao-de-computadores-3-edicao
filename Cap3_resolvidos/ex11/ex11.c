/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

11. Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado.*/

#include <stdio.h>
#include <math.h>
int main()
{
    int numero,cubo,quadrado;
    float raiz_quad,raiz_cub;

    printf("                              CALCULO BASICOS                              \n\n\n\n");
    printf(" Digite um numero: ");
    scanf("%d",&numero);

    if (numero > 0);
    {
// Operaçoes
    quadrado=pow(numero,2);
    cubo=pow(numero,3);
    raiz_quad=sqrt(numero);
    raiz_cub=cbrt(numero);
printf("\n\n");
printf("CALCULOS:  \n");
    printf("O quadrado de %d e: %d \n",numero,quadrado);
    printf("O cubo de %d e: %d \n",numero,cubo);
    printf("A raiz quadrada de %d e: %.2f \n",numero,raiz_quad);
    printf("A raiz cubica de %d de: %.2f \n",numero,raiz_cub);




}
}
