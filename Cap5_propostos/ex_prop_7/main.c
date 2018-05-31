/*
7) Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
    || a quantidade de pessoas com idade superior a 50 anos;
    || a média das alturas das pessoas com idade entre 10 e 20 anos;
    || a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int idade;
    int i, contMaior50, contEntre10e20, contPeso40;
    float altura, peso, somaAltura, mediaAltura, porcentagem;

    contEntre10e20 = 0;
    contMaior50 = 0;
    contPeso40 = 0;

    for (i = 1; i <= 5; i++) {
        printf("PESSOA %d \n", i);
        printf("    Digite sua idade: ");
        scanf("%d", &idade);
        printf("    Digite sua altura: ");
        scanf("%f", &altura);
        printf("    Digite seu peso: ");
        scanf("%f", &peso);
        printf("-----------------------------------------------------------\n");

        //Ira contar pessoas com idade maior que 50
        if (idade > 50) {
            contMaior50++;
        }

        //Fará a média da altura das pessoas com idade entre 10 e 20 anos
        if (idade >= 10 && idade <= 20) {
            somaAltura = somaAltura + altura;
            contEntre10e20++;
        }

        //Fara a porcentegem das pessoas com pessoa com peso menor que 40 kG
        if (peso < 40) {
            contPeso40++;
        }
    }
    mediaAltura = somaAltura / contEntre10e20;
    
    printf("    Total de pessoas com mais de 50 anos: %d; \n", contMaior50);
    printf("    Media de altura das pessoas entre 10 e 20 anos: %.2f; \n", mediaAltura);
    printf("    Percentual das pessoas com menos de 40 KG: %.1f%%; \n", porcentagem = contPeso40 * 100 / 5);

    return (EXIT_SUCCESS);
}

