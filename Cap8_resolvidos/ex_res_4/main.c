/*
4) Faça uma sub-rotina que receba um único valor representando segundos. Essa sub-rotina deverá con-
vertê-lo para horas, minutos e segundos. Todas as variáveis devem ser passadas como parâmetro, não
havendo variáveis globais.

 Refêrencia: 
 Youtube
    Pasar o transformar segundos en horas, minutos y segundos | Canal: podemos aprobar matemáticas
    Link: https://www.youtube.com/watch?v=cwLkeL8YhUk
 */

#include <stdio.h>
#include <stdlib.h>

int ConverterSegundos(int seg) {
    int hr, min, segundos, res;

    hr = (seg / 60) / 60; //Calculo das horas
    min = (seg/60) % 60; //Calculo dos minutos
    segundos = seg % 60; //Calculo dos segundos

    printf("Hora: %d  \n", hr);
    printf("Minutos: %d \n", min);
    printf("Segundos: %d \n", segundos);
}

int main(int argc, char** argv) {
    int segundos;

    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    ConverterSegundos(segundos);

    return (EXIT_SUCCESS);
}

