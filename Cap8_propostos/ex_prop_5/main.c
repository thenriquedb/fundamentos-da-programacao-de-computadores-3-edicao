/*
5) Faça uma sub-rotina que receba um valor inteiro e verifique se ele é positivo ou negativo.
 */

#include <stdio.h>
#include <stdlib.h>

void VerificarNumero(int n) {
    if(n>0) {
        printf("Positivo. \n");
    } else {
        printf("Negativo. \n");
    }

}

int main(int argc, char** argv) {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    VerificarNumero(num);

    return (EXIT_SUCCESS);
}

