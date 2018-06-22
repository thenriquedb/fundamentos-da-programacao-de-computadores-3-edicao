/*
4) Faça um programa que receba:
    ||as notas de 15 alunos em cinco provas diferentes e armazene-as em uma matriz 15x5;
    || os nomes dos 15 alunos e armazene-os em um vetor de 15 posições.
 * 
O programa deverá calcular e mostrar:
    || para cada aluno, o nome, a média aritmética das cinco provas e a situação (aprovado, reprovado
ou exame);
    || a média da classe.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 15    
#define C 5

int main(int argc, char** argv) {
    int i, j, c = 0;
    float nota[L][C], media[L], soma;
    char nome[L][40];

    srand(time(NULL));

    for (i = 0; i < L; i++) {
        printf("Aluno %d \n", i + 1);
        //Leitura do nomes
        printf("Nome: ");
        setbuf(stdin, NULL);
        gets(nome[i]);

        c = 0;
        soma = 0;
        for (j = 0; j < C; j++) {
            printf("\tNota %d: %.2f \n", j + 1, nota[i][j] = rand() % 11);
            soma += nota[i][j];

            if (c == C - 1) {
                printf("\n");
            }
            c++;
        }
        media[i] = (soma / 5);
    }

    for (i = 0; i < L; i++) {
        printf("%dº Aluno \n", i + 1);
        printf("\tNome: %s \n", nome[i]);
        printf("\tMedia: %.2f \n", media[i]);
        
        if (media[i] >= 6) {
            printf("\tSituação: Aprovado \n");
        } else if (media[i] >= 4 && media[i] < 6) {
            printf("\tSituação: Em exame. \n");
        } else {
            printf("\tSituação: Reprovado. \n");
        }


        printf("\n");
    }

    return (EXIT_SUCCESS);
}

