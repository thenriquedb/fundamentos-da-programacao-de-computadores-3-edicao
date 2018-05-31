/* 22) Este programa solicita ao usuarío suda idade e seu peso e mostra a categoria que ele se encaixa de acordo com uma tabela. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int idade;
    float peso;

    printf("Classificação de acordo com peso e idade \n\n");
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    if (idade < 20) {
        if (peso < 60) {
            printf("Sua categoria é 9");
        } else if (peso >= 60 && peso <= 90) {
            printf("Sua categoria é 8");
        } else if (peso > 90) {
            printf("Sua categoria é 7");
        }
    }//Encerramento idade < 20

    else if (idade >= 20 && idade <= 50) {
        if (peso < 60) {
            printf("Sua categoria é 6");
        } else if (peso >= 60 && peso <= 90) {
            printf("Sua categoria é 5");
        } else if (peso > 90) {
            printf("Sua categoria é 4");
        }
    }//Encerramento idade idade >= 20 && idade <= 50

    else if (idade > 50) {
        if (peso < 60) {
            printf("Sua categoria é 3");
        } else if (peso >= 60 && peso <= 90) {
            printf("Sua categoria é 2");
        } else if (peso > 90) {
            printf("Sua categoria é 1");
        }
    } //Encerramento idade idade >= 20 && idade <= 50
    
    printf(" \n \n");
    return (EXIT_SUCCESS);
}

