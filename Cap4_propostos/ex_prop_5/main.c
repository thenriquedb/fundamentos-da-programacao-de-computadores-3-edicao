/*Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário.
 * 
    Nº     OPERAÇÃO
    1      Média entre os números digitados
    2   Diferença do maior pelo menor
    3   Produto entre os números digitados
    4   Divisão do primeiro pelo segundo

Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do programa.
Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int opcao;
    float n1, n2, media, diferenca, produto, divisao;

    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("Digite um número: ");
    scanf("%f", &n2);

    printf("Selecione uma opção. \n");
    printf("   Nº       OPERAÇÃO \n"
            "   1       Média entre os números digitado \n"
            "   2       Diferença do maior pelo menor \n"
            "   3       Produto entre os números digitados \n"
            "   4       Divisão do primeiro pelo segundo \n");
    printf("\n \nDigite a opção desejada: ");
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao) {
        case 1:
        {
            printf("Média dos números \n");
            media = (n1 + n2) / 2;
            printf("A média entre %.2f e %.2f é %.2f", n1, n2, media);
            break;
        }
        case 2:
        {
            printf("Diferença do maior pelo menor \n\n");
            if (n1 > n2) {
                diferenca = n1 - n2;
                printf("A diferença entre %.2f e %.2f é %.2f", n1, n2, diferenca);
            } else if (n2 > n1) {
                diferenca = n2 - n1;
                printf("A diferença entre %.2f e %.2f é %.2f", n2, n1, diferenca);
            } else {
                printf("A diferença entre %.2f e %.2f é 0", n2, n1);
            }
        }
            break;
        case 3:
        {
            printf("Multiplicação dos 2 números \n\n");
            printf("%.2f * %.2f = %.2f ", n1, n2, produto = n1 * n2);
        }
            break;
        case 4:
        {
            printf("Divisão \n\n");

            if (n2 != 0) {
                divisao = n1 / n2;
                printf("O valor de %.2f / %.2f é igual a %.2f", n1, n2, divisao);
            }
            else {
                printf("O segundo valor não pode ser igual a 0.");
            }
        }
        break;

        default:
            printf("Comando inválido.");
    }
    printf("\n\n");
    return (EXIT_SUCCESS);
}