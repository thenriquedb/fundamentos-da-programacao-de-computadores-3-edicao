/*
13) Foi feita uma pesquisa para determinar o índice de mortalidade infantil em certo período. Faça um
programa que:
    ||leia o número de crianças nascidas no período;
    ||identifique o sexo (M ou F) e o tempo de vida de cada criança nascida.

 O programa deve calcular e mostrar:
    ||a percentagem de crianças do sexo feminino mortas no período;
    ||a percentagem de crianças do sexo masculino mortas no período;
    ||a percentagem de crianças que viveram 24 meses ou menos no período.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char sexo;

    int num_crianca, tempo_vida;
    int i, contM = 0, contF = 0, cont_tempo = 0;

    float perc_masculino, perc_feminino, perc_tempo;

    printf("TAXA DE MORTALIDADE DE CRIANÇAS \n\n");
    printf("Digite o número de crianças nascidas no periodo: ");
    scanf("%d", &num_crianca);
    printf("\n");

    for (i = 1; i <= num_crianca; i++) {
        printf("%dº Criança \n", i);
        printf("Digite o sexo da criança: ");
        scanf(" %c", &sexo);

        if (sexo == 'm' || sexo == 'M') {
            contM++;
        } else if (sexo == 'f' || sexo == 'F') {
            contF++;

        } else {
            printf("Sexo inválido. \n");
        }

        printf("Digite o tempo de vida (em meses): ");
        scanf("%d", &tempo_vida);

        if (tempo_vida >= 24) {
            cont_tempo++;
        }
        printf("\n");
    }

    perc_masculino = (contM * 100) / num_crianca;
    perc_feminino = (contF * 100) / num_crianca;
    perc_tempo = (cont_tempo * 100) / num_crianca;

    printf("Percentual de crianças do sexo masculino que morreram nesse periodo: %.1f %%. \n", perc_masculino);
    printf("Percentual de crianças do sexo feminino que morreram nesse periodo: %.1f %%. \n", perc_feminino);
    printf("Percentual de crianças que viveram mais de 24 meses: %.2f %%. \n", perc_tempo);
    return (EXIT_SUCCESS);
}

