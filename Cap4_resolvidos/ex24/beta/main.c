/* Fundamentos da Programação de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

  */

#include <stdio.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    char refrigeracao;;
    int tipo;
    float preco,categoria,n_preco;

    printf("Calculo de acressimo de preço \n\n");


    printf("Precisa de refrigeração? \n     S — produto que necessita de refrigeração;  \n     N — produto que não necessita de refrigeração): ");
    scanf("%s",&refrigeracao);
    printf("\n\n");

    switch (refrigeracao)
    {

//Necessita de refrigereação
    case 's':
        printf("\n\n");
        printf("Digite o tipo do produto (1 — alimentação; 2 — limpeza; e 3 — vestuário): ");
        scanf("%d",&tipo);
        printf("    Digite o preço do produto: ");
        scanf("%f",&preco);
        printf("\n");

        switch (tipo)
        {
        case 1:
            if (preco <=25)
            {
                printf("CATEGORIA DE ALIMENTAÇÃO \n");
                printf("Percebtual de aumento de 5%%. \n");
                n_preco = preco * 1.05 +
                printf("O novo preço será de R$ %.2f.",preco = preco * 1.05);
                printf("\n\n");
            }
            else if (preco > 25)
            {
                printf("CATEGORIA DE ALIMENTAÇÃO \n");
                printf("Percebtual de aumento de 12%%. \n");
                printf("O novo preço será de R$ %.2f.",preco = preco * 1.12);
                printf("\n\n");
            }
        }
        break;

    case 2:
        if (preco <=25)
        {
            printf("CATEGORIA DE ALIMENTAÇÃO \n");
            printf("Percebtual de aumento de 8%%. \n");
            printf("O novo preço será de R$ %.2f.",preco = preco * 1.05);
            printf("\n\n");
        }
        else if (preco > 25)
        {
            printf("CATEGORIA DE ALIMENTAÇÃO \n");
            printf("Percebtual de aumento de 15%%. \n");
            printf("O novo preço será de R$ %.2f.",preco = preco * 1.15);
            printf("\n\n");
        }
        break;

    case 3:
        if (preco <=25)
        {
            printf("CATEGORIA DE ALIMENTAÇÃO \n");
            printf("Percebtual de aumento de 8%%. \n");
            printf("O novo preço será de R$ 2.f.",preco = preco * 1.10);
            printf("\n\n");
        }
        else if (preco > 25)
        {
            printf("CATEGORIA DE ALIMENTAÇÃO \n");
            printf("Percebtual de aumento de 15%%. \n");
            printf("O novo preço será de R$ 2.f.",preco = preco * 1.18);
            printf("\n\n");
        }
        break;

        break;
    }


//Não necessita de refrigereação
    case 'n':
        printf("\n\n");
        printf("Digite o tipo do produto (1 — alimentação; 2 — limpeza; e 3 — vestuário): ");
        scanf("%d",&tipo);
        printf("    Digite o preço do produto: ");
        scanf("%f",&preco);
        printf("\n");

        switch (tipo)
        {
        case 1:
            if (preco <=25)
            {
                printf("CATEGORIA DE ALIMENTAÇÃO \n");
                printf("Percebtual de aumento de 5%%. \n");
                n_preco = preco * 1.05 +
                printf("O novo preço será de R$ %.2f.",preco = preco * 1.05);
                printf("\n\n");
            }
            else if (preco > 25)
            {
                printf("CATEGORIA DE ALIMENTAÇÃO \n");
                printf("Percebtual de aumento de 12%%. \n");
                printf("O novo preço será de R$ %.2f.",preco = preco * 1.12);
                printf("\n\n");
            }
        }
        break;

    case 2:
        if (preco <=25)
        {
            printf("CATEGORIA DE ALIMENTAÇÃO \n");
            printf("Percebtual de aumento de 8%%. \n");
            printf("O novo preço será de R$ %.2f.",preco = preco * 1.05);
            printf("\n\n");
        }
        else if (preco > 25)
        {
            printf("CATEGORIA DE ALIMENTAÇÃO \n");
            printf("Percebtual de aumento de 15%%. \n");
            printf("O novo preço será de R$ %.2f.",preco = preco * 1.15);
            printf("\n\n");
        }
        break;

    case 3:
        if (preco <=25)
        {
            printf("CATEGORIA DE ALIMENTAÇÃO \n");
            printf("Percebtual de aumento de 8%%. \n");
            printf("O novo preço será de R$ 2.f.",preco = preco * 1.10);
            printf("\n\n");
        }
        else if (preco > 25)
        {
            printf("CATEGORIA DE ALIMENTAÇÃO \n");
            printf("Percebtual de aumento de 15%%. \n");
            printf("O novo preço será de R$ 2.f.",preco = preco * 1.18);
            printf("\n\n");
        }
        break;

        break;
    }
}


