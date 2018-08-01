
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FUNC 1
#define SAL_MIN 550

typedef struct {
    char nome[40];
    int horas;
    char turno;
    char categoria;
} Dados;

Dados Funcionarios[FUNC];

//Função para leitura dos dados
void Leitura(Dados *Funcionarios);

//Função para mostrar a folhar de pagamento
void Folha_Pagamento(Dados *Funcionarios);

//Funçao para calcular salario inicial
float Calcular_Salario(Dados *Funcionarios, int p, float *vlr_hora);

//Função para calcular auxilio alimentação
float Calcular_Auxilio(float salario);

int main(int argc, char** argv) {
    int opcao;

    do {
        printf("MENU \n");
        printf("1. Cadastrar funcionários \n");
        printf("2. Mostrar folha de pagamento \n");
        printf("3. Sair \n\n");

        printf("Digite uma opção: ");
        scanf("%d", &opcao);

        // Função para limpar a tela 
        system("clear");

        switch (opcao) {
            case 1:
                Leitura(Funcionarios);
                break;

            case 2:
                Folha_Pagamento(Funcionarios);
                break;

            case 3:
                printf("Programa encerrado. \n");
                break;

            default:
                printf("Opção inválida. \n\n");
        }

    } while (opcao != 3);

    return (EXIT_SUCCESS);
}
//------------------------------------------------------------------------------

void Leitura(Dados *Funcionarios) {
    int i;

    printf("CADASTRO DE FUNCIONÁRIOS \n");

    for (i = 0; i < FUNC; i++) {
        printf("%dº Funcionaŕio \n", i + 1);

        printf("\tNome: ");
        setbuf(stdin, NULL);
        gets(Funcionarios[i].nome);

        printf("\tQTDE de horas trabalhadas: ");
        scanf("%d", &Funcionarios[i].horas);

        do {
            printf("\tTurno (M. matutino; V. vespertino; ou N — noturno): ");
            scanf(" %c", &Funcionarios[i].turno);
        } while (Funcionarios[i].turno != 'M' && Funcionarios[i].turno != 'm'
                && Funcionarios[i].turno != 'V' && Funcionarios[i].turno != 'v'
                && Funcionarios[i].turno != 'N' && Funcionarios[i].turno != 'n');

        do {
            printf("\tCategoria (G. Gerente ou O. Operário): ");
            scanf(" %c", &Funcionarios[i].categoria);
        } while (Funcionarios[i].categoria != 'G' && Funcionarios[i].categoria != 'g'
                && Funcionarios[i].categoria != 'O' && Funcionarios[i].categoria != 'o');

        system("clear");
    }
}
//------------------------------------------------------------------------------

void Folha_Pagamento(Dados *Funcionarios) {
    char nome[40];
    int i, achou = 0, p;
    float vlr_hora, sal_final;

    printf("CADASTRO DE FUNCIONÁRIOS \n");

    printf("Digite o nome que deseja visualizar a folha de pagamento: ");
    setbuf(stdin, NULL);
    gets(nome);

    for (i = 0; i < FUNC; i++) {
        if (strcmp(nome, Funcionarios[i].nome) == 0) {
            achou = 1;
            p = i;
        }
    }
    
    system("clear");

    if (achou == 1) {
        printf("Folha de pagamento \n ");
        printf("\tNome: %s \n", nome);
        printf("\tHoras trabalhadas: %d \n", Funcionarios[p].horas);

        float salario = Calcular_Salario(Funcionarios, p, &vlr_hora);
        float auxilio = Calcular_Auxilio(salario);
        
        printf("\tValor da hora trabalhada: R$ %.2f \n", vlr_hora);
        printf("\tSalário inicial: R$ %.2f \n", salario);
        printf("\tAuxilio alimentação: R$ %.2f \n",Calcular_Auxilio(salario));
        printf("\tSalario final: R$ %.2f \n\n", sal_final = salario + auxilio);


    } else {
        printf("Funcionário não encontrado. \n\n");
    }
}

//------------------------------------------------------------------------------

float Calcular_Salario(Dados * Funcionarios, int p, float *vlr_hora) {
    float salario;

    //Calculo salário gerente
    if (Funcionarios[p].categoria == 'G' || Funcionarios[p].categoria == 'g') {
        //Se turno for noturno entao
        if (Funcionarios[p].turno == 'N' || Funcionarios[p].turno == 'n') {
            *vlr_hora = 0.18 * SAL_MIN;
            salario = Funcionarios[p].horas * (*vlr_hora);
        }
        //Senao
        else {
            *vlr_hora = 0.15 * SAL_MIN;
            salario = Funcionarios[p].horas * (*vlr_hora);
        }

    }
    
    //Calculo salário operario
    else if (Funcionarios[p].categoria == 'O' || Funcionarios[p].categoria == 'o') {
        //Se turno for noturno entao
        if (Funcionarios[p].turno == 'N' || Funcionarios[p].turno == 'n') {
            *vlr_hora = 0.13 * SAL_MIN;
            salario = Funcionarios[p].horas * (*vlr_hora);
        }//Senao
        else {
            *vlr_hora = 0.10 * SAL_MIN;
            salario = Funcionarios[p].horas * (*vlr_hora);
        }
    }
    return salario;
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
float Calcular_Auxilio(float salario) {
    float auxilio;
    
    if(salario <= 550) {
        auxilio = salario * 0.20;
    } 
    else if (salario > 550 && salario < 800) {
        auxilio = salario * 0.15;
    } 
    else if (salario >= 800) {
                auxilio = salario * 0.05;
    }
    
    return auxilio;
}