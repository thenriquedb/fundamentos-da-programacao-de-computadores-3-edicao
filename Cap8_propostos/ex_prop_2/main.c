/*
2) Crie uma sub-rotina que receba três números inteiros como parâmetros, representando horas, minutos e se-
gundos, e os converta em segundos. Exemplo: 2h, 40min e 10s correspondem a 9.610 segundos.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int hora, minutos, segundos;
    void ConverterParaSegundos(int H, int M, int S);

    printf("Horas: ");
    scanf("%d", &hora);

    printf("Minutos: ");
    scanf("%d", &minutos);

    printf("Horas: ");
    scanf("%d", &segundos);

    ConverterParaSegundos(hora, minutos, segundos);

    return (EXIT_SUCCESS);
}

void ConverterParaSegundos(int H, int M, int S) {
    int HR_seg, MIN_seg, total=0;

    HR_seg = H * 3600;
    MIN_seg = M * 60;
    total = HR_seg + MIN_seg + S;

    printf("\nCorresponde a %d segundos. \n", total);
}