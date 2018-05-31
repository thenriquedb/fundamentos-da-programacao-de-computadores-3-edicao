/*
9) Faça um programa que efetue reserva de passagens aéreas de uma companhia. O programa deverá ler
informações sobre os voos (número, origem e destino) e o número de lugares disponíveis para doze
aviões (um vetor para cada um desses dados). Depois da leitura, o programa deverá apresentar um
menu com as seguintes opções:
    || consultar;
    || efetuar reserva; e
    || sair.
 
Quando a opção escolhida for Consultar, deverá ser disponibilizado mais um menu com as seguintes
opções:
    || por número do voo;
    || por origem; e
    || por destino.
 
Quando a opção escolhida for Efetuar reserva, deverá ser perguntado o número do voo em que a pessoa
deseja viajar. O programa deverá dar as seguintes respostas:
    || reserva confirmada — caso exista o voo e lugar disponível, dando baixa nos lugares disponíveis;
    || voo lotado — caso não exista lugar disponível nesse voo;
    || voo inexistente — caso o código do voo não exista.
 
A opção Sair é a única que permite encerrar a execução do programa. Sendo assim, após cada operação
de consulta ou reserva, o programa volta ao menu principal. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//strcmpi // comparar string

int main(int argc, char** argv) {
    int TAM = 12;
    int opc, opc_consultar;
    int quant_lugares[TAM], num_voo[TAM];
    int i, j;


    printf("\t\tCONTROLE DE PASSAGENS \n\n");

    printf("INFORMAÇÕES SOBRE OS VOOS \n");

    //Leitura da quantidade de lugares em cada avião e os número dos voos
    for (i = 0; i < TAM; i++) {
        printf("\tDigite a quantidade de lugares do avião %d: ", i + 1);
        scanf("%d", &quant_lugares[i]);

        printf("\tDigite os números dos voos: ");
        scanf("%d", &num_voo[i]);
        printf("\n");
    }

    do {
        printf("-------------------------------------------------------------\n");
        printf("MENU DE OPÇÕES \n");
        printf("1. Consultar \n");
        printf("2. Efetuar reserva \n");
        printf("3. Sair \n\n");

        do { //O usário não poderá digitar valores inválidos.
            printf("Digite a opção desejada: ");
            scanf("%d", &opc);
            if (opc <= 0 || opc > 3) {
                printf("Opção inválida. Por favor digite uma opção válida para prosseguir. \n\n");
            }
        } while (opc <= 0 || opc > 3);

        printf("-------------------------------------------------------------\n");

        switch (opc) {
            case 1:
                printf("VOCÊ DESEJA: \n");
                printf("1. Consultar por número de voo \n");
                printf("2. Consultar por origem \n");
                printf("3. Consultar por destino \n\n");
                printf("Digite a opção desejada: ");
                scanf("%d", &opc_consultar);
                switch (opc_consultar) {
                    case 1:
                        break;

                    case 2:
                        break;

                    case 3:
                        break;
                }

                break;

            case 2:

                break;

            case 3:
                printf("Programa encerrado. \n");
                break;
        }
    } while (opc != 3);

    return (EXIT_SUCCESS);
}

