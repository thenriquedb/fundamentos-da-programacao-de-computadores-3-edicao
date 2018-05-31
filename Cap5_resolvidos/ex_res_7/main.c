/*
7) Faça um programa que monte os oito primeiros termos da sequência de Fibonacci
 * 0-1-1-2-3-5-8-13-21-34-55...

 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num1, num2, sequencia;
    int i;
    num1 = 0;
    num2 = 1;
    
    for (i = 3; i <= 10; i++) {
        sequencia = num1 + num2;

        printf("%d \n",sequencia);
        
        num1 = num2;
        num2 = sequencia;
        sequencia = num1 + num2;  
    }
 

    return (EXIT_SUCCESS);
}

