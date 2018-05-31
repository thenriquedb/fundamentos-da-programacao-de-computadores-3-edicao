/*
6) Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba
o código e o valor de quinze transações, calcule e mostre:

    || o valor total das compras à vista;
    || o valor total das compras a prazo;
    || o valor total das compras efetuadas; e
    || o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    char pagamento;
    int i;
    float parcelas, valor, somaP, somaV, soma_total, total_1parcela;
    
    somaP = 0;
    somaV = 0;
    soma_total = 0;

    for (i = 1; i <= 2; i++) {
        printf("%dº TRANSAÇÃO \n", i);
        printf("Digite o valor da transação: ");
        scanf("%f", &valor);
        printf("Digite o valor (V. Vista | P. Prazo): ");
        scanf(" %c", &pagamento);
        
        switch (pagamento) {
            case 'V':
                somaV += valor;
                break;

            case 'P':
                somaP += valor;
                break;
        }

        soma_total += valor;
    }

    total_1parcela = somaP / 3;
    
    printf("\n TOTAL \n");
    printf("    Total das compras a vista: R$ %.2f. \n", somaV);
    printf("    Total das compras a prazo: R$ %.2f. \n", somaP);
    printf("    Total das compras efetuadas: R$ %.2f. \n", soma_total);
    printf("    Total das 1º Parcelas em 3 vezes: R$ %.2f. \n", total_1parcela);

    return (EXIT_SUCCESS);
}

