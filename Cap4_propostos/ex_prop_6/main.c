/* 6) Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
programa. As opções são:

a) O primeiro número elevado ao segundo número.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    int opcao;
    float n1, n2, raiz_quad1, raiz_quad2, raiz_cub1, raiz_cub2, potencia;

    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("Digite um número: ");
    scanf("%f", &n2);

    printf("Opções \n\n");
    printf("1) O primeiro número elevado ao segundo número; \n"
            "2) Raiz quadrada de cada um dos números. \n"
            "3) Raiz cúbica de cada um dos números. \n\n");

    printf("Digite a opção desejada: ");
    scanf("%opcao", &opcao);

    switch (opcao) {
        case 1:
        {
            printf("Potência do 1º número elevado ao 2º. \n\n");
            potencia = pow(n1, n2);
            printf("O resultado é %.2f", potencia);
            break;
        }

        case 2:
        {
            printf("Raiz quadrada dos números digitados \n\n");
            raiz_quad1 = sqrt(n1);
            raiz_quad2 = sqrt(n2);
        }

        case 3:
        {
            printf("Raiz cúbica dos números digitados \n\n");
            raiz_cub1 = cbrt(n1); // CBRT é usado para calcular raizes cúbicas.
            raiz_cub2 = cbrt(n2);
            printf("A raiz cúbica de %.2f é %.2f \n", n1, raiz_cub1);
            printf("A raiz cubica de %.2f é %.2f \n", n2, raiz_cub2);
        }
    }
    printf("\n\n");
    return (EXIT_SUCCESS);

}