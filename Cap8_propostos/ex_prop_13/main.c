/*
13) Foi realizada uma pesquisa entre 15 habitantes de uma região. Os dados coletados de cada habitante
foram: idade, sexo, salário e número de filhos.Faça uma sub-rotina que leia esses dados armazenando-os 
em vetores. Depois, crie sub-rotinas que recebam esses vetores como parâmetro e retornem a média de 
salário entre os habitantes, a menor e a maior idade do grupo e a quantidade de mulheres com três filhos 
que recebem até R$ 500,00 (utilize uma sub-rotina para cada cálculo).
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 15

//Declaração da Struct dados
typedef struct {
    int idade;
    char sexo;
    float salario;
    int QuantFilhos;
} Dados;

//Função responsavel para prencher o vetor de struct
void LerDados(Dados *Habitantes);

//Função responsavel por calcular a media do salarios dos habitantes
float CalcularMediaSalario(Dados *Habitantes);

//Funcao responsavel por pegar a menor idade dos habitantes
int MenorIdade(Dados *Habitantes);

//Funcao responsavel por pegar a maior idade dos habitantes
int MaiorIdade(Dados *Habitantes);

//Função responsavel por retornar a quantidade de mulheres com 3 filhos com salário ate R$ 500.00
int Mulheres_Com_3_Filhos(Dados *Habitantes);


int main(int argc, char** argv) {

    Dados Habitantes[TAM];
    LerDados(Habitantes);

    printf("\nRELATORIO \n");
    printf("\t A media de salario dos moradores é de R$ %.2f. \n", CalcularMediaSalario(Habitantes));
    printf("\t A menor idade entre os habitantes é de %d anos. \n", MenorIdade(Habitantes));
    printf("\t A menor idade entre os habitantes é de %d anos. \n", MaiorIdade(Habitantes));
    printf("\t Existe %d mulheres com 3 filhos com salário de até R$ 500,00. \n",Mulheres_Com_3_Filhos(Habitantes));

    return (EXIT_SUCCESS);
}

void LerDados(Dados *Habitantes) {
    int i;

    for (i = 0; i < TAM; i++) {
        printf("%dº Pessoa \n", i + 1);
            printf("\tIdade: ");
            scanf("%d", &Habitantes[i].idade);

            printf("\tSexo: ");
            scanf(" %c", &Habitantes[i].sexo);

            printf("\tSalario: ");
            scanf("%f", &Habitantes[i].salario);

            printf("\tQuantidade de filhos: ");
            scanf("%d", &Habitantes[i].QuantFilhos);
        
        printf("\n");
    }
}

float CalcularMediaSalario(Dados *Habitantes) {
    int i;
    float soma = 0, media;

    for (i = 0; i < TAM; i++) {
        soma += Habitantes[i].salario;
    }

    media = soma / TAM;
    return media;
}

int MenorIdade(Dados *Habitantes) {
    int i;
    int MenorIdade = Habitantes[0].idade, MaiorIdade = Habitantes[0].idade;

    for (i = 1; i < TAM; i++) {
        if (Habitantes[i].idade < MenorIdade) {
            MenorIdade = Habitantes[i].idade;
        }
    }
    return MenorIdade;
}

int MaiorIdade(Dados* Habitantes) {
    int i;
    int MaiorIdade = Habitantes[0].idade;

    for (i = 1; i < TAM; i++) {
        if (Habitantes[i].idade > MaiorIdade) {
            MaiorIdade = Habitantes[i].idade;
        }
    }
    return MaiorIdade;
}

int Mulheres_Com_3_Filhos(Dados *Habitantes) {
    int c = 0, i;

    for (i = 0; i < TAM; i++) {
        if (Habitantes[i].sexo == 'f' || Habitantes[i].sexo == 'F') 
        {
            if (Habitantes[i].QuantFilhos == 3) 
            {
                if (Habitantes[i].salario <= 500) {
                    c++;
                }
            }
        }
    }
    
    
    return c;
}