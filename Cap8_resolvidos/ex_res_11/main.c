/*
11) Foi realizada uma pesquisa sobre algumas características físicas de cinco habitantes de uma região.
Foram coletados os seguintes dados de cada habitante: sexo, cor dos olhos (A — azuis; ou C — casta-
nhos), cor dos cabelos (L — louros; P — pretos; ou C — castanhos) e idade. Faça um programa que
apresente as sub-rotinas a seguir:

    || Que leia esses dados, armazenando-os em vetores.
    || Que determine e devolva ao programa principal a média de idade das pessoas com olhos castanhos
e cabelos pretos.
    || Que determine e devolva ao programa principal a maior idade entre os habitantes.
    || Que determine e devolva ao programa principal a quantidade de indivíduos do sexo feminino com
idade entre 18 e 35 anos (inclusive) e que tenham olhos azuis e cabelos louros.
 */

#include <stdio.h>
#include <stdlib.h>
#define DIM 2


// Para facilitar o uso da struct, usei o typedef para renomear seu tipo
typedef struct {
    char sexo;
    char cor_cabelo;
    char cor_olhos;
    int idade;
} Dados;

Dados Habitantes[DIM]; //Declaração da variavel habitantes do tipo Dados


//Função responsavel pela leitura dos dados
void LeituraDados() {
    int i;
    for (i = 0; i < DIM; i++) {
        printf("%d° Habitante \n", i + 1);

        printf("\tSexo (M. Masculino ou F. Feminino): ");
        scanf(" %c", &Habitantes[i].sexo);

        printf("\tCor dos olhos (A. Azul, ou C. Castanho): ");
        scanf(" %c", &Habitantes[i].cor_olhos);

        printf("\tCor do cabelo (L. Louro, C. Castanho ou P.Preto): ");
        scanf(" %c", &Habitantes[i].cor_cabelo);

        printf("\tIdade: ");
        scanf("%d", &Habitantes[i].idade);

        printf("\n");
    }
}


//Função responsavel por calcular a media de idade das pessoas com olhos castanhos ee cabelos pretos

float Media_Idade_Olhos_Castanhos(Dados hab[]) {
    int i, cont = 0;
    float soma = 0, media;

    for (i = 0; i < DIM; i++) {
        if (hab[i].cor_olhos == 'C' && hab[i].cor_cabelo == 'P') {
            soma += hab[i].idade;
            cont++;
        }
    }

    media = soma / cont;
    return media;
}


//Função responsavel por pegar a maior idade entre os habitantes
int Maior_Idade(Dados hab[]) {
    int i, maior = hab[0].idade;

    for (i = 1; i < DIM; i++) {
        if (hab[i].idade > maior) {
            maior = hab[i].idade;
        }
    }
    return maior;
}

/*Função responsavel por contar a quantidade de mulheres com idade entre 18 e 35 anos(inclusive) com olhos azuis e cabelos louros */
int Mulheres_OlhosAzuis_e_Loiras(Dados hab[]) {
    int i, cont = 0;

    for (i = 0; i < DIM; i++) {
        if ((hab[i].idade >= 18 && hab[i].idade <= 35) && (hab[i].sexo == 'F')) {
            cont++;
        }
    }

    return cont;
}

int main(int argc, char** argv) {
    LeituraDados();
    printf("--------------------------------------------------------------\n");
    printf("RELATÓRIO \n");
    printf("A media de idade das pessoas com olhos castanhos é de %.1f anos. \n", Media_Idade_Olhos_Castanhos(Habitantes));
    printf("A maior idade entre os habitantes é %d anos. \n", Maior_Idade(Habitantes));
    
    if (Mulheres_OlhosAzuis_e_Loiras(Habitantes) > 0) {
        printf("Existe %d mulheres entre 18 e 35 anos com olhos azuis e loiras. \n", Mulheres_OlhosAzuis_e_Loiras(Habitantes));
    } else {
        printf("Não existe nenhuma mulher entre 18 e 35 anos com olhos azuis e loiras. \n");
    }
    return (EXIT_SUCCESS);
}