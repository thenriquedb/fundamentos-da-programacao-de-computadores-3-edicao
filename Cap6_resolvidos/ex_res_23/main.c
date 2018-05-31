#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int janela[24], corredor[24];
    int op, op_lugar;
    int i, lug, cont;
    
    //Atribuir o valor 1 a todas as posiçoes dos vetores,assim deixando-as livres
    for (i = 0; i < 24; i++) {
        janela[i] = 0;
        corredor[i] = 0;
    }
    do { //Menu de opções
        printf("MENU DE OPÇOES \n");
        printf("\t1. Venda dde passagem \n");
        printf("\t2. Mapa de ocupação \n");
        printf("\t3. Encerrar \n");
        do {
            printf("Digite a opção desejada: ");
            scanf("%d", &op);
        } while (op > 3 || op <= 0); //Impedir que números ivalidos sejam digitads

        switch (op) {
            case 1:
                printf("\nVenda de passagem \n");
                printf("Você deseja janela ou corredor(1.Janela | 2.Corredor): ");
                scanf("%d", &op_lugar);

                //Verificar se o onibûs está lotado
                for (i = 0; i < 24; i++) {
                    if (janela[i] == 1) {
                        cont++;
                    }
                    if (corredor[i] == 1) {
                        cont++;
                    }
                }

                /*Quando todas as passagens forem compradas, cont está em 48 e irá dar a mensagem de onbûs lotado*/
                if (cont == 48) {
                    printf("Onibûs lotado. \n\n");
                }
                if (op_lugar == 1) { //Lugar na janela
                    printf("Digite o lugar desejado: ");
                    scanf("%d", &lug);

                    //Se a posição estiver = 0 ela esta livre,se não está ocupada
                    if (janela[lug - 1] == 0) {
                        printf("Lugar disponivel. Compra efetuada. \n");
                        janela[lug - 1] += 1;
                        cont++;
                        //Assim que a compra é feita é somado um na posição,assim deixando como ocupada
                    } else {
                        printf("Lugar já ocupado. \n");
                    }
                    lug = 0;
                }

                if (op_lugar == 2) { //Lugar no corredor
                    printf("Digite o lugar desejado: ");
                    scanf("%d", &lug);
                    //Se a posição estiver = 0 ela esta livre,se não está ocupada
                    if (corredor[lug - 1] == 0) {
                        printf("Lugar disponivel. Compra efetuada. \n");
                        corredor[lug - 1] += 1;
                        //Assim que a compra é feita é somado um na posição,assim deixando como ocupada
                    } else {
                        printf("Lugar já ocupado. \n");
                    }
                    lug = 0;
                }
                printf("\n----------------------------------------\n");
                break;

            case 2:
                printf("\nMapa de ocupação \n");
                //Mapa dos lugares nos corredores
                printf("Corredor: \n");
                for (i = 0; i < 24; i++) {
                    if (corredor[i] == 0) {
                        printf("\t%d. Poltrona livre \n", i + 1);
                    } else {
                        printf("\t%d. Poltrona ocupada \n", i + 1);
                    }
                }
                printf("\n");

                //Mapa dos lugares nas janelas
                printf("\nJanela: \n");
                for (i = 0; i < 24; i++) {
                    if (janela[i] == 0) {
                        printf("\t%d. Poltrona livre \n", i + 1);
                    } else {
                        printf("\t%d. Poltrona ocupada \n", i + 1);
                    }
                }
                printf("\n");
                break;

            case 3:
                printf("\nPrograma encerrado. \n\n");
                break;
        }
    } while (op != 3);

    return (EXIT_SUCCESS);
}