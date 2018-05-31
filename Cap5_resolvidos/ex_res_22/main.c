/*
22) Uma empresa decidiu fazer um levantamento em relação aos candidatos que se apresentarem para
preenchimento de vagas em seu quadro de funcionários. Supondo que você seja o programador dessa
empresa, faça um programa que leia, para cada candidato, a idade, o sexo (M ou F) e a experiência no
serviço (S ou N). Para encerrar a entrada de dados, digite zero para a idade.

O programa também deve calcular e mostrar:
    || o número de candidatos do sexo feminino;
    || o número de candidatos do sexo masculino;
    || a idade média dos homens que já têm experiência no serviço;
    || a porcentagem dos homens com mais de 45 anos entre o total dos homens;
    || o número de mulheres com idade inferior a 21 anos e com experiência no serviço;
    || a menor idade entre as mulheres que já têm experiência no serviço. 
 */

#include <stdio.h>
#include <stdlib.h>

/* BUGS:
    || Se entrar apenas com um funcionário o programa da erro;
    || Se entrar apenas com funcionarios do sexo feminino também da erro. */


int main(int argc, char** argv) {
    int i, contH, contF, sair;
    int contF_menos21, contH_mais45, contH_exp, contF_exp;
    int idade, soma_homem, menor_idade;

    float media_homem, per_homem;

    char sexo, experiencia;

    //Contadores
    i = 1;
    sair = 1;
    contF = 0; //Total de mulheres
    contH = 0; //Total de homens
    contF_menos21 = 0; //Total de mulheres com menos de 21 anos
    contH_exp = 0; //Total de homens com experiência.
    contH_mais45 = 0; //Total de homens com mais de 45 anos;
    
    menor_idade = 999999999;

    do {
        printf("%dº CANDITATO \n\n", i);
        printf("Digite seu sexo (M. Masculino | F. Feminino): ");
        scanf(" %c", &sexo);
        
        //Sexo masculino
        if (sexo == 'M') {
            printf("Digite sua idade: ");
            scanf("%d", &idade);
            printf("Você possui experiência no serviço (S. Sim | N. Não): ");
            scanf(" %c", &experiencia);

            if (experiencia == 'S') {
                soma_homem = soma_homem + idade;
                contH_exp++;
            }

            if (idade > 45) {
                contH_mais45++;
            }
            contH++;

        }//Sexo feminino
        else if (sexo == 'F') {
            printf("Digite sua idade: ");
            scanf("%d", &idade);
            printf("Você possui experiência no serviço (S. Sim | N. Não): ");
            scanf(" %c", &experiencia);

            if (experiencia == 'S') {

                if (idade < 21) {
                    contF_exp++;
                }

                menor_idade = idade;

                if (idade < menor_idade) {
                    menor_idade = idade;
                }
            }
            contF++;
        }

        i++;
       
        printf("Digite qualquer numero para continuar ou 0 para sair: ");
        scanf("%d", &sair);
        printf("_____________________________________________________________ \n");
    } while (sair != 0);

    media_homem = soma_homem / contH_exp;
    per_homem = contH_mais45 * 100/contH;

    printf("RESULTADO \n");

    //Verificar se teve candidatos do sexo masculino
    if (contH > 0) {
        printf("    Total de canditatos do sexo masculino: %d. \n", contH);
    } else {
        printf("    Nenhum canditato do sexo masculino. \n");
    }

    //Verificar se teve candidatos do sexo feminino
    if (contF > 0) {
        printf("    Total de canditatos do sexo feminino: %d. \n", contF);
        printf("    Menor idade das mulheres com experiência no serviço:  %d \n", menor_idade);

    } else {
        printf("    Nenhum canditato do sexo feminino. \n");
    }

    //Verificar media da idade de homens com experiência no serviço
    if (contH_exp > 0) {
        printf("    Media de idade de homens com experiência no serviço: %.2f. \n", media_homem);
    } else {
        printf("    Nenhum canditato masculino com experiência no serviço. \n");
    }

    //Verificar quantidade de homens com mais de 45 anos
    if (contH_mais45 > 0) {
        printf("    Percentual de homens com mais de 45 anos: %.2f. \n", per_homem);
    } else {
        printf("    Nenhum candiato masculino com mais de 45 anos. \n");
    }

    //Verificar mulheres com menos de 21 anos com experiência no serviço
    if (contF_menos21 > 0) {
        printf("    Quantidade de mulheres com menos de 21 anos com experiência no serviço: %d. \n", contF_exp);
    } else {
        printf("    Nenhum canditato feminino com menos de 21 anos e experência no serviço. \n");
    }
    
    return (EXIT_SUCCESS);
}