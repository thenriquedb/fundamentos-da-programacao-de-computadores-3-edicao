    /* Fundamentos da Programação de computadores
    Capitulo 4 -  Condicionais Exercios Resolvidos

    01)  A nota final de um estudante é calculada a partir de três notas atribuídas, respectivamente, a um trabalho
    de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas
    obedece aos pesos a seguir: */

#include <stdio.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.
int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecem.
    float n1,n2,n3,media,conceito;

    printf("CONCEITO DO ALUNO \n \n");

    printf("Digite a nota do trabalho de labóratorio: ");
        scanf("%f",&n1);
    printf("Digite a nota da avaliação semestral: ");
        scanf("%f",&n2);
    printf("Digite a nota do exame final: ");
        scanf("%f",&n3);

    printf("\n \n");

    printf("O calculo da media sera realizado usando os seguintes pesos:\n \n");
        printf("        Trabalho de laboratório: Peso 2 \n");
        printf("        Avaliação semestral: Peso 3 \n");
        printf("        Exame final: Peso 5 \n\n");

    //Calculo
    media=(n1*2)+(n2*3)+(n3*5);
    conceito=media / 10;
    //

//Inicio das condicionais

    if ((conceito >= 0) && (conceito < 5)) { // IF = Se - Se a condição for
         printf("Sua nota final é %.2f pontos portanto seu conceito será E \n \n",conceito);
    }
    else if ((conceito >= 5) && (conceito < 6)) { // Se então
        printf("Sua nota final é %.2f pontos portanto seu conceito será D \n \n",conceito);
    }
     else if ((conceito >= 6) && (conceito < 7)) { // Se então
        printf("Sua nota final é %.2f pontos portanto seu conceito será C \n \n",conceito);
    }
     else if ((conceito >= 7) && (conceito < 8)) { // Se então
        printf("Sua nota final é %.2f pontos portanto seu conceito será B \n \n",conceito);
    }
     else if ((conceito >= 8)) { // Se então
        printf("Sua nota final é %.2f pontos portanto seu conceito será A \n \n",conceito);
    }
// Fim das condicionais
system("pause");
return 0;
}
