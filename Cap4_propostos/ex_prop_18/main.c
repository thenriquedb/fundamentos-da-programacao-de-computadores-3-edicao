/*
18) Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade < 18) {
        printf("Você possui %d anos,portanto é menor de idade. \n", idade);
    } 
    else if (idade >= 18) {
        printf("Você possui %d anos,portanto é maior de idade. \n", idade);
    }
    else { //Se a idade for negativa caíra nessa condição.
        printf("Idade inválida \n");
    }
    return (EXIT_SUCCESS);
}

