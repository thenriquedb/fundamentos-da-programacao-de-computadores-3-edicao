/* 2) Uma pequena loja de artesanato possui apenas um vendedor e comercializa dez tipos de objetos. O
vendedor recebe, mensalmente, salário de R$ 545,00, acrescido de 5% do valor total de suas vendas.
O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade vendida de
cada peça deve ficar em outro vetor, mas na mesma posição. Crie um programa que receba os preços
e as quantidades vendidas, armazenando-os em seus respectivos vetores (ambos com tamanho dez).
Depois, determine e mostre:
 
    || um relatório contendo: quantidade vendida, valor unitário e valor total de cada objeto. Ao final,
    deverão ser mostrados o valor geral das vendas e o valor da comissão que será paga ao vendedor; e
 
    || o valor do objeto mais vendido e sua posição no vetor (não se preocupe com empates).
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int TAM = 2; //Tamanho dos vetores
    int i, quant_obj[TAM], mais_vendido, pos_maisVendido;

    float vlr_obj[TAM], total_obj = 0, total_venda = 0, comissao, vlr_maisVendido;

    //Leitura do valor e da quantidade de cada objeto da loja
    printf("VALORES E QUANTIDADES DOS PRODUTOS\n\n");
    for (i = 0; i < TAM; i++) {
        printf("Digite o valor do %dº produto: ", i + 1);
        scanf("%f", &vlr_obj[i]);
        printf("Digite a quantidade do %dº produto: ", i + 1);
        scanf("%d", &quant_obj[i]);
        printf("\n");
    }

    mais_vendido = quant_obj[0];

    printf("RELATÓRIO\n");
    for (i = 0; i < TAM; i++) {
        printf("Produto %d \n", i + 1);
        printf("\tQuantidade vendida: %d \n", quant_obj[i]);
        printf("\tValor unitário: R$ %.2f \n", vlr_obj[i]);
        printf("\tTotal: R$ %.2f \n\n", total_obj = quant_obj[i] * vlr_obj[i]);
        total_venda += total_obj; //Total de vendas

        //Descobrir o objeto mais vendido da loja
        if (mais_vendido < quant_obj[i]) {
            vlr_maisVendido = vlr_obj[i];
            pos_maisVendido = i;
        }
    }

    printf("O vendedor recebéra R$ %.2f de comissão; \n", comissao = total_venda * 0.05);
    printf("O valor do objeto mais vendido é R$ %.2f e está na posição %d.\n", vlr_maisVendido, pos_maisVendido);

    return (EXIT_SUCCESS);
}
