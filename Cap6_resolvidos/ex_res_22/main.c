/*
22) Faça um programa que simule um controle bancário. Para tanto, devem ser lidos os códigos de dez
contas e seus respectivos saldos. Os códigos devem ser armazenados em um vetor de números inteiros
(não pode haver mais de uma conta com o mesmo código) e os saldos devem ser armazenados em um
vetor de números reais. O saldo deverá ser cadastrado na mesma posição do código. Por exemplo, se
a conta 504 foi armazenada na quinta posição do vetor de códigos, seu saldo deverá ficar na quinta
posição do vetor de saldos. Depois de fazer a leitura dos valores, deverá aparecer o seguinte menu na
tela:
1. Efetuar depósito
2. Efetuar saque
3. Consultar o ativo bancário, ou seja, o somatório dos saldos de todos os clientes
4. Finalizar o programa

|| para efetuar depósito, deve-se solicitar o código da conta e o valor a ser depositado. Se a conta não
estiver cadastrada, deverá aparecer a mensagem Conta não encontrada e voltar ao menu. Se a conta existir, 
atualizar seu saldo;

||para efetuar saque, deve-se solicitar o código da conta e o valor a ser sacado. Se a conta não estiver
cadastrada, deverá aparecer a mensagem Conta não encontrada e voltar ao menu. Se a conta existir, verificar 
se o seu saldo é suficiente para cobrir o saque. (Estamos supondo que a conta não possa ficar com o saldo 
negativo.) Se o saldo for suficiente, realizar o saque e voltar ao menu. Caso contrário, mostrar a mensagem 
Saldo insuficiente e voltar ao menu;

|| para consultar o ativo bancário, deve-se somar o saldo de todas as contas do banco. Depois de
mostrar esse valor, voltar ao menu;

|| o programa só termina quando for digitada a opção 4 — Finalizar o programa. 
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main(int argc, char** argv) {
    int i, j ,opc, v;
    int cod[TAM], codigo, i_deposito, i_saque;
    float saldo[TAM], vlr_deposito, vlr_saque, soma_saldos = 0;

    /* LEGENDA:
        vlr_d: Valor do deposito;
        vlr_saque: Valor do saque;
        i_deposito: Indice deposito;
        i_saque: Indice saque;
        v: Verificar se os codigos digitados ja existe
     */

    for (i = 0; i < TAM; i++) {
        printf("\n%dº Cliente\n", i + 1);

        do {
            printf("\tCodigo da conta: ");
            scanf("%d", &cod[i]);
            v = 0;
            
            //Laço para verificar se o codigo digitado existe
            for (j = 0; j < TAM; j++) {
                if (cod[i] == cod[j]) {
                    v++;
                }
            }
            if (v > 1) {//Caso o codigo ja existe será solicitado que o usuario digite outro
                printf("\tERRO! Codigo já existente.Favor digite outro. \n");
            }
        } while (v != 1);

        printf("\tDigite seu saldo: ");
        scanf("%f", &saldo[i]);
    }
    printf("\n");
    
    do {
        printf("MENU DE OPÇÕES\n");
        printf("\t1. Efetuar depósito; \n");
        printf("\t2. Efetuar saque; \n");
        printf("\t3. Consultar o ativo bancário; \n");
        printf("\t4. Finalizar programa; \n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opc);

        switch (opc) {

            //Opçao 1 - Deposito
            case 1:
                printf("\nOPC 1: DEPÓSITO \n");
                printf("\tDigite o codigo de sua conta: ");
                scanf("%d", &codigo);

                //Verificar se o codigo digitado existe
                v = 0;
                for (i = 0; i < TAM; i++) {
                    if (codigo == cod[i]) {
                        v++;
                        i_deposito = i;
                    }
                }
                if (v > 0) {
                    printf("\tDigite o valor a ser depositado: ");
                    scanf("%f", &vlr_deposito);
                    saldo[i_deposito] += vlr_deposito;
                    printf("\tNovo saldo: R$ %.2f \n", saldo[i_deposito]);
                } else {
                    printf("\tConta não encontrada. \n");
                }
                break;

            //Opção 2 - Saque
            case 2:
                printf("\nOPC 2: SAQUE \n");
                printf("\tDigite o codigo de sua conta: ");
                scanf("%d", &codigo);

                //Verificar se o codigo digitado existe
                v = 0;
                for (i = 0; i < TAM; i++) {
                    if (codigo == cod[i]) {
                        v++;
                        i_saque = i;
                    }
                }
                if (v > 0) {
                    printf("\tDigite o valor a ser sacado: ");
                    scanf("%f", &vlr_saque);

                    if (vlr_saque > saldo[i_saque]) {
                        printf("\tSaldo insuficiente. \n");
                    } else {
                        saldo[i_saque] = saldo[i_saque] - vlr_saque;
                        printf("\tNovo saldo: R$ %.2f \n", saldo[i_saque]);
                    }
                } else {
                    printf("\tConta não encontrada. \n");
                }
                break;

            //Opção 3 - Ativo bancário
            case 3:
                printf("\nOPC 3: ATIVO BANCÁRIO \n");
                soma_saldos = 0;
                for (i = 0; i < TAM; i++) {
                    soma_saldos += saldo[i];
                }
                printf("\tA soma de todos os saldos bancários é de R$ %.2f. \n", soma_saldos);
                break;
                
            //Opção 4 - Encerrar programa
            case 4:
                printf("Programa encerrado. \n");
                break;

            default:
                printf("\nOpção inválida. \n");
        }
        printf("-------------------------------------------------------\n");
    } while (opc != 4);

    return (EXIT_SUCCESS);
}