/*
12) Faça um programa que receba dez números inteiros e mostre a quantidade de números primos dentre os
números que foram digitados
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int num, div, i, j, ver_primo, cont_primo;
    ver_primo = 0;
    cont_primo = 0;

    for (i = 1; i <= 10; i++) {
        printf("%dº Número: ", i);
        scanf("%d", &num);

        for (j = 1; j <= 9; j++) {
            div = num % j;

            if (div == 0) {
                ver_primo++;
            }
        }

        if (ver_primo > 2) {
            printf("%d não é primo. \n\n", num);
        } else {
            printf("%d é primo. \n\n", num);
            cont_primo++;
        }
        //A varivael de verificacação deve ser zerada a cada loop para não ocasionar erros
        ver_primo = 0; 
    }

    if (cont_primo > 0) {
        printf("Foram digitados %d números primos. \n", cont_primo);
    } else {
        printf("Nenhum número primo digitado. \n");
    }
    
    return (EXIT_SUCCESS);
}
