/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

14) O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do
distribuidore dos impostos aplicados ao preço defábrica. Faça um programa quereceba o preço de fá- brica de um veículo, o percentual delucro do distribuidor e o percentual de impostos, calculee mostre:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo. */

#include <stdio.h>
int main()

{
    float p_fabrica,per_l,per_i,total,lucro,imposto;

printf("CALCULO DE LUCRO E IMPOSTOS DE UM CARRO \n \n");

printf("Digite o valor de fabrica: ");
    scanf("%f",&p_fabrica);
printf("Digite o percentual de lucro: ");
    scanf("%f",&per_l);
printf("Digite o percentual de impostos: ");
    scanf("%f",&per_i);

printf("\n \n");
// Calculos
    lucro= p_fabrica * (per_l /100);
    imposto= p_fabrica * (per_i /100);
    total= p_fabrica+imposto+lucro;

printf("O lucro do consumidor sera de %.2f reais \n",lucro);
printf("O unposto cobrado sera de %.2f reais \n",imposto);
printf("O valor total do veiculo sera de %.2f reais \n",total);

}
