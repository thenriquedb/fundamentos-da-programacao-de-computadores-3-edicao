/*
13) Faça um programa que receba o nome e a nota de oito alunos e mostre o relatório a seguir:
Digite o nome do 1º aluno: Carlos
Digite a nota do Carlos: 8
Digite o nome do 2º aluno: Pedro
Digite a nota do Pedro: 5

Relatórios de notas
Carlos 8.0
Pedro 5.0
..
Média da classe = ??
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 8

int main(int argc, char** argv) {
    char nome[TAM][30];
    int i;
    float nota[TAM], soma = 0, media;

    for (i = 0; i < TAM; i++) {
        printf("Digite o nome do %dº aluno: ", i + 1);
        setbuf(stdin, NULL); //Limpar "sujeira" do buffer
        gets(nome[i]);
        printf("Digite a nota de %s: ", nome[i]);
        scanf("%f", &nota[i]);
        soma += nota[i];
        printf("\n");
    }

    printf("RELAÓRIOS DE NOTAS\n");
    for (i = 0; i < TAM; i++) {
        printf("%s: %.2f \n", nome[i], nota[i]);
    }

    printf("\nMédia da classe: %.2f", media = soma / TAM);
    return (EXIT_SUCCESS);
}

