/*
3) Faça um programa para controlar o estoque de mercadorias de uma empresa. Inicialmente, o programa deverá
preencher dois vetores com dez posições cada, onde o primeiro corresponde ao código do produto e o
segundo, ao total desse produto em estoque. Logo após, o programa deverá ler um conjunto indeterminado
de dados contendo o código de um cliente e o código do produto que ele deseja comprar, juntamente com a
quantidade. Código do cliente igual a zero indica fim do programa. O programa deverá verificar:
 
|| se o código do produto solicitado existe. Se existir, tentar atender ao pedido; caso contrário, exibir
mensagem Código inexistente;

|| cada pedido feito por um cliente só pode ser atendido integralmente. Caso isso não seja possível,
escrever a mensagem Não temos estoque suficiente dessa mercadoria. Se puder atendê-lo, escrever
a mensagem Pedido atendido. Obrigado e volte sempre;

|| efetuar a atualização do estoque somente se o pedido for atendido integralmente;

|| no final do programa, escrever os códigos dos produtos com seus respectivos estoques já atualizados. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int TAM = 10; //Constante do tamanho dos vetores

    int cod_produto[TAM], quant_prod[TAM];
    int cod_cliente = 1, quant_cliente, cod_prod_cliente;
    int i, ver_estoque = 0;

    printf("Informação do estoque \n");
    for (i = 0; i < TAM; i++) {
        printf("\tDigite o codigo do %dº produto: ", i + 1);
        scanf("%d", &cod_produto[i]);
        printf("\tDigite a quantidade no estoque: ");
        scanf("%d", &quant_prod[i]);
        printf("\n");
    }
    printf("--------------------------------------------------------\n");

    printf("DADOS DO ESTOQUE \n\n");
    printf("CODIGO DO PRODUTO \t\t QUANTIDADE \n");
    for (i = 0; i < TAM; i++) {
        printf("\t%d \t\t\t %d \n", cod_produto[i], quant_prod[i]);
    }

    printf("\nInformação do cliente \n");
    while (cod_cliente != 0) {
        printf("Digite o seu codigo: ");
        scanf("%d", &cod_cliente);

        //Se o codigo do cliente for = 0 o programa será encerrado
        if (cod_cliente == 0) {
            printf("Programa encerrado \n");
            break;
        }

        printf("Digite o codigo do seu produto: ");
        scanf("%d", &cod_prod_cliente);

        printf("Digite a quantidade desejada: ");
        scanf("%d", &quant_cliente);

        /*Se o codigo digitado for valído e a quantidade solicita estiver disponivel,
        será feita a compra e a atualização dos estoque. Caso contrário será exibida uma mensagem de erro*/
        for (i = 0; i < TAM; i++) {
            if (cod_produto[i] == cod_prod_cliente && quant_prod[i] >= quant_cliente) {
                printf("Pedido atendido. Volte sempre. \n");
                quant_prod[i] = quant_prod[i] - quant_cliente;
                ver_estoque++; //Variavel usada para verificar o estoque.
            }
        }

        if (ver_estoque == 0) {
            printf("\nNão temos estoque suficiente dessa mercadoria. \n\n");
        }

        printf("\nESTOQUE ATUALIZADO \n");
        printf("CODIGO DO PRODUTO \t\t QUANTIDADE \n");
        for (i = 0; i < TAM; i++) {
            printf("\t%d \t\t\t %d \n", cod_produto[i], quant_prod[i]);
        }
        printf("\n");
    }

    return (EXIT_SUCCESS);
}

