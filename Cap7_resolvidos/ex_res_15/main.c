/*
15) Elabore um programa que preencha:
    ||um vetor com cinco números inteiros;
    ||outro vetor com dez números inteiros;
    ||uma matriz 4x3, também com números inteiros.

O programa deverá calcular e mostrar:
    || o maior elemento do primeiro vetor multiplicado pelo menor elemento do segundo vetor. O resulta-
do dessa multiplicação, adicionado aos elementos digitados na matriz, dará origem a uma segunda
matriz (resultante);
    ||a soma dos elementos pares de cada linha da matriz resultante;
    || a quantidade de elementos entre 1 e 5 em cada coluna da matriz resultante.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define V 5
#define V2 10
#define L 4
#define C 3

int main(int argc, char** argv) {
    int vet1[V], vet2[V2], mat1[L][C], mat2[L][C], somaPares[L];
    int i, j, p = 0, cont = 0, num1e5_coluna[C];

    //Função para sempre que executar gerar números aleatorios diferentes
    srand(time(NULL));

    //Prencher os vetores com valores aleatorios
    for (i = 0; i < V2; i++) {
        if (i < 4) {
            vet1[i] = (rand() % 10) + 1;
        }
        vet2[i] = (rand() % 10) + 1;
    }

    int maior = vet1[0];
    int menor = vet2[0];

    //Imprimir o primeiro vetor gerado
    printf("Vetor 1: ");
    for (i = 0; i < V; i++) {
        printf("%d, ", vet1[i]);

        if (vet1[i] > maior) {
            maior = vet1[i];
        }
    }

    //Imprimir segundo vetor gerado
    printf("\nVetor 2: ");
    for (i = 0; i < V; i++) {
        printf("%d, ", vet2[i]);

        if (vet2[i] < menor) {
            menor = vet2[i];
        }
    }

    //Imprimir primeira matriz
    printf("\n\nMatriz 1\n");
    for (i = 0; i < L; i++) {
        cont = 0;
        for (j = 0; j < C; j++) {
            if (cont == 0) {
                printf("%dº ", i + 1);
            }
            mat1[i][j] = (rand() % 10) + 1;
            printf("%4d", mat1[i][j]);

            if (cont == C - 1) {
                printf("\n");
                cont = 0;
            }
            cont++;
        }
    }

    //Imprimir segunda matrizz
    printf("\nMatriz 2\n");
    for (i = 0; i < L; i++) {
        cont = 0;
        for (j = 0; j < C; j++) {
            if (cont == 0) {
                printf("%dº ", i + 1);
            }

            mat2[i][j] = mat1[i][j] + (maior * menor);
            printf("%4d", mat2[i][j]);

            if (cont == C - 1) {
                printf("\n");
                cont = 0;
            }
            cont++;
        }
    }

    printf("\nSoma dos valores pares de cada linha da matriz resultante: \n");
    for (i = 0; i < L; i++) {
        somaPares[p] = 0;
        for (j = 0; j < C; j++) {
            if (mat2[i][j] % 2 == 0) {
                somaPares[p] += mat2[i][j];
            }
        }
        printf("\t%dº linha: %d \n", i + 1, somaPares[p]);
        p++;
    }
    
    /* Como a variavel p é responsavel por coordernar os vetores, ela deve ser 
    zerada a cada nova vez que for utiliza-la. */
    p=0; 

    
    //Contagem dos numeros entre 1 e 5 em cada coluna
    for (i = 0; i < L; i++) {
        num1e5_coluna[p] = 0;

        for (j = 0; j < C; j++) {
            if (mat2[j][i] >= 1 && mat2[j][i] <= 5) {
                num1e5_coluna[p] += 1;
            }
        }
        p++;
    }
    
    printf("\nNúmeros entre 1 e 5 em cada coluna da matriz resultante: \n");
    for (i = 0; i < L; i++) {
        somaPares[p] = 0;
        printf("\t%dºº coluna: %d \n", i + 1, num1e5_coluna[i]);
        p++;
    }
    
    return (EXIT_SUCCESS);
}

