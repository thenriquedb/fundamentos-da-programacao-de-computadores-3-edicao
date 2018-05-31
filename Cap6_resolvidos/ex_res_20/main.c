/*
 20) Faça um programa que leia um vetor com cinco posições para números reais e, depois, um código
inteiro. Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem direta; se for 2,
mostre o vetor na ordem inversa.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float n[5];
    int i, op;

    for (i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &n[i]);
    }
    printf("\nMENU DE OPÇÕES\n");
    printf("\t0. Para sair; \n");
    printf("\t1. Para imprimir o vetor digitado na ordem direta; \n");
    printf("\t2. Para imprimir o vetor digitado na ordem inversa; \n");
    printf("Digite a opção desejada: ");
    scanf("%d", &op);

    switch (op) {
        case 0:
            printf("\nPrograma encerrado. \n");
            break;

        case 1:
            printf("Ordem direta: ");
            for (i = 0; i < 5; i++) {
                printf("%.1f | ", n[i]);
            }
            break;

        case 2:
            printf("Ordem inversa: ");
            for (i = 4; i >=0; i--) {
                printf("%.1f | ", n[i]);
            }
            break;
            
        default:
            printf("\nOpção invalida. \n");
            break;
    }
    return (EXIT_SUCCESS);
}

