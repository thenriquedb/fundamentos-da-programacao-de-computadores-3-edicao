/*
10) Uma empresa do ramo de material esportivo deseja ter um controle automatizado dos funcionários
que trabalham em cada uma de suas filiais. Sabe-se que essa empresa possui quatro filiais com quatro
vendedores e um gerente em cada uma delas. Todos devem ser cadastrados como funcionários.
Faça um programa que realize esse controle, com as seguintes rotinas:

a) Cadastrar filial, observando que não podem existir duas filiais com o mesmo número.
b) Cadastrar funcionário, observando que: 1) não podem existir dois funcionários com o mesmo número; 2)
cada funcionário deve ser cadastrado em uma filial; e 3) cada filial pode ter apenas um gerente e no máximo
quatro vendedores;
c) Criar uma consulta a todas as filiais, mostrando o nome do gerente e dos vendedores, o valor total gasto com
pagamento de salários por filial e o valor gasto com pagamento de salário geral.
 
 Filial             Funcionário
Numero_filial       Numero_filial
Nome_filial         Codigo_funcionario
                    Nome_funcionario
                    Cargo
                    Salario
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FIL 4
#define FUNC 16

//Struct Filial
typedef struct {
    int num;
    char nome[40];
    char nome_gerente[40];
    char nome_func[4][40];
    int cont_gerente;
    int cont_func;
    float total_salario;
} Dados_Filial;

//Struct funcionarios
typedef struct {
    int num_filial;
    int codigo;
    char nome[40];
    char cargo;
    float salario;
} Dados_Funcionario;

//Variaveis globais
    int cont_func[4]; //Contagem de funcionário por filial
    float total_pagamento = 0; //Irá receber a soma do salario de todas as filiais

    Dados_Filial Filiais[FIL];
    Dados_Funcionario Funcionarios[FUNC];

//Função para cadastrar as filiais
void Cadastrar_Filiais(Dados_Filial *Filiais);

//Função para cadastrar os funcionarios
void Cadastrar_Funcionarios(Dados_Funcionario *Funcionarios, Dados_Filial *Filiais);

//Função para verificar se o numero da filial digitado é um número valido
int Verificar_filial(Dados_Funcionario *Funcionarios, Dados_Filial *Filiais, int pos);

//Função para verifcar se o codigo do funcionário ja existe
int Verificar_Codigo(Dados_Funcionario *Funcionarios, int pos);

//Funcao para verificar se aquela filial possui vagas ou ja esta com o quadro de funcionarios completos
int Verificar_Disponibilidade(Dados_Funcionario *Funcionarios, Dados_Filial *Filiais, int pos, char cargo, int *cont_func);

//Função para imprimir dados das filiais
void Imprimir(Dados_Filial *Filiais, float *total);

//Função para calcular total de salario da filial e de o total de todas as filiais somadas
void Calcular_Total(Dados_Funcionario *Funcionarios, Dados_Filial *Filiais, int pos_func, float *total);

int main(int argc, char** argv) {
    int i;

    //Limpar sujeira das variaveis
    for (i = 0; i < 4; i++) {
        cont_func[i] = 0;
    }

    for (i = 0; i < FIL; i++) {
        Filiais[i].total_salario = 0;
    }

    Cadastrar_Filiais(Filiais);

    Cadastrar_Funcionarios(Funcionarios, Filiais);

    Imprimir(Filiais, &total_pagamento);

    return (EXIT_SUCCESS);
}
//------------------------------------------------------------------------------

void Cadastrar_Filiais(Dados_Filial *Filiais) {
    int i, j, achou = 0;

    for (i = 0; i < FIL; i++) {
        printf("CADASTRO FILIAIS \n\n");

        printf("Filial Nº %d \n", i + 1);

        //Verificar se o numero da filial digitado ja existe
        do {
            printf("\tNumero da filial: ");

            scanf("%d", &Filiais[i].num);
            achou = 0;

            for (j = 0; j < FIL; j++) {
                if (Filiais[j].num == Filiais[i].num) {
                    achou++;
                }
            }
        } while (achou != 1);

        printf("\tNome: ");
        setbuf(stdin, NULL);
        gets(Filiais[i].nome);

        Filiais[i].cont_func = 0;
        Filiais[i].cont_gerente = 0;

        system("clear");
    }
}
//------------------------------------------------------------------------------

void Cadastrar_Funcionarios(Dados_Funcionario *Funcionarios, Dados_Filial *Filiais) {
    int i, j, achou = 0, pos;
    char cargo;


    for (i = 0; i < FUNC; i++) {
        printf("CADASTRO DE FUNCIONÁRIOS \n\n");

        printf("%dº Funcionário \n", i + 1);

        //Verificar se o numero da filial é valido
        do {
            printf("\tNúmero filial: ");

            scanf("%d", &Funcionarios[i].num_filial);
            pos = i;

        } while (Verificar_filial(Funcionarios, Filiais, i) != 1);

        //Verificar se o codigo do funcionario ja existe
        do {
            printf("\tCodigo do funcionário: ");
            scanf("%d", &Funcionarios[i].codigo);
        } while (Verificar_Codigo(Funcionarios, i) != 1);

        printf("\tNome: ");
        setbuf(stdin, NULL);
        gets(Funcionarios[i].nome);


        do {
            do {
                printf("\tCargo(G. Gerente ou F. Funcionário): ");
                scanf(" %c", &Funcionarios[i].cargo);
            } while (Funcionarios[i].cargo != 'G' && Funcionarios[i].cargo != 'F');

            cargo = Funcionarios[i].cargo;

        } while (Verificar_Disponibilidade(Funcionarios, Filiais, i, cargo, cont_func) != 1);

        printf("\tSalário: ");
        scanf("%f", &Funcionarios[i].salario);

        Calcular_Total(Funcionarios, Filiais, i, &total_pagamento);
        system("clear");
    }
}

//------------------------------------------------------------------------------

int Verificar_filial(Dados_Funcionario *Funcionarios, Dados_Filial *Filiais, int pos) {
    int i, achou = 0;

    for (i = 0; i < FIL; i++) {
        if (Funcionarios[pos].num_filial == Filiais[i].num) {
            achou++;
        }
    }
    return achou;

}
//------------------------------------------------------------------------------

int Verificar_Codigo(Dados_Funcionario *Funcionarios, int pos) {
    int i, achou = 0;

    for (i = 0; i < FUNC; i++) {
        if (Funcionarios[pos].codigo == Funcionarios[i].codigo) {
            achou++;
        }
    }

    return achou;
}
//------------------------------------------------------------------------------

int Verificar_Disponibilidade(Dados_Funcionario *Funcionarios, Dados_Filial *Filiais, int pos, char cargo, int *cont_func) {

    int i, p;

    for (i = 0; i < FIL; i++) {
        if (Funcionarios[pos].num_filial == Filiais[i].num) {
            p = i;
        }
    }

    if (Funcionarios[pos].cargo == 'G') {

        if (Filiais[p].cont_gerente == 0) {
            Filiais[p].cont_gerente = 1;
            printf("\tGerente cadastrado com sucesso! \n");

            strcpy(Filiais[p].nome_gerente, Funcionarios[pos].nome);

            return 1;

        } else {
            printf("\tEsta filial ja possui um gerente. \n");
            return 0;
        }
    } else {
        if (Filiais[p].cont_func < 4) {
            Filiais[p].cont_func++;
            printf("\tFuncionário cadastrado com sucesso. \n");

            strcpy(Filiais[p].nome_func[cont_func[p]], Funcionarios[pos].nome);

            cont_func[p]++;

            return 1;
        } else {
            printf("\tQuadro de funcionário completo. \n");
            return 0;
        }
    }
}
//------------------------------------------------------------------------------

void Calcular_Total(Dados_Funcionario *Funcionarios, Dados_Filial *Filiais, int pos, float *total) {
    int i, p;

    //Armazenar posição da filial escolhida
    for (i = 0; i < FIL; i++) {
        if (Funcionarios[pos].num_filial == Filiais[i].num) {
            p = i;
        }
    }

    Filiais[p].total_salario += Funcionarios[pos].salario;

    *total = *total + Filiais[p].total_salario;
}
//------------------------------------------------------------------------------

void Imprimir(Dados_Filial *Filiais, float *total) {
    int i, j;

    printf("\nRELATORO DAS FILIAIS \n\n");

    for (i = 0; i < FIL; i++) {
        printf("FILIAL %d \n", i + 1);
        printf("\tNome: %s \n", Filiais[i].nome);
        printf("\tNúmero: %d \n", Filiais[i].num);
        printf("\tNome do gerente: %s \n\n", Filiais[i].nome_gerente);

        printf("Nome dos funcionarios: \n");
        for (j = 0; j < 4; j++) {
            printf("\t\t%dº Funcionario: %s \n", j + 1, Filiais[i].nome_func[j]);
        }

        printf("Total de gasto com salario nessa filial: R$ %.2f \n", Filiais[i].total_salario);
    }

    printf("\nTotal gasto em todas as filiais juntas: R$ %.2f \n", total);
}
//------------------------------------------------------------------------------