/*
 20) Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir.
Para idade inferior a 5, deverá mostrar mensagem.
 * 
CATEgoriA       idAdE
Infantil        5 a 7
Juvenil         8 a 10
Adolescente     11 a 15
Adulto          16 a 30
Sênior          Acima de 30
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int idade;

    printf("Categoria do nadador \n\n");
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) {
        printf("Sua categoria é infantil");
    }
    else if (idade >= 8 && idade <= 10) {
        printf("Sua categoria é juvenil");
    }
    else if (idade >= 11 && idade <= 15) {
        printf("Sua categoria é Adolecente");
        printf("\n");
    }
    else if (idade >= 16 && idade <= 30) {
        printf("Sua categoria é adulto");
        printf("\n");
    }
      else if (idade >30) {
        printf("Sua categoria é sênior");
        printf("\n");
    }    
      else {
          printf("Idade iválida");
      }
    return (EXIT_SUCCESS);
}

