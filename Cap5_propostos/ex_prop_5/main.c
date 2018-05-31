/*
5) Faça um programa que mostre as tabuadas dos números de 1 a 10. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int i, j;
    float num;

    for (num = 1; num <= 10; num++) {
        printf("TABUADA DO %.0f \n\n", num);

        printf("TABUADA DA SOMA \n");
        for (i = 1; i <= 10; i++) {
            int soma = num + i;
            printf("    %.0f + %d = %d \n", num, i, soma);
        }

        printf("TABUADA DA SUBTRAÇÃO \n");
        for (i = 1; i <= 10; i++) {
            int sub = num - i;
            printf("    %.0f - %d = %d \n", num, i, sub);
        }

        printf("TABUADA DA MULTIPLICAÇÃO \n");
        for (i = 1; i <= 10; i++) {
            int multp = num*i;
            printf("    %.0f X %d = %d \n", num, i, multp);
        }

        printf("TABUADA DA DIVISÃO \n");
        for (i = 1; i <= 10; i++) {
            float div, aux;

            for (i = 1; i <= 10; i++) {
                int multp = num*i;
                div = multp / num;
                printf("    %d / %.0f = %.2f \n", multp, num, div);
            }
        }

        printf("--------------------------------- \n");
    }


    return (EXIT_SUCCESS);
}

