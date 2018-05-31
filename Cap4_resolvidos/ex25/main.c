  /*O programa abaixo le um angulo e o numero de voltas dadas
    e mostra na tela em que quadradante o angulo escolhido esta.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float angulo;
    int voltas,resto;

    printf("Digite o valor do ângulo(em graus) e aperte Enter:");
    scanf("%f%*c",&angulo);
    if(angulo > 360 || angulo < -360){
        voltas = angulo / 360;
        resto = angulo / 360;
    }
    else {
        voltas = 0;
    }
    if(angulo == 0 || angulo == 180 || angulo == 270 || angulo == 360 || angulo == -90 || angulo == -180 || angulo == -270 || angulo == -360){
        printf("Esta sobre um desse eixos:\n");
    }

    if(angulo > 0 && angulo < 90 || angulo < -270 && angulo > -360){
        printf("Primeiro Quadrante\n");

    } else if(angulo > 90 && angulo < 180 || angulo < -180 && angulo > -270){
        printf("Segundo Quadrante\n");

    } else if(angulo > 180 && angulo < 270 || angulo < -90 && angulo > -180){
        printf("Terceiro Quadrante\n");

    } else if(angulo > 270 && angulo < 360 || angulo < 0 && angulo > -90){
        printf("Quarto Quadrante\n");
    }
    printf("Foram dadas %d voltas no sentido ",voltas);

    if(angulo < 0){
        printf("horário");

    } else if(angulo > 0){
        printf("anti-horário");

    } else {
        printf("Não foram dadas voltas");
    }
    return 0;
}
