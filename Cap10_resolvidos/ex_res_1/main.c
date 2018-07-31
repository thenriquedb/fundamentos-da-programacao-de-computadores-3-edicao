/*
1) Faça um programa que realize o cadastro de contas bancárias com as seguintes informações: número
da conta, nome do cliente e saldo. O banco permitirá o cadastramento de apenas 15 contas e não po-
derá haver mais que uma conta com o mesmo número. Crie o menu de opções a seguir.
Menu de opções:

1. Cadastrar contas.
2. Visualizar todas as contas de determinado cliente.
3. Excluir a conta com menor saldo (supondo a não existência de saldos iguais).
4. Sair.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 15

typedef struct {
    int num_conta;
    char nome[40];
    float saldo;
} Dados;

Dados Clientes[TAM];
int posConta = 0;

//Função para imprimir menu de opções
void Imprimir_Menu();

//Função para cadastrar clientes
void Cadastro(Dados *Clientes, int *pos);

//Visualizar todas as contas de determinado cliente
void Visualizar(Dados *Clientes, int pos);

//Visualizar para excluir a cinta com menor saldo
void Excluir(Dados *Clientes, int *pos);

int main(int argc, char** argv) {
    int opcao;

    do {
        Imprimir_Menu();

        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                Cadastro(Clientes, &posConta);
                break;
            case 2:
                Visualizar(Clientes, posConta);
                break;
            case 3:
                Excluir(Clientes, &posConta);
                break;
            case 4:
                printf("Programa encerrado. \n");
                break;
            default:
                printf("Opção inválida. \n\n");
        }
    } while (opcao != 4);

    return (EXIT_SUCCESS);

}


//-----------------------------------------------------------------------------//

void Imprimir_Menu() {
    printf("MENU \n");
    printf("\t 1. Cadastrar contas; \n");
    printf("\t 2. Visualizar todas as contas de determinado cliente; \n");
    printf("\t 3. Excluir a conta com menor saldo; \n");
    printf("\t 4. Sair \n\n");
}

//-----------------------------------------------------------------------------//

void Cadastro(Dados *Clientes, int *pos) {
    int Num_temp, i, achou = 0;

    printf("\n--------------------CADASTRO DE CLIENTES--------------------\n");

    if (*pos == TAM) {
        printf("Todas as contas ja foram cadastradas. \n");
    } else {
        printf("%dº Cliente \n", *pos + 1);

        /* O programa iria prosseguir somente quando o usuario digitar um número de conta
         que ainda não existe */

        do {
            printf("\tDgite o número da conta: ");
            scanf("%d", &Num_temp);
            achou = 0;

            for (i = 0; i < *pos + 1; i++) {
                if (Clientes[i].num_conta == Num_temp) {
                    achou = 1;
                }
            }
            if (achou == 1) {
                printf("Conta ja existente. Favor digitar um número diferente. \n");
            }
        } while (achou != 0);

        Clientes[*pos].num_conta = Num_temp;

        printf("\tDgite o nome do cliente: ");
        setbuf(stdin, NULL);
        gets(Clientes[*pos].nome);

        printf("\tDigite seu saldo: ");
        scanf("%f", &Clientes[*pos].saldo);

        *pos = *pos + 1;
    }
    printf("---------------------------------------------------------------------\n");
}

//-----------------------------------------------------------------------------//

void Visualizar(Dados *Clientes, int pos) {
    char nome[40];
    int cont = 0, i;

    printf("\n--------------VISUALIZAR CONTAS DE DETERMINADO CLIENTE-------------\n\n");

    printf("Digite o nome que deseja procurar: ");
    setbuf(stdin, NULL);
    gets(nome);

    for (i = 0; i < pos + 1; i++) {
        if (strcmp(nome, Clientes[i].nome) == 0) {
            cont++;
        }
    }

    if (cont == 0) {
        printf("Conta não existente. \n");
    } else {
        printf("O cliente %s possui %d contas em seu nome. \n", nome, cont);
    }

    printf("---------------------------------------------------------------------\n");
}
//-----------------------------------------------------------------------------//

void Excluir(Dados *Clientes, int *pos) {
    float menor_saldo = Clientes[0].saldo;
    int i, pos_menor;

    for (i = 0; i < *pos; i++) {
        if (Clientes[i].saldo < menor_saldo) {
            menor_saldo = Clientes[i].saldo;
            pos_menor = i;
        }
    }

    Clientes[pos_menor].num_conta = Clientes[*pos].num_conta;
    //Clientes[pos_menor].nome = Clientes[i].nome;
    Clientes[pos_menor].saldo = Clientes[*pos].saldo;
    printf("Conta excluida. \n");

    *pos = *pos - 1;

}
//-----------------------------------------------------------------------------//
