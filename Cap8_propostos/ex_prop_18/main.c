/*
18) Crie uma sub-rotina que gere e mostre os três primeiros números primos acima de 100.
 */

#include <stdio.h>
#include <stdlib.h>

void Numero_Primo_Acima_de_100(int *vet) {
    int i = 2, n = 100, ver_primo = 0, cont = 0;

    do {

        for (i = 1; i < n; i++) {

            if (n % i == 0) {
                ver_primo++;
            }
        }

        if (ver_primo < 2) {
            vet[cont] = n;
            cont++;
        }

        ver_primo = 0;
        n++;
    } while (cont < 3);
}

int main(int argc, char** argv) {
    int Primos_Acima_De_100[3], i;

    Numero_Primo_Acima_de_100(&Primos_Acima_De_100);

    printf("O 3 primeiros numeros primos acima de 100 são: \n");
    for (i = 0; i < 3; i++) {
        printf("%d - ",Primos_Acima_De_100[i]);
    }

    return (EXIT_SUCCESS);
}

