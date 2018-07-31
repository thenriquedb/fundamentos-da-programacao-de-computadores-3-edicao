
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 4 // Quantidade de aviões

typedef struct {
    int num;
    int lugares;
} Dados_Aviao;

Dados_Aviao Avioes[TAM];


//Funçao para chamar menu
int Menu();

//Funcao para cadastrar avioes por seus números
void Cadastrar_Numero(Dados_Aviao *Avioes);

//Funcao para cadastrar quantidade de lugares de cada avião
void Cadastrar_Lugares(Dados_Aviao *Avioes);

//Funcao para cadastrar quantidade de lugares de cada avião
void Reservar_Passagem(Dados_Aviao *Avioes, int *quant, int *Reserva_Aviao, char *Nome[][60]);

//Funcao para consultar por quantidade de reservas feita por avião
void Consultar_Aviao(Dados_Aviao *Avioes, int *Reserva_Aviao);

//Funcao para consultar por quantidade de reservas atraves do nome do passageiro
void Consultar_Passageiro(Dados_Aviao *Avioes, int quant, char *Nome[][60]);

int main(int argc, char** argv) {
    int opcao, quant_reserva = 0, Reserva_Aviao[TAM];
    char passageiros[40][60];

    //Laço para 'limpar' o vetor
    int i;
    for (i = 0; i < TAM; i++) {
        Reserva_Aviao[i] = 0;
    }

    do {
        Menu();

        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        printf("--------------------------------------------------------\n");

        switch (opcao) {
            case 1:
                Cadastrar_Numero(Avioes);
                break;

            case 2:
                Cadastrar_Lugares(Avioes);
                break;

            case 3:
                Reservar_Passagem(Avioes, &quant_reserva, Reserva_Aviao, passageiros);
                break;

            case 4:
                Consultar_Aviao(Avioes, Reserva_Aviao);
                break;

            case 5:
                Consultar_Passageiro(Avioes, quant_reserva, passageiros);
                break;

            case 6:
                printf("Programa encerrado. \n");
                break;
        }

    } while (opcao != 6);

    return (EXIT_SUCCESS);
}

/*-----------------------------------FUNCÇÔES---------------------------------*/
int Menu() {
    int opcao;

    printf("MENU \n");
    printf("\t 1. Cadastrar número dos aviões; \n");
    printf("\t 2. Cadastrar o número de lugares disponíveis em cada avião; \n");
    printf("\t 3. Reservar passagem; \n");
    printf("\t 4. Consultar por avião; \n");
    printf("\t 5. Consultar por passageiro; \n");
    printf("\t 6. Finalizar. \n");

}

/*----------------------------------------------------------------------------*/
void Cadastrar_Numero(Dados_Aviao *Avioes) {
    int i;

    printf("\nCADRASTRO DOS NÚMEROS DOS AVIÕES \n\n");
    for (i = 0; i < TAM; i++) {
        printf("%dº Avião \n", i + 1);
        printf("Número: ");
        scanf("%d", &Avioes[i].num);
        printf("\n");
    }

}

/*----------------------------------------------------------------------------*/
void Cadastrar_Lugares(Dados_Aviao *Avioes) {
    int i;

    printf("\nCADRASTRO QUANTIDADES DE LUGARES DOS AVIÕES \n\n");
    for (i = 0; i < TAM; i++) {
        printf("%dº Avião \n", i + 1);
        printf("Quantidade de lugares: ");
        scanf("%d", &Avioes[i].lugares);
        printf("\n");
    }

}

/*----------------------------------------------------------------------------*/
void Reservar_Passagem(Dados_Aviao *Avioes, int *quant, int *Reserva_Aviao, char *Nome[][60]) {
    int i, num, pos, achou;

    printf("\nRESERVAR PASSAGEM \n\n");
    if (*quant < 60) {
        do {
            printf("Digite o número do avião desejada: ");
            scanf("%d", &num);

            printf("Digite seu nome: ");
            setbuf(stdin, NULL);
            gets(Nome[*quant]);

            achou = 0;
            for (i = 0; i < TAM; i++) {
                if (num == Avioes[i].num) {
                    achou = 1;
                    pos = i;
                }
            }

            if (achou == 0) {
                printf("Avião não encontrado. \n");
            } else {
                printf("O avião de número %d possui %d lugares. \n\n", Avioes[pos].num, Avioes[pos].lugares);
                break;
            }
        } while (achou != 0);

        if (Avioes[pos].lugares > 0) {
            printf("Status do voo: \n");
            Avioes[pos].lugares = Avioes[pos].lugares - 1;
            printf("Reserva feita com sucesso. ");

            printf("Valor da variavel pos: %d \n", pos);
            Reserva_Aviao[pos] += 1;

            printf("O avião de número %d possui %d lugares no momento. \n", Avioes[pos].num, Avioes[pos].lugares);
        } else {
            printf("Status do voo: \n");
            printf("Voo lotado. \n");
        }

        *quant = *quant + 1;
    } else {
        printf("Limite de 60 reservas exedido. \n");
    }
    printf("------------------------------------------------------------------\n");
}

/*----------------------------------------------------------------------------*/
void Consultar_Aviao(Dados_Aviao *Avioes, int *Reserva_Aviao) {
    int num, i, achou = 0, pos;

    printf("\nCONSULTAR POR AVIÃO \n\n");
    do {
        printf("Digite o número do avião: ");
        scanf("%d", &num);

        for (i = 0; i < TAM; i++) {
            if (num == Avioes[i].num) {
                achou = 1;
                pos = i;
            }
        }

        if (achou == 0) {
            printf("Avião não encontrado. \n");
        } else {
            break;
        }
    } while (achou != 1);

    if (Reserva_Aviao[pos] > 0) {
        printf("Valor da variavel pos: %d \n", pos);
        printf("Você fez %d reservas neste avião. \n", Reserva_Aviao[pos]);
    } else {
        printf("Você ainda não fez nenhuma reserva neste avião. \n");
    }
    printf("------------------------------------------------------------------\n");
}

/*----------------------------------------------------------------------------*/
void Consultar_Passageiro(Dados_Aviao *Avioes, int quant, char *Nome[][60]) {
    int i, cont = 0;
    char nome[40];

    printf("\nVERIFICAR RESERVA PELO NOME DO PASSAGEM \n\n");

    printf("Digite o nome que deseja verificar: ");
    setbuf(stdin, NULL);
    gets(nome);

    for (i = 0; i < quant; i++) {
        if (strcmp(nome, Nome[i]) == 0) {
            cont++;
        }
    }

    printf("O passageiro %s possui %d reservas em seu nome. \n", nome, cont);
}
/*----------------------------------------------------------------------------*/