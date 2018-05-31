/*
12) Faça um programa que preencha um vetor com os modelos de cinco carros (exemplos 
de modelos: Fusca, Gol, Vectra etc). Carregue outro vetor com o consumo desses carros, 
isto é, quantos quilômetros cada um deles faz com um litro de combustível. Calcule e mostre:
    || o modelo de carro mais econômico; e
    || quantos litros de combustível cada um dos carros cadastrados consome para percorrer 
    uma distância de 1.000 km. 
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(int argc, char** argv) {

    /* Para armzenar os nomes dos veiculos, utilizei uma matriz,onde o primeiro 
    valor é a quantidade de strings a ser armzanezada e o segundo é o seu tamanho. */
    char n_car[TAM][15];
    int i, indice_enc;
    float consumo[TAM], redimento[TAM], economico;

    //Leitura dos nomes e dados dos veiculos
    for (i = 0; i < TAM; i++) {
        printf("CARRO %d\n", i + 1);
        printf("\tNome do carro: ");
        scanf("%s", &n_car[i]);
        printf("\tConsumo(KM/L): ");
        scanf("%f", &consumo[i]);
        redimento[i] = consumo[i] * 1000;
        printf("\n");
    }

    economico = consumo[0];

    printf("\nDADOS\n");
    for (i = 0; i < TAM; i++) {
        printf("\n%dº CARRO\n", i + 1);
        printf("Marca do veículo: %s\n", n_car[i]);
        printf("Consumo de combustivel: %.1f\n", consumo[i]);
        printf("Consumo em uma distância de 1000km: %.2f L\n", redimento[i]);
        printf("\n");

        //Verificar o mais economico
        if (consumo[i + 1] > economico) {
            economico = consumo[i + 1];
            indice_enc = i + 1;
        }
    }

    printf("\nO carro mais economico é o %s que faz %.1f por litro. \n", n_car[indice_enc], economico);


    return (EXIT_SUCCESS);
}

