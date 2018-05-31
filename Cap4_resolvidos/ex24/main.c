#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Esse programa calculará o o valor de um produto conforme certas condições..*/


    float preco,imposto,custo,desconto;
    char tipo,refrig;

    printf("Digite o preço do produto e aperte Enter:R$:");
     scanf("%f%*c",&preco);
    printf("Digite o preço do produto e aperte Enter:\n");
    printf("'A'-Alimentação\n'L'-Limpeza\n'V'-Vestuário\n");
     scanf("%c%*c",&tipo);
    printf("Digite o tipo de refrigeração do produto e aperte Enter:\n");
    printf("'S'-Produto que precisa de refrigeração\n'N'-Produto que não precisa de refrigeração\n");
     scanf("%c%*c",&refrig);

    switch(refrig){
    case 'N':
        switch(tipo){
        case 'A':
            if(preco < 15){
                preco = preco + 2;
                printf("O valor adicional será de R$2.00\n");
            } else if(preco >= 15){
                preco = preco + 5;
                printf("O valor adicional será de R$5.00\n");
            }
            break;
        case 'L':
            if(preco < 10){
                preco = preco + 1.50;
                printf("O valor adicional será de R$1.50\n");
            } else if(preco >= 10){
                preco = preco + 2.50;
                printf("O valor adicional será de R$2.50\n");
        }
        break;
        case 'V':
            if(preco < 30){
                preco = preco + 3;
                printf("O valor adicional será de R$3.00\n");
            } else if(preco >= 30){
                preco = preco + 2.5;
                printf("O valor adicional será de R$2.50\n");
            }
            break;
        default:
            printf("Digite valores válidos!\n");
    }
    break;
        case 'S':
        switch(tipo){
        case 'A':
            preco = preco + 8;
            printf("O valor adicional será de R$8.00\n");
            break;
        case 'L':
            printf("Não haverá valor adicional\n");
            break;
        case 'V':
            printf("Não haverá valor adicional\n");
            break;
        default:
            printf("Digite valores válidos!\n");
        }
        break;
        default:
            printf("Digite valores válidos!\n");

    }
    if(preco < 25){
        imposto = preco * 0.05;
        printf("O imposto será de R$%.2f\n",imposto);
    }

    else if(preco >= 25){
        imposto = preco * 0.08;
        printf("O imposto será de R$%.2f\n",imposto);
    }

    custo = preco + imposto;
    printf("O preço do custo do produto será de R$%.2f\n",custo);
    if(tipo == 'A' && refrig == 'S'){
        imposto = 0;
        printf("O produto não terá desconto\n");
    }

    else{
        imposto = 0.03 * preco;
        printf("O produto terá um desconto de R$%.2f\n",imposto);
        }
    preco = preco - imposto;
    printf("O novo preço do produto será de R$%.2f\n",preco);
    if(preco <= 50){
        printf("O produto é barato");
    } else if(preco > 50 && preco < 100){
        printf("O produto tem preço normal");
    } else if(preco >= 100){
        printf("O produto é caro");
    }
    return 0;
}
