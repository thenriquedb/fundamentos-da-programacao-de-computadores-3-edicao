/*
6) Crie uma sub-rotina que receba como parâmetro a altura (alt) e o sexo de uma pessoa e retorne seu peso ideal.
Para homens, deverá calcular o peso ideal usando a fórmula: peso ideal = 72.7 *alt − 58; para mulheres: peso
ideal = 62.1 *alt − 44.7.
 */

#include <stdio.h>
#include <stdlib.h>

float PesoIdeal(float alt, char sexo);

int main(int argc, char** argv) {
    float altura;
    char sexo;

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu sexo (M para masculino e F para feminino): ");
    scanf(" %c", &sexo);

    printf("Seu peso ideal é de %.2f kg. \n", PesoIdeal(altura, sexo));
    
    return (EXIT_SUCCESS);
}

float PesoIdeal(float alt, char sexo) {
    float pIdeal;

    switch (sexo) {
        case 'M':
        case 'm':
            pIdeal = 72.7 * alt - 58;
            break;

        case 'F':
        case 'f':
            pIdeal = 62.1 * alt - 44.7;
            break;
    }
    return pIdeal;
}