/*
15) Faça um programa que receba o nome de oito clientes e armazene-os em um vetor. Em um segundo vetor,
armazene a quantidade de DVDs locados em 2011 por cada um dos oito clientes. Sabe-se que, para cada
dez locações, o cliente tem direito a uma locação grátis. Faça um programa que mostre o nome de todos
os clientes, com a quantidade de locações grátis a que ele tem direito. 
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 8

int main(int argc, char** argv) {
    char nome[TAM][40];
    int quant_DVD[TAM], DVD_gratis = 0, i;

    for (i = 0; i < TAM; i++) {
        printf("Nome: ");
        setbuf(stdin, NULL); //Limpar buffer do teclado
        gets(nome[i]);
        printf("Quantidade de DVD locados: ");
        scanf("%d", &quant_DVD[i]);
        printf("\n");
    }

    printf("RELATÓRIO\n");
    for (i = 0; i < TAM; i++) {
        printf("Nome do cliente: %s \n", nome[i]);

        if (quant_DVD[i] >= 10) {
            DVD_gratis = quant_DVD[i] / 10; //A parte inteira da divisão será a quantidade de DVD's gratis
            printf("O cliente %s tem direito a %d DVD's gratis. \n\n", nome[i], DVD_gratis);
        } else {
            printf("O cliente %s não tem direito a nenhum DVD gratis. \n\n", nome[i]);
        }
    }
    return (EXIT_SUCCESS);
}

