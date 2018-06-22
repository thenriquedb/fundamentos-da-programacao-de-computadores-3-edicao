/*
7) Elabore um programa contendo uma sub-rotina que receba as três notas de um aluno como parâme-
tros e uma letra. Se a letra for A, a sub-rotina deverá calcular a média aritmética das notas do aluno; se
for P, deverá calcular a média ponderada, com pesos 5, 3 e 2. A média calculada deverá ser devolvida
ao programa principal para, então, ser mostrada.
 */

#include <stdio.h>
#include <stdlib.h>

float CalculoMedias(float nota1, float nota2, float nota3, char opcao) {
    float mediaA, mediaP;

    switch (opcao) {

        //Calcular a média simples
        case 'a':
            mediaA = (nota1 + nota2 + nota3) / 3;
            printf("\nA media aritimética das notas é de %.2f pontos. \n", mediaA);
            break;

        //Calcular a media ponderada (com pesos 5, 3 e 2)
        case 'p':
            mediaP = ((nota1 * 5)+(nota2 * 3)+(nota3 * 2)) / 10;
            printf("\nA media ponderada das notas é de %.2f pontos. \n", mediaP);
            break;

        default:
            printf("Opção inválida \n");
            break;
    }
}

int main(int argc, char** argv) {
    float n1, n2, n3;
    char opc;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    printf("Digite a opçcão desejada: ");
    scanf(" %c", &opc);

    CalculoMedias(n1, n2, n3, opc);

    return (EXIT_SUCCESS);
}



