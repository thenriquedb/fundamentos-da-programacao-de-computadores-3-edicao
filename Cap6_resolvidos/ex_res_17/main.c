/*
17) Faça um programa que receba seis números inteiros e mostre:
    || os números pares digitados;
    || a soma dos números pares digitados;
    || os números ímpares digitados; e
    || a quantidade de números ímpares digitados. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int n[6], pares[6], impares[6], somaP = 0, contI = 0, i;
    int p1 = 0, p2 = 0;

    for (i = 0; i < 6; i++) {
        printf("Digite o %d número: ", i + 1);
        scanf("%d", &n[i]);
        if (n[i] % 2 == 0) {
            somaP += n[i];
            pares[p1] = n[i];
            p1++;
        } else {
            contI++;
            impares[p2] = n[i];
            p2++;
        }
    }

    printf("\nNúmeros pares digitados: ");
    for (i = 0; i < p1; i++) {
        printf("%d | ", pares[i]);
    }
    printf("\nNúmeros impares digitados: ");
    for (i = 0; i < p2; i++) {
        printf("%d | ", impares[i]);
    }
    printf("\nSoma dos números pares digitados: %d \n", somaP);
    printf("Quantidade de números primos digitados: %d \n", contI);

    return (EXIT_SUCCESS);
}

