/* . 1) Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float n1, n2, n3,n4,media;
    
    printf("Calculo da medía das notas \n\n");
    
    printf("Digite a 1º nota: ");
     scanf("%f",&n1);
    printf("Digite a 2º nota: ");
     scanf("%f",&n2);
    printf("Digite a 3º nota: ");
     scanf("%f",&n3);
    printf("Digite a 4º nota: ");
     scanf("%f",&n4);        
     printf("\n\n");
     
media  = (n1 + n2 + n3 + n4) / 4;

    if (media >= 7) {
        printf("Você foi aprovado! \n");
        printf("Sua média foi de %.2f pontos. \n",media);
    }
    
    else {
        printf("Você foi reprovado. \n");
        printf("Sua média foi de %.2f pontos \n",media);
    }
    return (EXIT_SUCCESS);
}