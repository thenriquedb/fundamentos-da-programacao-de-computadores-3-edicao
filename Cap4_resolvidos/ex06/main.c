
/* Fundamentos da Programação de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

06) Faça um programa que receba um número inteiro e verifique se é par ou ímpar.*/


#include <stdio.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    int num,div;

    printf("Verificar se número é par ou impar \n\n");
    printf("Digite um número: ");
        scanf("%d",&num);

    div = num % 2; //Utiliza-se % para armazenar o resto da divisão.

    printf("\n\n");

    if (div == 0){ //== igual a...
        printf("O número %d é par. \n",num);
    }
    else {
        printf("O número %d é impar \n",num);
    }
return 0;
}
