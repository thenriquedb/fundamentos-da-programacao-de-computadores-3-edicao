/*
8) Crie uma sub-rotina que receba como parâmetro a hora de início e a hora de término de um jogo,
ambas subdivididas em dois valores distintos: horas e minutos. A sub-rotina deverá retornar a duração
expressa em minutos, considerando que o tempo máximo de duração de um jogo é de 24 horas e que
ele pode começar em um dia e terminar no outro.
 */

#include <stdio.h>
#include <stdlib.h>

int DuracaoPartida(int horaI, int minI, int horaT, int minT);

int main(int argc, char** argv) {
    int hr_inicio, min_inicio, hr_termino, min_termino;

    printf("Inicio \n");
    printf("\tHora: ");
    scanf("%d", &hr_inicio);
    printf("\tMin: ");
    scanf("%d", &min_inicio);

    printf("\nTermino \n");
    printf("\tHora: ");
    scanf("%d", &hr_termino);
    printf("\tMin: ");
    scanf("%d", &min_termino);

    printf("\nA partida teve duração de %d minutos. \n", DuracaoPartida(hr_inicio, min_inicio, hr_termino, min_termino));

    return (EXIT_SUCCESS);
}

int DuracaoPartida(int horaI, int minI, int horaT, int minT) {
    int HRinicio_min, HRTermino_min, duracao = 0;

    /* Como a partida pode iniciar em um dia e terminar no outro, basta somar 24 no maior valor */

    //Para caso de partidas de 12 horas
    if (horaI - horaT == 12 || horaT - horaI == 12) {
        duracao = 12 * 60;
    } 
    
    else if (HRinicio_min > HRTermino_min) {
        //Responsael por converter os horarios de incio e termino para minutos
        HRinicio_min = (horaI + 24) * 60 + minI;
        HRTermino_min = horaT * 60 + minT;

        duracao = (HRinicio_min - HRTermino_min);
    } 
    
    else if (HRTermino_min > HRinicio_min) {
        //Responsael por converter os horarios de incio e termino para minutos
        HRinicio_min = horaI * 60 + minI;
        HRTermino_min = (horaT + 24) * 60 + minT;

        duracao = (HRTermino_min - HRinicio_min);
    }

    return duracao;
}