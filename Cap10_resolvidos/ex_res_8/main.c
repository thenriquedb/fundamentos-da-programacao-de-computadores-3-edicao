/*
8) Veja os campos de alguns registros:
Professor (número de registro, nome, cod_título, total h/a semanal)
Título (cod_título, descrição, valor hora/aula)
Elabore um programa que:

|| Crie uma rotina para cadastrar os títulos. Sabe-se que nessa escola existem cinco títulos.
|| Crie uma rotina para cadastrar os professores. Sabe-se que nessa escola trabalham 14 professores,
e cada um deve estar associado a um título previamente cadastrado.
|| Crie uma rotina para mostrar a relação de professores, conforme o layout a seguir.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#define TIT 2
#define PROF 3

typedef struct {
    int num_registro;
    char nome[40];
    int cod_titulo;
    int pos_titulo;
    int total_Hr_Aula;
    float total_geral;
} Dados_Professor;

typedef struct {
    int codigo;
    char descricao[40];
    float vlr_aula;
} Dados_Titulo;

Dados_Professor Professor[PROF];
Dados_Titulo Titulo[TIT];

//Função para cadastrar os titulos
void Cadastrar_Titulos(Dados_Titulo *Titulo);

//Função para cadastrar os professores
void Cadastrar_Professores(Dados_Professor *Professor, Dados_Titulo *Titulo);

//Função para imprimir os dados de todos os professores
void Imprimir(Dados_Professor *Professor, Dados_Titulo *Titulo);

int main(int argc, char** argv) {
    int codigos_titulos[PROF];    

    Cadastrar_Titulos(Titulo);

    Cadastrar_Professores(Professor, Titulo);

    Imprimir(Professor, Titulo);

    return (EXIT_SUCCESS);
}
//------------------------------------------------------------------------------

void Cadastrar_Titulos(Dados_Titulo *Titulo) {
    int i;

    for (i = 0; i < TIT; i++) {
        printf("CADASTRO DOS TITULOS \n\n");

        printf("%dº Titulo \n", i + 1);

        printf("\tCodigo: ");
        scanf("%d", &Titulo[i].codigo);

        printf("\tDescrição: ");
        setbuf(stdin, NULL);
        gets(Titulo[i].descricao);

        printf("\tValor da aula: ");
        scanf("%f", &Titulo[i].vlr_aula);

        system("clear");
    }
}
//------------------------------------------------------------------------------

void Cadastrar_Professores(Dados_Professor *Professor, Dados_Titulo *Titulo) {
    int i, j, achou = 0, pos;

    for (i = 0; i < PROF; i++) {
        printf("CADASTRO DOS PROFESSORES \n\n");

        printf("%dº Professor \n", i + 1);

        printf("\tNúmero de registtro: ");
        scanf("%d", &Professor[i].num_registro);

        printf("\tNome: ");
        setbuf(stdin, NULL);
        gets(Professor[i].nome);

        printf("\tTotal aulas ministradas: ");
        scanf("%d",&Professor[i].total_Hr_Aula);
        
        //O programa irá continuar apenas quando o usuario digitar um codigo valido para o titulo
        do {
            printf("\tCodigo do titulo: ");
            scanf("%d", &Professor[i].cod_titulo);

            //Verifcar se o titulo digitado é existente
            for (j = 0; j < TIT; j++) {
                if (Professor[i].cod_titulo == Titulo[j].codigo) {
                    achou = 1;
                    pos = j;
                }
            }
        } while (achou != 1);

        Professor[i].pos_titulo = pos;
        Professor[i].total_geral = Titulo[pos].vlr_aula * Professor[i].total_Hr_Aula;

        system("clear");
    }
}
//------------------------------------------------------------------------------

void Imprimir(Dados_Professor *Professor, Dados_Titulo *Titulo) {
    int i, pos;

    printf("RELATORIO \n\n");

    for (i = 0; i < PROF; i++) {
        printf("%dº Professor \n", i + 1);
        pos = Professor[i].pos_titulo;
        
        printf("\tNumero do registro %d \n", Professor[i].num_registro);
        printf("\tNumero do registro %s \n", Professor[i].nome);
        printf("\tTitulo (descrição): %s \n", Titulo[pos].descricao);
        printf("\tValor HR/Aula: R$ %.2f \n", Titulo[pos].vlr_aula);
        printf("\tTotal de aula ministradas: %d \n", Professor[i].total_Hr_Aula);
        printf("\tTotal geral: R$ %.2f \n\n", Professor[i].total_geral);
    }
}

//------------------------------------------------------------------------------
