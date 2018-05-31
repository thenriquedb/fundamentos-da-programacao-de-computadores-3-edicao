/* Fundamentos da Programação de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

21) Faça um programa que receba:

    * o código do estado de origem da carga de um caminhão, supondo que a digitação do código do estado seja sempre válida, isto é,
    um número inteiro entre 1 e 5;
    * o peso da carga do caminhão em toneladas;
    * o código da carga, supondo que a digitação do código seja sempre válida, isto é, um número inteiro entre 10 e 40.

Calcule e mostre:
    * o peso da carga do caminhão convertido em quilos;
    * o preço da carga do caminhão;
    * o valor do imposto, sabendo que o imposto é cobrado sobre o preço da carga do caminhão e depende
    do estado de origem;
    * o valor total transportado pelo caminhão, preço da carga mais imposto.
*/

#include <stdio.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"Portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    int cod_estado,cod_carga;
    float imposto,peso_t,peso_kg,preco;

    printf("Calculo de valores do transporte \n\n");

    printf("Dieite o peso da carga em toneladas: ");
      scanf("%f",&peso_t);
    printf("Digite o codigo do estado de origem (1 a 5): ");
      scanf("%d",&cod_estado);
    printf("Digite o codigo da carga de origem (10 a 40): ");
      scanf("%d",&cod_carga);
    printf("\n\n");

    switch (cod_estado) {
        case 1:
        printf("ESTADO 1 \n\n");
        printf("    O peso da carga em quilos é %.2f kg \n",peso_kg = peso_t * 1000);
            if (cod_carga>=10 && cod_carga <= 20){
                printf("    O preço da carga será de R$ %.2f \n",preco = peso_kg * 100);
                printf("    Será cobrado R$ %.2f de impostos \n",imposto = preco * 0.35);
                printf("    O valor total do transporte será de R$ %.2f.",imposto = preco *1.35);
                printf("\n\n");
            }

            else if (cod_carga >20 && cod_carga <= 30){
                printf("    O preço da carga será de R$ %.2f \n",preco = peso_kg * 250);
                printf("    Será cobrado R$ %.2f de impostos \n",imposto = preco * 0.35);
                printf("    O valor total do transporte será de R$ %.2f.",imposto = preco *1.35);
                printf("\n\n");
            }

             else if (cod_carga >30 && cod_carga <= 40){
                printf("    O preço da carga será de R$ %.2f \n",preco = peso_kg * 340);
                printf("    Será cobrado R$ %.2f de impostos \n",imposto = preco * 0.35);
                printf("    O valor total do transporte será de R$ %.2f.",imposto = preco *1.35);
                printf("\n\n");
             }

        break;

        case 2:
        printf("ESTADO 2 \n\n");
        printf("    O peso da carga em quilos é %.2f kg \n",peso_kg = peso_t * 1000);
            if (cod_carga >=10 && cod_carga <= 20){
                printf("    O preço da carga será de R$ %.2f \n",preco = peso_kg * 100);
                printf("    Será cobrado R$ %.2f de impostos \n",imposto = preco * 0.25);
                printf("    O valor total do transporte será de R$ %.2f.",imposto = preco *1.25);
                printf("\n\n");
            }

            else if (cod_carga >20 && cod_carga <= 30){
                printf("    O preço da carga será de R$ %.2f \n",preco = peso_kg * 250);
                printf("    Será cobrado R$ %.2f de impostos \n",imposto = preco * 0.35);
                printf("    O valor total do transporte será de R$ %.2f.",imposto = preco *1.25);
                printf("\n\n");
            }

             else if (cod_carga >30 && cod_carga <= 40){
                printf("    O preço da carga será de R$ %.2f \n",preco = peso_kg * 340);
                printf("    Será cobrado R$ %.2f de impostos \n",imposto = preco * 0.35);
                printf("    O valor total do transporte será de R$ %.2f.",imposto = preco *1.25);
                printf("\n\n");
            }
        break;

        case 3:
        printf("ESTADO 3 \n\n");
        printf("    O peso da carga em quilos é %.2f kg \n",peso_kg = peso_t * 1000);
            if (cod_carga >=10 && cod_carga <= 20){
                printf("    O preço da carga será de R$ %.2f \n",preco = peso_kg * 100);
                printf("    Será cobrado R$ %.2f de impostos \n",imposto = preco * 0.35);
                printf("    O valor total do transporte será de R$ %.2f.",imposto = preco *1.15);
                printf("\n\n");
            }

            else if (cod_carga >20 && cod_carga <= 30){
                printf("    O preço da carga será de R$ %.2f \n",preco = peso_kg * 250);
                printf("    Será cobrado R$ %.2f de impostos \n",imposto = preco * 0.15);
                printf("    O valor total do transporte será de R$ %.2f.",imposto = preco *1.15);
                printf("\n\n");
            }

             else if (cod_carga >30 && cod_carga <= 40){
                printf("    O preço da carga será de R$ %.2f \n",preco = peso_kg * 340);
                printf("    Será cobrado R$ %.2f de impostos \n",imposto = preco * 0.35);
                printf("    O valor total do transporte será de R$ %.2f.",imposto = preco *1.15);
                printf("\n\n");
            }
        break;

        case 4:
        printf("ESTADO 4 \n\n");
        printf("    O peso da carga em quilos é %.2f kg \n",peso_kg = peso_t * 1000);
            if (cod_carga >=10 && cod_carga <= 20){
                printf("    O preço da carga será de R$ %.2f \n",preco = peso_kg * 100);
                printf("    Será cobrado R$ %.2f de impostos \n",imposto = preco * 0.055);
                printf("    O valor total do transporte será de R$ %.2f.",imposto = preco *1.05);
                printf("\n\n");
            }

            else if (cod_carga >20 && cod_carga <= 30){
                printf("    O preço da carga será de R$ %.2f \n",preco = peso_kg * 250);
                printf("    Será cobrado R$ %.2f de impostos \n",imposto = preco * 0.15);
                printf("    O valor total do transporte será de R$ %.2f.",imposto = preco *1.05);
                printf("\n\n");
            }

             else if (cod_carga >30 && cod_carga <= 40){
                printf("    O preço da carga será de R$ %.2f \n",preco = peso_kg * 340);
                printf("    Será cobrado R$ %.2f de impostos \n",imposto = preco * 0.35);
                printf("    O valor total do transporte será de R$ %.2f.",imposto = preco *1.05);
                printf("\n\n");
            }
        break;

        case 5:
        printf("ESTADO 5 \n\n");
        printf("    O peso da carga em quilos é %.2f kg \n",peso_kg = peso_t * 1000);
            if (cod_carga >=10 && cod_carga <= 20){
                printf("    O preço da carga será de R$ %.2f \n",preco = peso_kg * 100);
                printf("    Não será cobrado impostos. \n");
                printf("    O valor total do transporte será de R$ %.2f.",preco);
                printf("\n\n");
            }

            else if (cod_carga >20 && cod_carga <= 30){
                printf("    O preço da carga será de R$ %.2f \n",preco = peso_kg * 250);
                printf("    Não será cobrado impostos. \n");
                printf("    O valor total do transporte será de R$ %.2f.",preco);
                printf("\n\n");;
            }

             else if (cod_carga >30 && cod_carga <= 40){
                printf("    O preço da carga será de R$ %.2f \n",preco = peso_kg * 340);
                printf("    Será cobrado R$ %.2f de impostos \n",imposto = preco * 0.35);
                printf("    O valor total do transporte será de R$ %.2f.",imposto = preco *1.15);
                printf("\n\n");
            }
        break;
    }
}
