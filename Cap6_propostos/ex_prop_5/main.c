/*
5) Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas Lógica e Linguagem de
Programação. Coloque os números das matrículas dos alunos que cursam Lógica em um vetor, quinze alunos.Coloque 
os números das matrículas dos alunos que cursam Linguagem de Programação em outro vetor, dez alunos. Mostre o 
número das matrículas que aparecem nos dois vetores. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int log[15], prog[10], rep[10];
    int i, j, p = 0;

    printf("LOGICA \n");
    for (i = 0; i < 15; i++) {
        printf("\tDigite o número da %dº matricula: ", i + 1);
        scanf("%d", &log[i]);
    }

    printf("\nLINGUAGEM DE PROGRAMAÇÃO \n");
    for (i = 0; i < 10; i++) {
        printf("\tDigite o número da %dº matricula: ", i + 1);
        scanf("%d", &prog[i]);
    }

    //Irá verificar se possui matriculas repetidas nos vetores
    for (i = 0; i < 15; i++) {
        for (j = 0; j < 10; j++) {
            if (log[i] == prog[j]) { //Caso o número da matricula for repetido será armzaneda em um vetor separado
                rep[p] = log[i];
                p++;
            }
        }
    }

    //Impressão dos números repetidos
    if (p > 0) {
        printf("\nMatriculas repetidas: ");
        for (i = 0; i < p; i++) {
            printf("%d, ", rep[i]);
        }
    } else {
        printf("\nNenhum número de matricula repetido foi encontrado. \n");
    }
    return (EXIT_SUCCESS);
}

