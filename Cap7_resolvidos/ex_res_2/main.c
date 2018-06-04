/*
2) Faça um programa que preencha uma matriz 10 × 3 com as notas de dez alunos em três provas. O
programa deverá mostrar um relatório com o número dos alunos (número da linha) e a prova em que
cada aluno obteve menor nota. Ao final do relatório, deverá mostrar quantos alunos tiveram menor
nota em cada uma das provas: na prova 1, na prova 2 e na prova 3.
 */

#include <stdio.h>
#include <stdlib.h>
#define LIN 10
#define COL 3

int main(int argc, char** argv) {
    float notas[LIN][COL], menor = 100; // Irei considerar 100 sendo a nota maxima a ser obtida
    int i, j, indice_menor, cont_prova1 = 0, cont_prova2 = 0, cont_prova3 = 0;

    //Leitura das notas de cada aluno
    for (i = 0; i < LIN; i++) {
        printf("%dºAluno \n", i + 1);
        for (j = 0; j < COL; j++) {
            printf("\tNota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("Menores notas de cada aluno: \n");
    for (i = 0; i < LIN; i++) {
        menor = 100;
        for (j = 0; j < COL; j++) {
            if (notas[i][j] < menor) {
                menor = notas[i][j];
                indice_menor = j;
            }
        }
        printf("\nAluno %d: \n", i + 1);
        printf("Nota: %.2f \n", menor);
        printf("Prova: %d \n", indice_menor + 1);

        //Contagem da qtde de quantos alunos tiraram a menor em cada prova
        if (indice_menor == 0) {
            cont_prova1++;
        } else if (indice_menor == 1) {
            cont_prova2++;
        } else {
            cont_prova3++;
        }
    }

    printf("\nQuantidade de alunos que tiraram a menor nota em cada uma das provas: \n");
    printf("\tProva 1: %d \n", cont_prova1);
    printf("\tProva 2: %d \n", cont_prova2);
    printf("\tProva 3: %d \n", cont_prova3);

    return (EXIT_SUCCESS);
}