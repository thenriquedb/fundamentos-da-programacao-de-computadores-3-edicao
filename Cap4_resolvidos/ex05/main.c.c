
/* Fundamentos da Programação de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

05) . Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto número que não siga essa regra.
Mostre, em seguida, os quatro números em ordem decrescente. Suponha que o usuário digitará quatro números diferentes.*/


#include <stdio.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecem.
    int n1,n2,n3,n4;

    printf("Números em ordem decresente \n \n");
    printf("Digite três numéros em ordem CRESENTE. \n");

    printf("    Digite um número: ");
        scanf("%d",&n1); // Menor numero
    printf("    Digite um número: ");
        scanf("%d",&n2);
    printf("    Digite um número: ");
        scanf("%d",&n3); //Maior numero

    printf(" \n");
    printf("Digite um número fora da ordem: ");
        scanf("%d",&n4);
    printf("\n\n");

    //Condiçoes
    if ( n4 > n3){
        printf("A ordem decresente dos números é: %d,%d,%d,%d.",n4,n3,n2,n1);
    }
    else if  (n4 > n2){
        printf(" ordem decresente dos números é: %d,%d,%d,%d.",n3,n2,n4,n1);
    }
    else if  (n4 > n1){
        printf(" ordem decresente dos números é: %d,%d,%d,%d.",n3,n4,n2,n1);
    }
     else if  (n4 < n1){
        printf(" ordem decresente dos números é: %d,%d,%d,%d.",n4,n3,n2,n1);
    }

}
