
/* Fundamentos da Programação de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

01) Faça um programa que receba dois números e mostre o maior. */

#include <stdio.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.

int main()

{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecem.
    int n1,n2;

    printf("Descubra qual numéro é maior! \n \n");
    printf("Digite um número: ");
        scanf("%d",&n1);
    printf("Digite um número: ");
        scanf("%d",&n2);
    printf("\n");

    if(n1 > n2) {
        printf("%d é maior que %d",n1,n2);
    }
    else {
        printf("%d é maior que %d. \n\n",n2,n1);
    }

return 0;
}
