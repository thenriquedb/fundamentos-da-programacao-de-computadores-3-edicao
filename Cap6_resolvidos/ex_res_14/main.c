/*
14)Faça um programa que preencha três vetores com cinco posições cada. O primeiro vetor receberá os
nomes de cinco funcionários; o segundo e o terceiro vetor receberão, respectivamente, o salário e o
tempo de serviço de cada um. Mostre um primeiro relatório apenas com os nomes dos funcionários que não 
terão aumento; mostre um segundo relatório apenas com os nomes e os novos salários dos funcionários que 
terão aumento. Sabe-se que os funcionários que terão direito ao aumento são aqueles que possuem tempo 
de serviço superior a cinco anos ou salário inferior a R$ 800,00. Sabe-se, ainda, que, se o funcionário 
satisfizer às duas condições anteriores, tempo de serviço e salário, o aumento será de 35%; para o funcionário 
que satisfazer apenas à condição tempo de serviço, o aumento será de 25%; para aquele que satisfazer apenas à 
condição salário, o aumento será de 15%.
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(int argc, char** argv) {
    char nome[TAM][40];
    float salario[TAM], n_sal;
    int i, p = 0, p2 = 0, pCond1 = 0, pCond2 = 0, pCond3 = 0; //
    int i_aumento[TAM], i_Naumento[TAM], tempo[TAM], aum_cond1[TAM], aum_cond2[TAM], aum_cond3[TAM];

    /*OBS:
     * p e p2 são as posições dos vetores;
     * As variavés pCondN são responsaveis por controlar as posições dos indices de cada condição de aumento;  
     * Os vetores aum_condN[TAM] sçao responsaveis por armzenzar os indices de cada condição de aumento
     */

    for (i = 0; i < TAM; i++) {
        printf("%dº Funcióionario \n", i + 1);
        printf("\tNome: ");
        setbuf(stdin, NULL); //Limpar buffer do teclado
        gets(nome[i]);
        printf("\tSalário: ");
        scanf("%f", &salario[i]);
        printf("\tTempo de serviço: ");
        scanf("%d", &tempo[i]);
        printf("\n");
    }

    for (i = 0; i < TAM; i++) {
        //Bloco para verificar quem receberá e quem não receberá aumento
        if (tempo[i] > 5 || salario[i] < 800) {
            i_aumento[p] = i; // Indice dos funcionarios que receberão aumento
            p++;
        } else {
            i_Naumento[p2] = i; //Indice dos funcionarios que não receberão aumento
            p2++;
        }
        //-------------------------------------------------------------------//

        //Sastifaz as duas condiçoes
        if (tempo[i] > 5 && salario[i] < 800) {
            aum_cond1[pCond1] = i;
            pCond1++;
        }            
        //Sastifazm apenas a condição de tempo superior a 5 anos
        else if (tempo[i] > 5) {
            aum_cond2[pCond2] = i;
            pCond2++;
        }            
        //Sastifaz apenas a condição de salário inferior a R$ 800.00
        else if (salario[i] < 800) {
            aum_cond3[pCond3] = i;
            pCond3++;
        }
    }
    //Impressão dos funcionários que  receberão aumento
    if (p > 0) {
        printf("Funcionários que  terão direito ao aumento: \n");
        for (i = 0; i < p; i++) {
            printf("\t- %s \n", nome[i_aumento[i]]);
        }
    } else {
        printf("Nenhum funcionário terá direito a aumento.");
    }

    //Impressão dos funcionários que não receberão aumento
    if (p2 > 0) {
        printf("\nFuncionários que não terão direito ao aumento: \n");
        for (i = 0; i < p2; i++) {
            printf("\t-%s \n", nome[i_Naumento[i]]);
        }
    } else {
        printf("Todos os funcionários terão direito ao aumento.");
    }

    printf("\n-------------------------------------------------------------\n");
    //Salario inferior a R$ 800.00 e tempo de serviço superior a 5 anos
    if (pCond1 > 0) {
        printf("\nFuncionários que sastifazem as duas condições de aumento: ");
        for (i = 0; i < pCond1; i++) {
            printf("\n%dº Funcionário \n", i + 1);
            printf("\tNome: %s \n", nome[aum_cond1[i]]);
            printf("\tSalário antigo: R$ %.2f \n", salario[aum_cond1[i]]);
            printf("\tNovo salário: R$ %.2f \n", n_sal = salario[aum_cond1[i]] * 1.35);
        }
    } 
    printf("\n-------------------------------------------------------------");
    //Condição de tempo de serviço superior a 5 anos
    if (pCond2 > 0) {
        printf("\nFuncionários que sastifazem apenas a condição de tempo de serviço superior a 5 anos: ");
        for (i = 0; i < pCond2; i++) {
            printf("\n%dº Funcionário \n", i + 1);
            printf("\tNome: %s \n", nome[aum_cond2[i]]);
            printf("\tSalário antigo: R$ %.2f \n", salario[aum_cond2[i]]);
            printf("\tNovo salário: R$ %.2f \n", n_sal = salario[aum_cond2[i]] * 1.25);
        }
    } 
    //Condição de salário inferior a R$ 800.00
    if (pCond3 > 0) {
        printf("\nFuncionários que sastifazem apenas a condição de salário inferior a R$ 800.00: ");
        for (i = 0; i < pCond3; i++) {
            printf("\n%dº Funcionário \n", i + 1);
            printf("\tNome: %s \n", nome[aum_cond3[i]]);
            printf("\tSalário antigo: R$ %.2f \n", salario[aum_cond3[i]]);
            printf("\tNovo salário: R$ %.2f \n", n_sal = salario[aum_cond3[i]] * 1.15);
        }
    } 
    printf("\n-------------------------------------------------------------\n");
    return (EXIT_SUCCESS);
}

