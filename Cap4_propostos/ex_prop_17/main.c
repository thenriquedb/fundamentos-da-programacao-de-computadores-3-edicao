/*
17) Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O
programa deve mostrar uma mensagem de permissão de acesso ou não.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int senha;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    if (senha == 4531) {
        printf("Acesso permitido. \n");
    }
    else {
        printf("Acesso negado. \n");
    }
    return (EXIT_SUCCESS);
}

