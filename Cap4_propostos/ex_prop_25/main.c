/*
25) Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, baseada no número de horas
extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela consulta
à tabela que se segue, na qual:
 *
 Tabela na pagina 94 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float hora, hr_extra, hr_falta, hr_f;

    printf("Codigo de gratificação  \n\n");
    printf("Digite o numero de horas extras: ");
    scanf("%f", &hr_extra);
    printf("Digite o numero de horas faltas: ");
    scanf("%f", &hr_falta);
    printf("\n \n");
    
    hr_f = (hr_falta / 3)*2;
    hora = hr_extra - hr_f;
    hora = hora * 60* (-1) ;

    if (hora >= 2400) {
        printf(" Você possui %.2f horas de trabalho \n", hora);
        printf(" Você receberá R$ 500,00 ");
    }

    else if (hora > 1800 && hora < 2400) {
        printf(" Você possui %.2f horas de trabalho \n", hora);
        printf(" Você receberá R$ 400,00 ");
    }

    else if (hora >= 1200 && hora < 1800) {
        printf(" Você possui %.2f horas de trabalho \n", hora);
        printf(" Você receberá R$ 300,00 ");
    }
else if (hora >= 600 && hora < 1200) {
        printf(" Você possui %.2f horas de trabalho \n", hora);
        printf(" Você receberá R$ 300,00 ");
    }

else if (hora < 600) {
        printf(" Você possui %.2f horas de trabalho \n", hora);
        printf(" Você receberá R$ 100,00 ");
    }
    
    return (EXIT_SUCCESS);

}