/*
8) Faça um programa que preencha um vetor com os nomes de sete alunos e carregue outro vetor com a média
final desses alunos. Calcule e mostre:
 
    || o nome do aluno com maior média (desconsiderar empates);
    || para cada aluno não aprovado, isto é, com média menor que 7, mostrar quanto esse aluno precisa tirar
na prova de exame final para ser aprovado. Considerar que a média para aprovação no exame é 5. 
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 7

int main(int argc, char** argv) {
    char nome[TAM][40];
    float media[TAM], maior_media = 0;
    int i, indice_maior;

    for (i = 0; i < TAM; i++) {
        printf("%dº Aluno\n", i + 1);
        printf("Nome: ");
        setbuf(stdin, NULL); //Limpar buffer
        gets(nome[i]);
        printf("Media final: ");
        scanf("%f", &media[i]);
        printf("\n");
        
        if (media[i] > maior_media) {
            maior_media = media[i];
            indice_maior = i;
        }
    }

    printf("A maior média foi de %.2f pontos, do(a) aluno(a) %s\n", maior_media, nome[indice_maior]);
    
    printf("\nAlunos abaixo da média: \n");
    for (i = 0; i < TAM; i++) {
        if(media[i] < 7) {
         //Não entendi a logica para calcular a nota do exame final
            printf("\t%s está abaixo da média.Para ele ser aprovado precisa tirar mais de 5 no exame final.\n",nome[i]);
        }
    }

    return (EXIT_SUCCESS);
}
