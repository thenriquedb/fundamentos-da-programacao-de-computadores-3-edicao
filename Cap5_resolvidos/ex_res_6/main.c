/*

 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int quant_horas ,codigo;
    int i;
    char turno, categoria;

    float aux_alimentacao;
    float sal_minimo, vlr_hr, sal_inicial, sal_final;

    sal_minimo = 450;

    printf("CALCULO DE SALÁRIO \n\n");

    for (i = 1; i <= 10; i++) {
        printf("Funcionário %d \n", i);
        printf("Digite seu codigo: ");
        scanf("%d", &codigo);
        printf("Digite o número de horas de trabalhadas: ");
        scanf("%d", &quant_horas);

        //O usuario poderá entrar apenas com valores validos
        do {
            printf("Digite seu turno (M. Matutino | V. Vespertino | N.Noturno): ");
            scanf(" %c", &turno);
        } while (turno != 'M' && turno != 'V' && turno != 'N');

        do {
            printf("Digite sua categoria (G. Gerente | O. Operário): ");
            scanf(" %c", &categoria);
        } while (categoria != 'O' && categoria != 'G');

        //Se funcionário for operário;
        if (categoria == 'O') {
            if (turno == 'M' || turno == 'V') {
                vlr_hr = sal_minimo * 0.1;
                sal_inicial = quant_horas * vlr_hr;
            } else if (turno == 'N') {
                vlr_hr = sal_minimo * 0.13;
                sal_inicial = quant_horas * vlr_hr;
            }
        }//Se funcionário for gerente;
        else if (categoria == 'G') {
            if (turno == 'M' || turno == 'V') {
                vlr_hr = sal_minimo * 0.15;
                sal_inicial = quant_horas * vlr_hr;
            } else if (turno == 'N') {
                vlr_hr = sal_minimo * 0.18;
                sal_inicial = quant_horas * vlr_hr;
            }
        }

        //Calculo do auxilio alimentação;
        if (sal_inicial < 300) {
            aux_alimentacao = sal_inicial * 0.20;
            sal_final = sal_inicial + aux_alimentacao;
        }
        else if (sal_inicial >= 300 && sal_inicial <= 600) {
            aux_alimentacao = sal_inicial * 0.15;
            sal_final = sal_inicial + aux_alimentacao;
        }
        else if (sal_inicial > 600) {
            aux_alimentacao = sal_inicial * 0.05;
            sal_final = sal_inicial + aux_alimentacao;
        }
        
        printf("___________________________________________________________ \n");
        printf("Folha de pagamento do funcionário de codigo %d \n",codigo);
        printf("    Número de horas trabalahdas: %d horas. \n",quant_horas);
        printf("    Salário inicial: R$ %.2f. \n", sal_inicial);
        printf("    Auxilio alimentação: R$ %.2f. \n", aux_alimentacao);
        printf("    Salário final: R$ %.2f. \n", sal_final);
        
        /*Os valores devem ser zerados ao fim de cada loop para os novos valores serem calculados.*/
        aux_alimentacao = 0;
        sal_final = 0;
        sal_inicial = 0;
        
        printf("\n");
    }
    return (EXIT_SUCCESS);
}

