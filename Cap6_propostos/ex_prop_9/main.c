/*
9) Faça um programa que preencha três vetores com dez posições cada um: o primeiro vetor, com os nomes de
dez produtos; o segundo vetor, com os códigos dos dez produtos; e o terceiro vetor, com os preços dos produtos.
Mostre um relatório apenas com o nome, o código, o preço e o novo preço dos produtos que sofrerão
aumento.

Sabe-se que os produtos que sofrerão aumento são aqueles que possuem código par ou preço superior a
R$ 1.000,00. Sabe-se ainda que, para os produtos que satisfazem as duas condições anteriores, código e
preço, o aumento será de 20%; para aqueles que satisfazem apenas a condição de código, o aumento será
de 15%; e para aqueles que satisfazem apenas a condição de preço, o aumento será de 10%.
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main(int argc, char** argv) {
    char nome[TAM][40];
    int i, c = 0, cod[TAM], indice_npreco[TAM];
    float preco[TAM], n_preco;

    for (i = 0; i < TAM; i++) {
        printf("%dº Produto\n", i + 1);
        printf("Nome do produto: ");
        setbuf(stdin, NULL);
        gets(nome[i]);
        printf("Codigo: ");
        scanf("%d", &cod[i]);
        printf("Preço: ");
        scanf("%f", &preco[i]);
        printf("\n");
    }

    printf("RELATÓRIO\n\n");
    for (i = 0; i < TAM; i++) {
        printf("%dº Produto\n", i + 1);
        printf("\tNome do produto: %s \n", nome[i]);
        printf("\tCodigo: %d \n", cod[i]);
        printf("\tPreço: R$ %.2f. \n", preco[i]);

        c = 0;
        if (cod[i] % 2 == 0 && preco[i] > 1000) {
            n_preco = preco[i] * 1.20;
            c++;
        } else if (cod[i] % 2 == 0 && preco[i] < 1000) {
            n_preco = preco[i] * 1.15;
            c++;
        } else {
            n_preco = preco[i] * 1.10;
            c++;
        }
        if (c > 0) {
            printf("\tNovo preco: R$ %.2f. \n", n_preco);
        }
    }

    return (EXIT_SUCCESS);
}

