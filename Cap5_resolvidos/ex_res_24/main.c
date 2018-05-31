#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int opcao;
    float sal, imposto, n_sal;

    //O programa será finalizado quando o usuario digitar 4 no menu de opções
    do {
        do {
            printf("MENU DE OPÇÕES: \n"
                    "   1. Imposto \n"
                    "   2. Novo salário \n"
                    "   3. Classificação \n"
                    "   4. Finalizar programa. \n\n");
            printf("Selecione uma opção: ");
            scanf("%d", &opcao);
            printf("\n ");

            switch (opcao) {
                case 1:
                    printf("\n Calculo de impostos \n");
                    printf("    Digite seu salário: ");
                    scanf("%f", &sal);

                    if (sal < 500) {
                        imposto = sal * 0.05;
                    }
                    else if (sal >= 500 && sal <= 850) {
                        imposto = sal * 0.10;
                    } 
                    else if (sal > 850) {
                        imposto = sal * 0.15;
                    }
                    printf("\n Você pagará R$ %.2f de impostos. \n", imposto);
                    break;

                case 2:
                    printf("\n Calculo de novo salário \n");
                    printf("    Digite seu salário: ");
                    scanf("%f", &sal);

                    if (sal < 450) {
                        n_sal = sal + 100;
                    } else if (sal >= 450 && sal < 750) {
                        n_sal = sal + 75;
                    }
                    else if (sal >= 750 && sal <= 1500) {
                        n_sal = sal + 50;
                    }
                    else if (sal > 1500) {
                        n_sal = sal + 25;
                    }
                    printf("Seu novo salário será de R$ %.2f. \n", n_sal);
                    break;

                case 3:
                    printf("Classificação \n");
                    printf("    Digite seu salário: ");
                    scanf("%f", &sal);
                    if (sal <= 700) {
                        printf("Mal remunerado. \n");
                    }
                    else if (sal > 700) {
                        printf("Bem remunerado. \n");
                    }
                    break;
                    
                default:
                    printf("Opção inválida. \n");
                    break;
            }
            printf("_____________________________________________________________ \n\n");
        } while (opcao >= 1 && opcao <= 3);
    } while (opcao != 4);

    return (EXIT_SUCCESS);
}

