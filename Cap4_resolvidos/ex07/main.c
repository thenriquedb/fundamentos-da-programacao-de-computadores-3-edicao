
/* Fundamentos da Programação de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

7) Faça um programa que receba quatro valores: I, A, B e C. Desses valores, I é inteiro e positivo, A, B e C são reais. Escreva os números A, B e C
obedecendo à tabela a seguir. Suponha que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3, e que os números digitados sejam
diferentes um do outro.

    VALOR DE I           FORMAAESCREVER
        1           A,B e C em ordem crescente.
        2           A,B e C em ordem decrescente.
        3           O maior fica entre os outros dois números.
*/


#include <stdio.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    int I;
    float A,B,C;

    printf("Digite um número entre 1, 2 e 3: ");
    scanf("%d",&I);

    printf("\n\n");
    printf("Digite três números diferentes. \n\n");
    printf("    Digite o primeiro número: ");
      scanf("%f",&A);
    printf("   Digite o segundo número: ");
      scanf("%f",&B);
    printf("   Digite o terceiro número: ");
      scanf("%f",&C);
    printf("\n\n");

    if (I == 1)
    {
        if ((A < B) && (B < C));
        printf("A ordem crescente dos números digitados é:%.0f,%.0f,%.0f \n\n",A,B,C);
    }

    else if (I == 2 )
    {
        if ((A < B) && (B < C));
        printf("A ordem decrescente dos números digitados é:%.0f,%.0f,%.0f \n\n",C,B,A);
    }

    else if (I == 3)
    {
        if((A > B && A > C))
        {
            printf("O número maior está no meio: \n");
            printf("%.0f - %.0f - %.0f \n\n",B,A,C);
        }

        if((B > A && B > C))
        {
            printf("O número maior está no meio: \n");
            printf("%.0f - %.0f - %.0f \n\n",A,B,C);
        }

        if ((C > B && C > A))
        {
            printf("O número maior está no meio: \n");
            printf("%.0f - %.0f - %.0f \n\n",A,C,B);
        }
    }

    else
    {
        printf("Programa não pode ser executado! \n\n");
    }

    system("pause");
    return 0;
}
