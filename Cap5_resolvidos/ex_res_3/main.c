/*
3) Faça um programa que leia um número N que indica quantos valores inteiros e positivos devem ser
lidos a seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial desse valor
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int quant, num;
    int i, j;
    int fat = 1;

    printf("Digite a quantidade de valores que devems ser lidos a seguir: ");
    scanf("%d", &quant);

    for (i = 1; i <= quant; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);

        for (j = 1; j <= num; j++) {
            fat = fat*j;
        }
        printf("Seu fatorial: %d \n\n", fat);
        fat = 1;
        //No fim do loop a  variavel fat deve receber 1 novamente senão ela vai utilizar o valor do fatorial anterior para calcular os demais.
    }


    return (EXIT_SUCCESS);


}

