/*
6) Crie uma sub-rotina que receba como parâmetro a altura (alt) e o sexo de uma pessoa e retorne seu peso ideal.
Para homens, deverá calcular o peso ideal usando a fórmula: peso ideal = 72.7 *alt − 58; para mulheres: peso
ideal = 62.1 *alt − 44.7.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float altura;
    char sexo;

    void PesoIdeal(float alt, char sexo);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu sexo (M para masculino e F para feminino): ");
    scanf(" %c", &sexo);

    PesoIdeal(altura, sexo);

    return (EXIT_SUCCESS);
}

void PesoIdeal(float alt, char sexo) {
    float PesoIdeal;

    switch (sexo) {
        case 'M':
            PesoIdeal = 72.7 * alt - 58;
            break;

        case 'F':
            PesoIdeal = 62.1 * alt - 44.7;
            break;
    }
    printf("\nSeu peso ideal é %.2f kg. \n", PesoIdeal);
}