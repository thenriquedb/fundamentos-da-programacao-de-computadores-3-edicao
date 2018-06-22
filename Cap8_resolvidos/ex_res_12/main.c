/*
12) Elabore uma sub-rotina que retorne um vetor com os três primeiros números perfeitos. Sabe-se que um
número é perfeito quando é igual à soma de seus divisores (exceto ele mesmo). Exemplo: os divisores
de 6 são 1, 2 e 3, e 1 + 2 + 3 = 6, logo 6 é perfeito.
 */

#include <stdio.h>
#include <stdlib.h>

void NumerosPerfeitos() {
    int soma = 0, num = 1;
    int i, cont = 0;

    do {
        //Laço para somar os divisores de cada numero
        for (i = 1; i < num; i++) {
            if (num % i == 0) {
                soma += i;
            }
        }
        
        //Irá verificar se a soma é igual ao numéro
        if (soma == num) {
            printf("%d \n", num);
            cont++;
        }
        
        num++;
        soma = 0;
    } while (cont != 3);
}

int main(int argc, char** argv) {

    NumerosPerfeitos();
    return (EXIT_SUCCESS);
}

