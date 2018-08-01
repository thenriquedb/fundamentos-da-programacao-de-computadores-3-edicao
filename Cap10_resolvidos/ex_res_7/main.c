/*
7) Crie um programa para ler o código, o sexo (M — masculino; F — feminino) e o número de horas-
-aula ministradas pelos professores de uma escola durante um mês. Sabe-se que um professor ganha
R$ 60,50 hora-aula e que a escola possui dez professores. Após a leitura, o programa deverá mostrar:
 n
a) Uma listagem contendo o código, o salário bruto, o desconto e o salário líquido de todos o professores.
b) A média aritmética dos salários brutos dos professores do sexo masculino.
c) A média aritmética dos salários brutos dos professores do sexo feminino.
Os descontos devem ser assim calculados:
 */

#include <stdio.h>
#include <stdlib.h>
#define PROF 2

typedef struct {
    int codigo;
    char sexo;
    int horas;
} Dados;

Dados Professores[PROF];

//Função para fazer a leitura dos dados
void Leitura(Dados *Professores);

//Função para imprimir os dados de cada professor
void Imprimir(Dados *Professores);

//Função para calcular salario desconto
float Calcular_Desconto(float sal_bruto, char sexo, int hr);

//Função para calcular media do salario bruto dos professores do sexo masculino
float Calcular_Media_Salarios(Dados *Professores, float *media);

int main(int argc, char** argv) {
    float medias[2];

    Leitura(Professores);

    Imprimir(Professores);

    Calcular_Media_Salarios(Professores, medias);
    
    printf("\nA media do salario bruto dos professores do sexo masculino é de R$ %.2f; \n",medias[0]);
    printf("A media do salario bruto dos professores do sexo feminino é de R$ %.2f; \n",medias[1]);

    return (EXIT_SUCCESS);
}
//------------------------------------------------------------------------------

void Leitura(Dados *Professores) {
    int i;

    printf("CADASTRO DE PROFESSORES \n");

    for (i = 0; i < PROF; i++) {
        printf("%dº Professor \n", i + 1);

        printf("\tCodigo: ");
        scanf("%d", &Professores[i].codigo);

        do {
            printf("\tSexo(M. Masculino ou F. Feminino): ");
            scanf(" %c", &Professores[i].sexo);
        } while (Professores[i].sexo != 'M' && Professores[i].sexo != 'F');

        printf("\tNúmero de aulas ministradas: ");
        scanf("%d", &Professores[i].horas);

        system("clear");
    }

    printf("Cadastro concluido. \n");
}

//------------------------------------------------------------------------------

void Imprimir(Dados *Professores) {
    int i;
    float salario_bruto, sal_liquido, desconto;

    printf("LISTAGEM DE TODOS OS PROFESSORES CADASTRADOS ");
    for (i = 0; i < PROF; i++) {
        printf("\n%dº Professor \n", i + 1);

        printf("\tCodigo: %d \n", Professores[i].codigo);
        printf("\tSexo: %c \n", Professores[i].sexo);

        salario_bruto = Professores[i].horas * 60.50;
        desconto = Calcular_Desconto(salario_bruto, Professores[i].sexo, Professores[i].horas);

        printf("\tSalario bruto: R$ %.2f \n", salario_bruto);
        printf("\tDesconto: R$ %.2f \n", desconto);
        printf("\tSalario liquido: R$ %.2f \n", sal_liquido = salario_bruto - desconto);
    }

}
//------------------------------------------------------------------------------

float Calcular_Desconto(float sal_bruto, char sexo, int hr) {
    float desconto;

    //Se sexo = Masculino então
    if (sexo == 'M') {
        if (hr <= 70) {
            desconto = sal_bruto * 0.10;
        } else {
            desconto = sal_bruto * 0.08;
        }
    }//Se sexo = Feminino então
    else {
        if (hr <= 70) {
            desconto = sal_bruto * 0.07;
        } else {
            desconto = sal_bruto * 0.05;
        }
    }

    return desconto;
}
//------------------------------------------------------------------------------

float Calcular_Media_Salarios(Dados *Professores, float *media) {
    float totalM = 0, totalF = 0, sal;
    int i, contM = 0, contF = 0;

    for (i = 0; i < PROF; i++) {
        if (Professores[i].sexo == 'M') {
            sal = Professores[i].horas * 60.50;
            totalM += sal;
            contM++;
        } 
        
        else {
            sal = Professores[i].horas * 60.50;
            totalF += sal;
            contF++;
        }
    }

    media[0] = totalM / contM;
    media[1] = totalF / contF;

}
//------------------------------------------------------------------------------
