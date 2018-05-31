/*
13. Este programa calcula o percentual de aumento do preço de um produto e sua 
classificação. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float preco;

    printf("Calculo de preço e classificação de produtos \n\n");
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    //Calculo do valor dos impostos.
    if (preco <= 50) {
        printf("Percentual de aumento de 5%%. \n");
        printf("O novo valor do produto será de R$ %.2f.", preco = preco * 1.05);
    } else if (preco > 50 && preco <= 100) {
        printf("Percentual de aumento de 10%%. \n");
        printf("O novo valor do produto será de R$ %.2f.", preco = preco * 1.10);
    } else if (preco > 100) {
        printf("Percentual de aumento de 15%%. \n");
        printf("O novo valor do produto será de R$ %.2f.", preco = preco * 1.15);
    }

    printf("\n\n");

    //Classifcações
    if (preco <= 80) {
        printf("Classificação \n");
        printf("Este produto está barato.");
    } else if (preco > 80 && preco <= 120) {
        printf("Classificação \n");
        printf("Este produto está com preço normal.");
    } else if (preco > 120 && preco <= 200) {
        printf("Classificação \n");
        printf("Este produto está caro.");
    }
    else if (preco > 200) {
        printf("Classificação \n");
        printf("Este produto está muito caro.");
    }
    return (EXIT_SUCCESS);
}

