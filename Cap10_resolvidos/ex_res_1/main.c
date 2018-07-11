/*
1) Faça um programa que realize o cadastro de contas bancárias com as seguintes informações: número
da conta, nome do cliente e saldo. O banco permitirá o cadastramento de apenas 15 contas e não po-
derá haver mais que uma conta com o mesmo número. Crie o menu de opções a seguir.
 
 Menu de opções:
1. Cadastrar contas.
2. Visualizar todas as contas de determinado cliente.
3. Excluir a conta com menor saldo (supondo a não existência de saldos iguais).
4. Sair
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 15

int main(int argc, char** argv) {
    int i, j, opcao;

    void Opcao1();
    void Opcao2();
    void Opcao3();

   //Estrutura de conta
    struct conta {
        int numero_conta;
        int saldo;
        char nome;
    } Clientes[TAM];

    for (i = 0; i < TAM; i++) {
        printf("MENU DE OPÇÕES \n");
        printf("\t1. Cadastrar contas\n");
        printf("\t2. Visualizar todas as contas de determinado cliente\n");
        printf("\t3. Excluir a conta com menor saldo\n");

        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                Opcao1();
                break;
            case 2:
                Opcao2();
                break;
            case 3:
                Opcao3();
                break;
        }
    }

    return (EXIT_SUCCESS);
}


void Opcao1() {
    printf("CADASTRO DE CONTAS \n");
    
}