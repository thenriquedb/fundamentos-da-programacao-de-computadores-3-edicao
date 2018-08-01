/*
6) Uma empresa contratou 15 funcionários temporários. De acordo com o valor das vendas mensais, os
funcionários ganham pontos que determinarão seus salários ao fim de cada mês. Sabe-se que eles tra-
balharão nos meses de novembro de 2011 a janeiro de 2012. Faça um programa que:

a) Cadastre os nomes dos funcionários e suas respectivas vendas mensais.
b) Calcule e mostre a pontuação geral de cada funcionário nos três meses. Sabe-se que R$ 100,00 equivalem a
1 ponto.
c) Calcule e mostre a pontuação geral de todos os funcionários a cada mês.
d) Determine e mostre a maior pontuação atingida nos três meses, mostrando o nome do funcionário. Deverão
ser desconsiderados empates.
e) Determine e mostre o valor total vendido.
 */

#include <stdio.h>
#include <stdlib.h>
#define FUNC 2

typedef struct {
    char nome[40];
    float vendas[3];
} Dados;

Dados Funcionarios[FUNC];

//Função para cadastrar os funcionarios
void Cadastro(Dados *Funcionarios);

//Função para calcular os pontos
void Calcular_Pontos_Individual(Dados *Funcionarios, int *pontos);

//Função para imprimir pontos
void Imprimir_Pontos(Dados *Funcionarios, int *pontos);

//Função para calcular o total vendido
float Calcular_Total(Dados *Funcionarios);


int main(int argc, char** argv) {
    int pontos[FUNC];

    Cadastro(Funcionarios);
    
    Calcular_Pontos_Individual(Funcionarios, pontos);
    
    Imprimir_Pontos(Funcionarios, pontos);
    
    printf("Total arrecado: R$ %.2f \n",Calcular_Total(Funcionarios));

    return (EXIT_SUCCESS);
}
//------------------------------------------------------------------------------

void Cadastro(Dados *Funcionarios) {
    int i, j;

    for (i = 0; i < FUNC; i++) {
        printf("%dº Funcionário \n", i + 1);
        printf("\tNome: ");
        setbuf(stdin, NULL);
        gets(Funcionarios[i].nome);


        printf("\tVendas do mês de novembro: ");
        scanf("%f", &Funcionarios[i].vendas[0]);

        printf("\tVendas do mês de dezembro: ");
        scanf("%f", &Funcionarios[i].vendas[1]);

        printf("\tVendas do mês de janeiro: ");
        scanf("%f", &Funcionarios[i].vendas[2]);
    }
}
//------------------------------------------------------------------------------

void Calcular_Pontos_Individual(Dados *Funcionarios, int *pontos) {
    int i, j, k, cont = 0;
    float total;

    for (i = 0; i < FUNC; i++) {
        pontos[i] = 0;
        total = 0;

        for (j = 0; j < 3; j++) {
            total += Funcionarios[i].vendas[j];
        }

        cont = total / 100; //Contagem de pontos
        pontos[i] = cont;
    }
}
//------------------------------------------------------------------------------

void Imprimir_Pontos(Dados *Funcionarios, int *pontos) {
    int i, p = 0, total = 0;
    int maior = pontos[0];

    printf("\nPontuação individual de cada funcionário: \n");
    for (i = 0; i < FUNC; i++) {
        printf("\t%s: %d pontos. \n", Funcionarios[i].nome, pontos[i]);

        //DEterminar a maior pontuação
        if (pontos[i] > maior) {
            maior = pontos[i];
            p = i;
        }

        total += pontos[i];
    }

    printf("\nPontuaão geral: %d \n", total);
    printf("A maior pontuação foi do funcionário %s que marcou %d pontos. \n", Funcionarios[p].nome, maior);
}
//------------------------------------------------------------------------------

float Calcular_Total(Dados *Funcionarios) {
    float total = 0;
    int i, j;

    for (i = 0; i < FUNC; i++) {
        for (j = 0; j < 3; j++) {
            total += Funcionarios[i].vendas[j];
        }
    }
    
    return total;
}