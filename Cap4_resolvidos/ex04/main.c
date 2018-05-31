
/* Fundamentos da Programação de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

04) Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o usuário digitará três números diferentes. */

#include <stdio.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecem.
    int n1,n2,n3;

    printf("Números em ordem crescente \n\n");
    printf("Digite 3 números inteiros diferentes. \n\n");

    printf("    Digite um número: ");
        scanf("%d",&n1);
    printf("    Digite um número: ");
        scanf("%d",&n2);
     printf("   Digite um número: ");
        scanf("%d",&n3);

    printf("\n\n");
    //Condiçoes
        if ((n1 > n2) && (n2 > n3)){
            printf("A ordem crescente dos números é: %d,%d,%d \n",n3,n2,n1);
        }
        else if ((n1 > n3) && (n2 >n3)) {
            printf("A ordem crescente dos números é: %d,%d,%d \n",n2,n3,n1);
        }
        else if ((n2 > n1) && (n1 >n3)) {
            printf("A ordem crescente dos números é: %d,%d,%d \n",n3,n1,n2);
        }
        else if ((n2 > n3) && (n3 >n1)) {
            printf("A ordem crescente dos números é: %d,%d,%d \n",n1,n3,n2);
        }
        else if ((n3 > n1) && (n1 >n2)) {
            printf("A ordem crescente dos números é: %d,%d,%d \n",n2,n1,n3);
        }
        else if ((n3 > n2) && (n2 >n1)) {
            printf("A ordem crescente dos números é: %d,%d,%d \n",n1,n2,n3);
        }
        else { //Se todas as opçoes forem falsas,essa será executada.
            printf("Digites números diferentes \n\n");
        }
return 0;
}
