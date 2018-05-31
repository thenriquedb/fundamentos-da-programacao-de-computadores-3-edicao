/*
11) Faça um programa que receba o valor de um carro e mostre uma tabela com os seguintes dados: preço
final, quantidade de parcelas e valor da parcela. Considere o seguinte:
    || o preço final para compra à vista tem desconto de 20%;
    || a quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54 e 60; e
    || os percentuais de acréscimo encontram-se na tabela a seguir (tabela presente na pagina 148). 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int parcela;

    float vlr_veiculo, preco_prazo, preco_avista, juros;
    juros = 3;

    printf("Digite o valor do veículo: ");
    scanf("%f", &vlr_veiculo);

    preco_avista = vlr_veiculo - (vlr_veiculo * 0.2);
    printf("Preco a vista do veiculo R$ %.2f. \n\n", preco_avista);

    //Calculo das parcelas
    for (parcela = 6; parcela <= 60; parcela += 6) {
        printf("%d Parcelas \n", parcela);
        preco_prazo = vlr_veiculo + (vlr_veiculo * juros / 100);
        printf("    Total: R$ %.2f. \n", preco_prazo);
        printf("------------------------------------------ \n");
        juros += 3;
    }

    return (EXIT_SUCCESS);
}

