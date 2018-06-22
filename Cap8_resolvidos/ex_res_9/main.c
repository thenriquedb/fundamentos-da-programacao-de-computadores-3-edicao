/*
9) Faça uma sub-rotina que leia cinco valores inteiros, determine e mostre o maior e o menor deles.
 */

#include <stdio.h>
#include <stdlib.h>

void PegarMaioreMenorValor() {
    int num[5], i, maior, menor;

    //Leitura dos números
    for (i = 0; i < 5; i++) {
        printf("%dº número: ", i+1);
        scanf("%d", &num[i]);
    }
    
    maior = num[0];
    menor = num[0];
    
    //Pegar maior e menor valor
    for (i=0;i<5;i++) {
        if(num[i] > maior) {
            maior = num[i];
        }
        
        if(num[i] < menor) {
            menor = num[i];
        }
    }
    
    printf("\nMaior: %d \n",maior);
    printf("Menor: %d \n",menor);
}

int main(int argc, char** argv) {
    PegarMaioreMenorValor();

    return (EXIT_SUCCESS);
}

