/*
5) Na teoria dos sistemas, define-se o elemento MINMAX de uma matriz como o maior elemento da
linha em que se encontra o menor elemento da matriz. Elabore um programa que carregue uma matriz
4x7 com números reais, calcule e mostre seu MINMAX e sua posição (linha e coluna).
 */

#include <stdio.h>
#include <stdlib.h>
#define LIN 4
#define COL 7

int main(int argc, char** argv) {
    float matriz[LIN][COL], maior, menor;
    int i, j, ind_maiorL, ind_maiorC,ind_menor;

    //Leitura dos numeros digitados
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    
    menor = matriz[0][0];
    
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            
            //Comparar o menor valor da matriz
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                ind_menor = i; //Irá armazenar o indice da linha
            }
        }
    }

    maior = matriz[ind_maiorL][0];

    for (i = 0; i < COL; i++) {
        
        //Laço para comparar o maior elemento da linha
        if (matriz [ind_maiorL][i] > maior) {
            maior = matriz[ind_maiorL][i];
            ind_maiorC = i; //Irá armzenar o indice da coluna do maior elemento da linha
        }
    }

    printf("\nMINMAX[%d][%d]: %.2f \n", ind_menor, ind_maiorC, maior);

    return (EXIT_SUCCESS);
}