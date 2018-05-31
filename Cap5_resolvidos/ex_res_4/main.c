/*
4) Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito.
 * 
Foram obtidos os seguintes dados:
a) código da cidade;
b) número de veículos de passeio;
c) número de acidentes de trânsito com vítimas.
 * 
Deseja-se saber:
a) qual é o maior e qual é o menor índice de acidentes de trânsito e a que cidades pertencem;
b) qual é a média de veículos nas cinco cidades juntas;
c) qual é a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    //Dadados das cidades
    int codigo, num_veic, num_acidente;
    int codigo2, num_veic2, num_acidente2;
    int codigo3, num_veic3, num_acidente3;
    int codigo4, num_veic4, num_acidente4;
    int codigo5, num_veic5, num_acidente5;

    //Indice de acidentes
    float indice1, indice2, indice3, indice4, indice5;
    float media_5cidades, media_acidente;

    int i;

    printf("CIDADE 1 \n");
    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigo);
    printf("Número de veiculo de passeio: ");
    scanf("%d", &num_veic);
    printf("Digite o número de acidentes de trânsito: ");
    scanf("%d", &num_acidente);
    printf("------------------------------- \n \n");

    printf("CIDADE 2 \n");
    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigo2);
    printf("Número de veiculo de passeio: ");
    scanf("%d", &num_veic2);
    printf("Digite o número de acidentes de trânsito: ");
    scanf("%d", &num_acidente2);
    printf("------------------------------- \n \n");

    printf("CIDADE 3 \n");
    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigo3);
    printf("Número de veiculo de passeio: ");
    scanf("%d", &num_veic3);
    printf("Digite o número de acidentes de trânsito: ");
    scanf("%d", &num_acidente3);
    printf("------------------------------- \n \n");

    printf("CIDADE 4 \n");
    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigo4);
    printf("Número de veiculo de passeio: ");
    scanf("%d", &num_veic4);
    printf("Digite o número de acidentes de trânsito: ");
    scanf("%d", &num_acidente4);
    printf("------------------------------- \n \n");

    printf("CIDADE 5 \n");
    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigo5);
    printf("Número de veiculo de passeio: ");
    scanf("%d", &num_veic5);
    printf("Digite o número de acidentes de trânsito: ");
    scanf("%d", &num_acidente5);
    printf("------------------------------- \n \n");

    // Calculos dos indices dos acidentes
    indice1 = num_veic / num_acidente;
    indice2 = num_veic2 / num_acidente2;
    indice3 = num_veic3 / num_acidente3;
    indice4 = num_veic4 / num_acidente4;
    indice5 = num_veic5 / num_acidente5;

    if ((indice1 > indice2) && (indice1 > indice3) && (indice1 > indice4) && (indice1 > indice5)) {
        printf("A cidade 1 tem o maior indice de acidentes. \n");

    } else if ((indice2 > indice1) && (indice2 > indice3) && (indice2 > indice4) && (indice2 > indice5)) {
        printf("A cidade 2 tem o maior indice de acidentes. \n");

    } else if ((indice3 > indice1) && (indice3 > indice2) && (indice3 > indice4) && (indice3 > indice5)) {
        printf("A cidade 3 tem o maior indice de acidentes. \n");

    } else if ((indice4 > indice1) && (indice4 > indice2) && (indice4 > indice3) && (indice4 > indice5)) {
        printf("A cidade 4 tem o maior indice de acidentes. \n");

    } else if ((indice5 > indice1) && (indice5 > indice2) && (indice5 > indice3) && (indice5 > indice4)) {
        printf("A cidade 4 tem o maior indice de acidentes. \n");
    }
    //Fim do calculo do indice de acidentes

    media_5cidades = (num_veic + num_veic2 + num_veic3 + num_veic4 + num_veic5) / 5;
    printf("A média de veículo das 5 cidades somadas é de %.2f. \n", media_5cidades);

    if (num_veic < 2000) {
        printf("A media de acidentes da Cidade 1 é %.2f \n", media_acidente = num_veic / num_acidente);
    }
    if (num_veic2 < 2000) {
        printf("A media de acidentes da Cidade 2 é %.2f \n", media_acidente = num_veic2 / num_acidente2);
    }
    if (num_veic3 < 2000) {
        printf("A media de acidentes da Cidade 3 é %.2f \n", media_acidente = num_veic3 / num_acidente3);
    }
    if (num_veic4 < 2000) {
        printf("A media de acidentes da Cidade 4 é %.2f \n", media_acidente = num_veic3 / num_acidente3);
    }
    if (num_veic5 < 2000) {
        printf("A media de acidentes da Cidade 5 é %.2f \n", media_acidente = num_veic3 / num_acidente3);
    }

    return (EXIT_SUCCESS);
}

