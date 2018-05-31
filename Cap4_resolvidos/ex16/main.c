/* Fundamentos da Programação de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

16)Um supermercado deseja reajustar os preços de seus produtos usando o seguinte critério: o produto poderá ter seu preço aumentado ou diminuído.
 Para alterar o preço o produto deve preencher pelo menos um dos seguintes requisitos a seguir:

        Venda média	       Preço atual	              % de aumento	% de diminuição
    <500	                < R$ 30,00	                    10	            -
    >= 500 e < 1.200	    >= R$ 30,00 e < R$ 80,00	    15	            -
    >= 1.200                >= R $ 80,00	                -	            20

Faça um programa que receba o preço atual e a venda mensal média do produto, calcule e mostre o novo preço. */

#include <stdio.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    float venda,preco_atual,n_preco,diminuicao;

    printf("Reajuste de preço dos produtos de um supermercado \n\n");
    printf("Digite o preço atual do produto: ");
    scanf("%f",&preco_atual);
    printf("Digite a venda mensal média: ");
    scanf("%f",&venda);
    printf("\n\n");


    if (preco_atual < 30 || venda<500 ) {
        printf("Será aumentado 10%% no preço atual. \n");
        preco_atual = preco_atual * 1.10;
        printf("O preço reajustado será de %.2f reais",preco_atual);
        printf("\n\n");
    }

    else if ((preco_atual>=30 && preco_atual<80) || (venda<=500 && venda<1200)) {
        printf("Será aumentado 15%% no preço atual. \n");
        preco_atual = preco_atual * 1.15;
        printf("O preço reajustado será de %.2f reais",preco_atual);
        printf("\n\n");
    }

     else if ((preco_atual>=80) || (venda>=1200)) {
        printf("Será diminuido em 20%% no preço atual. \n");
        diminuicao = preco_atual * 0.2;
        preco_atual = preco_atual - diminuicao;
        printf("O preço reajustado será de %.2f reais",preco_atual);
        printf("\n\n");
    }

system("pause");
return 0;
}
