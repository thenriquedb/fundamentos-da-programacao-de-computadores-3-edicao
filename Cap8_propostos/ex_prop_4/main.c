/*
4) FaC'a uma sub-rotina que receba como parC"metro o raio de uma esfera, calcule e mostre no programa principal
o seu volume: v = 4*pi*RB3
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    float raio;
    void CalculoVolumeEsfera(float r);

    printf("Digite o raio de uma esfera: ");
    scanf("%f", &raio);

    CalculoVolumeEsfera(raio);

    return (EXIT_SUCCESS);
}

void CalculoVolumeEsfera(float r) {
    float pi = 3.14, volume;
    volume = (4 * pi * pow(r, 3)) / 3;
    printf("Volume: %.2f. \n", volume);
}