/*
13) Faça um programa que preencha:
    ||um vetor com os nomes de cinco produtos;
    ||uma matriz 5x4 com os preços dos cinco produtos em quatro lojas diferentes;
    ||outro vetor com o custo do transporte dos cinco produtos.
 
O programa deverá preencher uma segunda matriz 5x4 com os valores dos impostos de cada produto,
de acordo com a tabela a seguir.
 
Preço                               % de imposto
Até R$ 50,00                         5
R$ 50,00 e R$ 100,00 (inclusive)    10
Acima de R$ 100,00                  20

 O programa deverá mostrar, ainda, um relatório com o nome do produto, o número da loja onde o
produto é encontrado, o valor do imposto a pagar, o custo de transporte, o preço e o preço final (preço
acrescido do valor do imposto e do custo do transporte). 
 
 */

#include <stdio.h>
#include <stdlib.h>

#define L 5
#define C 4
#define T 4 //Quantidade de lojas

int main(int argc, char** argv) {
    char nome[T][40];
    float preco[L][C], imposto[L][C], transporte[T];
    int i, j, k, cont = 1;
    int pC = 0, pL = 0;

    //Input
    for (i = 0; i < T; i++) {
        printf("\n%dº Produto \n", i + 1);
        printf("\tDigite o nome do produto: ");
        setbuf(stdin, NULL); //Limpar buffer teclado
        gets(nome[i]);

        //Leitura dos preçoes em 4 lojas
        for (j = 0; j < 4; j++) {
            printf("\tDigite o preço na loja %d: ", j + 1);
            scanf("%f", &preco[i][j]);
        }

        printf("\tDigite o valor do transporte do produto %d: ", cont);
        scanf("%f", &transporte[i]);
    }

    //Calculo impostos    
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            if (preco[i][j] < 50) {
                imposto[i][j] = preco[i][j] * 0.05;
            } else if (preco[i][j] >= 50 && preco[i][j] <= 100) {
                imposto[i][j] = preco[i][j] * 0.10;
            } else {
                imposto[i][j] = preco[i][j] * 0.20;
            }
        }
    }
    float acressimo = 0, NovoPreco = 0, total;

    printf("\n--------------------RELÁTORIO--------------------\n");
    
    //Output
    for (i = 0; i < L; i++) {
        printf("Produto %d | %s \n", i + 1, nome[i]);

        //Laço para imprimir os preços de cada loja
        for (j = 0; j < 4; j++) {
            printf("\t\nLoja %d | Preço: R$ %.2f \n", j + 1, preco[i][j]);
            printf("\tImpostos: R$ %.2f \n", imposto[i][j]);
            printf("\tPreço com acressimo dos impostos: R$ %.2f \n", NovoPreco = preco[i][j] + imposto[i][j]);
            printf("\tTransporte: R$ %.2f \n", transporte[i]);
            printf("\tTotal:(transporte + impostos): R$ %.2f \n", total = preco[i][j] + imposto[i][j] + transporte[i]);
        }
        total = 0;
        NovoPreco = 0;
        printf("------------------------------------------------------------\n\n");
    }


    return (EXIT_SUCCESS);
}