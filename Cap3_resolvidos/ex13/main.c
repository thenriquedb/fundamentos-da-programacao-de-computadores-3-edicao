/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

Sabe-se que: pé = 12 polegadas 1 jarda = 3 pés 1 milha = 1,760 jarda Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados. a) polegadas; b) jardas; c) milhas.  */

#include <stdio.h>
int main()

{
    float num,pe,jarda,polegada,milha;

printf("CONVERSÃO DE MEDIDAS \n \n");

printf("Digite um numero em pés: ");
    scanf("%f",&num);

//Calculos para conversão.
    polegada=num*12;
    pe=num*polegada;
    jarda=num*0.33;
    milha=num*0.000568182;


printf("O numero %.0f convertido para polegadas e: %.2f \n",num,polegada);
printf("O numero %.0f convertido para jardas e: %.2f \n",num,jarda);
printf("O numero %.0f convertido para milha e: %f \n",num,milha);

return 0;
}
