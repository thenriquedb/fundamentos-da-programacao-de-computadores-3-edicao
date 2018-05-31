/*
11) Faça um programa para corrigir provas de múltipla escolha. Cada prova tem oito questões e cada
questão vale um ponto. O primeiro conjunto de dados a ser lido é o gabarito da prova. Os outros dados
são os números dos alunos e as respostas que deram às questões. Existem dez alunos matriculados.

Calcule e mostre:
    || o número e a nota de cada aluno; e
    || a porcentagem de aprovação, sabendo-se que a nota mínima é 6.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char gab[8], res[8];

    float p;

    int num;
    int pontos = 0, aprovados = 0;
    int i, j, k;

    printf("Digite o gabarito \n");
    for (i = 0; i < 8; i++) {
        printf("\tDigite a resposta da questão %d: ", i + 1);
        scanf(" %c", &gab[i]);
    }

    //Entrada das respostas pelos alunos
    printf("\n\nCORREÇÃO DAS PROVAS \n");
    for (i = 0; i < 10; i++) {
        printf("Aluno %d \n", i);
        printf("\tDigite seu número: ");
        scanf("%d", &num);
        pontos = 0; /*A variavél pontos deve ser zerada a cada novo laço*/

        for (j = 0; j < 8; j++) {
            printf("\tDigite a resposta da questão %d: ", j + 1);
            scanf(" %c", &res[j]);
            if (res[j] == gab[j]) {
                pontos++;
            }
        }

        printf("\nNota do aluno de número %d: %d pontos. \n", num, pontos);
        if (pontos >= 6) { //Calculo da porcentagem de aprovados
            aprovados++;
        }
        printf("------------------------------------------------\n");
    }
    printf("Total de alunos que tirou mais de 6: %d \n", aprovados);
    printf("Porcentagem de alunos aprovados %.2f \n", p = aprovados * 100 / 10);

    return (EXIT_SUCCESS);
}

