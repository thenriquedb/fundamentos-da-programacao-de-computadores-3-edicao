/* 1) Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra na tabela a seguir: 

 * MÉDIA aritmética        mensagem
 *0,0 3,0                 Reprovado
 **3,0 7,0                 Exame
 *7,0 10,0                Aprovado
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 
{
    float media, n1, n2;
    printf("Calculo de média \n\n");

    printf("Digite a 1º nota: ");
    scanf("%f", &n1);
    printf("Digite a 2º nota: ");
    scanf("%f", &n2);
    printf("\n \n");
    
    media = n1 + n2 / 2;
    
    if (media >=0 && media <3) {
        printf("Você está reprovado \n");
        printf("Sua média foi de %.2f pontos.",media);
    }
    
    else if (media >=3 && media < 7) {
        printf("Você está em exame \n");
        printf("Sua média foi de %.2f pontos.",media);
    }
    
    else if (media >=7 && media <=10) {
        printf("Você está aprovado! \n");
        printf("Sua média foi de %.2f pontos.",media);
    }
    
    else {
        printf("Notas inválidas. \n");
    }
    return (EXIT_SUCCESS);

}
