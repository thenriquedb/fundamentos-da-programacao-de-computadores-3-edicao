/*
8) Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A — azul; P — preto; V — verde; e
C — castanho) e a cor dos cabelos (P — preto; C — castanho; L — louro; e R — ruivo) de seis pessoas, e que
calcule e mostre:
 *
    || a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
    || a média das idades das pessoas com altura inferior a 1,50 m;
    || a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; e
    || a quantidade de pessoas ruivas e que não possuem olhos azuis. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char cabelo, olhos;

    int idade, soma_idade;
    int i, cont1, cont2, cont3, cont4;

    float media_idade, per_olhoAzul, per_Ruiva;
    float peso, altura;

    cont1 = 0; //a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
    cont2 = 0; //a média das idades das pessoas com altura inferior a 1,50 m;
    cont3 = 0; //a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; e
    cont4 = 0; //a quantidade de pessoas ruivas e que não possuem olhos azuis. 

    for (i = 1; i <= 6; i++) {
        printf("PESSOA %d \n", i);
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        printf("Digite seu peso: ");
        scanf("%f", &peso);
        printf("Digite sua altura: ");
        scanf("%f", &altura);
        printf("Digite a cor dos olhos (A. Azul | P. Preto | V. Verde): ");
        scanf(" %c", &olhos);
        printf("Digite a cor dos cabelos (P. Preto | C. Castanho | L. Loura | R. Ruivo): ");
        scanf(" %c", &cabelo);
        printf("--------------------------------------------------------- \n");

        //Pessoas com mais de 50 anos.
        if (idade > 50 && peso < 60) {
            cont1++;
        }

        //Calculo da media de idade de pessoas com menos de 1.5 metros.
        if (altura < 1.5) {
            soma_idade = soma_idade + idade;
            cont2++;
        }

        //Calculo da porcentagem de pessoas com olhos azuais.
        if (olhos == 'A') {
            cont3++;
        }

        //Pessoas ruivas que não possuem olhos azuis.
        if (cabelo == 'R' && olhos != 'A') {
            cont4++;
        }
    }

    media_idade = soma_idade / cont2;
    per_olhoAzul = cont3 * 100 / 6;
    per_Ruiva = cont4 * 100 / 6;

    printf("DADOS FINAL \n");
        if (cont1 > 0) {
            printf("    Pessoas com mais de 50 anos: %d. \n", cont1);
        } else {
            printf("    Nenhuma pessoa com mais de 50 anos. \n");
        }

        if (cont2 > 0) {
            printf("    Porcentagem de pessoas com olhos azuis: %.1f. \n.", media_idade);
        } else {
            printf("    Nenhuma pessoa com menos de 1.5 metros de altura. \n");
        }

        if (cont3 > 0) {
            printf("    Porcentagem de pessoas com olhos azuis: %.1f. \n", per_olhoAzul);
        } else {
            printf("    Nenhuma pessoa com olho azual. \n");
        }

        if (cont4 > 0) {
            printf("    Porcentagem de pessoas ruivas que não possuem olhos azuis: %.1f. \n", per_Ruiva);
        } else {
            printf("    Nenhuma pessoa ruiva que não possui olhos azuis. \n");
        }

    return (EXIT_SUCCESS);
}

