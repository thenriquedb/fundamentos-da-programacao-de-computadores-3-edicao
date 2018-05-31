/*
Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando
as seguintes fórmulas (onde h é a altura):
 * 
 *para homens: (72.7 * h) – 58.
 * para mulheres: (62.1 * h) – 44.7. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int sexo;
    float altura, peso_ideal;

    printf("Calculo do peso ideal \n\n");
    printf("SEXO \n"
            "1 - Masculino \n"
            "2 - Feminno \n");
    printf("Digite o número referente ao seu sexo: ");
    scanf("%d", &sexo);

    switch (sexo) {
        case 1:
            printf("Sexo masculino \n");
            printf("Digite sua altura: ");
            scanf("%f", &altura);
            peso_ideal = (72.7 * altura) - 58;
            printf("Seu peso ideal é de %.2f kg. \n", peso_ideal);
            break;
        case 2:
            printf("Sexo feminino \n");
            printf("Digite sua altura: ");
            scanf("%f", &altura);
            peso_ideal = (62.1 * altura) - 44.7;
            printf("Seu peso ideal é de %.2f kg. \n", peso_ideal);
            break;
    }

    return (EXIT_SUCCESS);
}

