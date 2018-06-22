/********************************************************
 * Arquivo: subrotinas.c                                 *
 * Autor: Prof. Manoel P. Junior - IFMG Campus Formiga   *
 * Objetivo: exemplificar o uso de subrotinas            *
 ********************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int x;

void me_ensina_sobre_funcoes() {

    printf("Muito bem... se você chegou até aqui está na hora de aprender como se faz um código \"like a pro\"!\n\n");
    printf("Sub-rotinas têm duas aplicações importantes:\n");
    printf("\t(1) Reuso de código: se existem rotinas que sempre possuem um determinado comportamento, e que são\n");
    printf("\tnecessárias N vezes em várias partes do meu programa (ou mesmo em outros arquivos ou outros programas)\n");
    printf("\tnão é mais inteligente reusar um bloquinho de código que já está pronto, que replicar seu código N vezes? \n");
    printf("\tSe sua resposta foi SIM você já deu o primeiro passo para entender as subrotinas.\n\n");
    printf("\t(2) Legibilidade e facilidade de manutenção: bom, se eu tenho um mesmo bloco de código em N partes do meu programa\n");
    printf("\te eu preciso fazer uma determinada correção, é mais fácil que eu corra o código e faça a correção nas N ocorrências do mesmo\n");
    printf("\t(caso eu tenha replicado o mesmo código N vezes) ou é mais fácil que eu faça essa correção uma única vez?\n");
    printf("\tSe sua resposta foi uma \"única vez\" pronto... você já entendeu a importância (e o poder) das subrotinas.\n\n");
    x=0;
    return;
}

void funcao_antes_do_main() {

    printf("Teoricamente as funções devem ser escritas antes da função main, que é a função principal de um código C.\n");
    printf("E por que isso acontece? Isso acontece pois o nosso compilador é top-down!\n\n");
    printf("Mas é possível escrever funções após o main? A resposta é sim!\n");
    printf("No entanto, a assinatura (ou protótipo ou cabeçalho) da sua subrotina deve vir antes do main!\n\n");

    return;

}

void funcoes_que_ja_conhecemos() {

    int x;
    /*
        printf é uma função definida na biblioteca stdio
        observe que essa função tem parâmetros!
     */
    printf("Digite um valor inteiro: "); //printf é uma função definida na biblioteca stdio
    /*
        scanf é outra função definida na biblioteca stdio
        observe que essa função também tem parâmetros!
     */
    scanf("%d", &x); //scanf é uma função definida na biblioteca stdio

    /*
        observe que o número de parâmetros pode variar para uma mesma função (printf no caso)
     */
    for (int i = 0; i < 40; i++) {
        printf("="); //printf é uma função definida na biblioteca stdio
    }
    printf("\nO valor digitado foi: %d\n", x); //printf é uma função definida na biblioteca stdio

    return;

}

void ja_sei_tudo() {

    printf("Muito bem... se você já sabe tudo sobre subrotinas, é hora de fazer alguns exercícios!\n");
    printf("MÃOS A OBRA E BOA SORTE!!!\n\n");
    getchar();
    getchar();
}

void funcao_com_parametro1(int par1, char par2) {

    printf("\n\tVeja que os valores passados por parâmetro são copiados para dentro da função!\n");
    printf("\t\tParâmetro1: %d\nParâmetro2: %c\n\n", par1, par2);

}

int funcao_com_retorno1(int n) {

    return n * 2;

    printf("ATENÇÃO! Toda função é encerrada quando um comando RETURN é encontrado (executado).\n");
    printf("Por isso, esse printf (sim, esse mesmo que está lendo) nunca será executado, bem como o anterior!\n");

}

int maior(int x, int y) {

    if (x > y)
        return x;
    else
        return y;
}

void Troca_valor(int a, int b) {

    printf("\n\t\tATENÇÃO! Por padrão, a passagem de parâmetros em C é sempre por \"valor\".\n");
    printf("\t\tDessa forma, os parâmetros a e b recebem uma cópia do valor passado para a função.\n\n");
    printf("\t\tNa prática, você pode manipular os valores a vontade dentro da função.\n");
    printf("\t\tAo retornar para o programa principal, as variáveis estarão com o mesmo valor.\n\n");
    printf("\t\tVeja o exemplo abaixo:\n");

    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\t\t\tDentro: %d e %d\n", a, b);
}

void Troca_referencia(int*a, int*b) {

    printf("\n\t\tATENÇÃO! Por padrão, a passagem de parâmetros em C é sempre por \"valor\".\n");
    printf("\t\tMas em algumas situações é desejável que se altere os valores dos parâmetros não só internamente,\n");
    printf("\t\tmas também no programa principal. A esse tipo de passagem de parâmetros damos o nome de \"referência\".\n");
    printf("\t\tObserve que há um asterisco antes de cada parâmetro. Isso indica que a função recebe um ponteiro para uma variável.\n");
    printf("\t\tVeremos ponteiros no próximo semestre, mas por hora saiba que é um tipo de variável como qualquer outro.\n");
    printf("\t\tA única diferença é que esse tipo de variável armazena um \"endereço de memória\"!\n\n");
    printf("\t\t\t\tIMPORTANTE: OBSERVE O USO DO ASTERISCO ANTES DE CADA PARÂMETRO!\n\n");
    printf("\t\tNa prática, tudo o que for feito com os parâmetros, dentro da função, será refletido no programa principal.\n\n");
    printf("\t\tVeja o exemplo abaixo:\n");

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("\t\t\tDentro: %d e %d\n", *a, *b);
}

typedef struct {
    int v[5];
} tipo_vetor;

tipo_vetor retorna_vetor() {

    tipo_vetor v = {1, 2, 3, 4, 5};

    printf("\t\tATENÇÃO! O valor retornado por uma função NÃO PODE ser um array,\n");
    printf("\t\tpois a linguagem C não suporta a atribuição de um array para outro!\n\n");
    printf("\t\tMas a linguagem C permite a atribuição entre estruturas :-D\n");
    printf("\t\tEntão posso usar esse artifício (struct) para retornar um vetor,\n");
    printf("\t\tcomo estamos fazendo nessa subrotina.\n");


    return v;
}

void vetor_como_parametro(int *n, int m) {

    printf("\n\t\tATENÇÃO! Arrays (de qualquer dimensão) são sempre passados como referência!\n");
    printf("\t\tQuando passamos um array por parâmetro, independentemente do seu tipo, o que\n");
    printf("\t\té de fato passado para a função é o endereço do primeiro elemento do array.\n");
    printf("\t\tSempre deve-se passar (no mínimo) 2 parâmetros:\n");
    printf("\t\t\t1 - o próprio vetor;\n");
    printf("\t\t\t2 - um valor inteiro representando o tamanho do vetor\n\n");
    printf("\t\tFormas de declarar uma subrotina que recebe um vetor como parâmetro (todas são equivalentes):\n\n");
    printf("\t\t\t\tvoid imprime (int *m, int n);\n");
    printf("\t\t\t\tvoid imprime (int m[], int n);\n");
    printf("\t\t\t\tvoid imprime (int m[5], int n);\n\n");
    printf("\t\tConteúdo do vetor recebido como parâmetro: ");
    int i;
    for (i = 0; i < m; i++)
        printf("%d \t", n[i]);

    printf("\t\tObserve que não é necessário usar o asterisco para vetores, pois o próprio nome do vetor já é um ponteiro para a primeira posição\n");

    return;
};

void matriz_como_parametro(int m[][2], int n) {
    printf("\n\t\tATENÇÃO! Arrays (de qualquer dimensão) são sempre passados como referência!\n");
    printf("\t\tQuando passamos um array por parâmetro, independentemente do seu tipo, o que\n");
    printf("\t\té de fato passado para a função é o endereço do primeiro elemento do array.\n");
    printf("\t\tAssim como nos vetores, para matrizes deve-se passar (no mínimo) 2 parâmetros:\n");
    printf("\t\t\t1 - o próprio vetor;\n");
    printf("\t\t\t2 - um valor inteiro representando o tamanho do vetor\n\n");
    printf("\t\tPorém, um array com mais de uma dimensão, é preciso especificar o tamanho de todas as dimensões, menos a primeira.\n");
    printf("\t\tFormas de declarar uma subrotina que recebe um vetor como parâmetro (todas são equivalentes):\n\n");
    printf("\t\t\t\tvoid imprime (int m[][2], int n);\n\n");
    printf("\t\tNessa caso a matriz terá sempre 2 colunas, mas poderá ter tantas linhas forem necessárias:\n");


    printf("\t\tConteúdo da matriz recebida como parâmetro: \n");

    int i, j;
    for (i = 0; i < n; i++) {
        printf("\t\t\t");
        for (j = 0; j < 2; j++)
            printf("%d\t", m[i][j]);
        printf("\n");
    }

    printf("\t\tObserve que não é necessário usar o asterisco para vetores, pois o próprio nome do vetor já é um ponteiro para a primeira posição\n");

    return;
};

typedef struct {
    int nota1, nota2, nota3;

} notas;

void struct_como_parametro_valor(notas n) {

    printf("\t\tUma struct pode ser passada como parâmetro.\n");
    printf("\t\tComo não tem asterisco, a struct é passada por valor.\n");
    printf("\t\tVeja exemplo abaixo:\n");

    printf("\t\t\t%d\n", n.nota1);
    printf("\t\t\t%d\n", n.nota2);
    printf("\t\t\t%d\n", n.nota3);

    n.nota1 *= n.nota2;
    n.nota2 *= n.nota3;
    n.nota3 *= n.nota1;

    printf("\t\tValor das notas do aluno:\n");
    printf("\t\t\tNota1: %d Nota2: %d Nota3: %d\n", n.nota1, n.nota2, n.nota3);

};

void struct_como_parametro_referencia(notas *n) {

    printf("\t\tUma struct pode ser passada como parâmetro.\n");
    printf("\t\tComo tem asterisco, a struct é passada por referência.\n");
    printf("\t\tNesse caso, podemos acessar a estrutura de diferentes formas: \n");
    printf("\t\t(1) usando o próprio asterisco\n");
    printf("\t\t\t\t(*n).nota1\n");

    printf("\t\tNesse caso, o uso do parênteses é necessário para indicar que o ponteiro é \"p\". \n");
    printf("\t\tSe esquecermos os parênteses e fizermos algo do tipo: \n");
    printf("\t\t\t\t*n.nota1\n");
    printf("\t\testaremos dizendo que a variável nota1 é que é o ponteiro, pois o operador \".\" \n");
    printf("\t\ttem precedência sobre o operador \"*\"\n\n");



    printf("\t\tou (2) usando o operador \"->\"\n");
    printf("\t\t\t\tn->nota1\n\n");

    (*n).nota1 *= (*n).nota2;
    (*n).nota2 *= (*n).nota3;
    (*n).nota3 *= (*n).nota1;

    /*
            OU 
     */

    n->nota1 *= n->nota2;
    n->nota2 *= n->nota3;
    n->nota3 *= n->nota1;

    printf("\t\tValor das notas do aluno:\n");
    printf("\t\t\tNota1: %d Nota2: %d Nota3: %d\n", n->nota1, n->nota2, n->nota3);

};

int main() {

    int op = 0;
    int numero = 5;
    int dobro;

    int num1, num2;

    int x, y;

    int vetor_parametro[5] = {5, 10, 15, 20, 25};

    int mat[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}};

    tipo_vetor vet;

    notas nota_aluno;

    do {
        printf("\nAprenda mais sobre funções (subrotinas)! Digite uma das opções abaixo:\n");
        printf("\t1 - Saber mais sobre funções!\n");
        printf("\t2 - Onde devo criar minha função?\n");
        printf("\t3 - Funções que já conhecemos!\n");
        printf("\t4 - Funções com parâmetros por valor - 1\n");
        printf("\t5 - Funções com parâmetros por valor - 2\n");
        printf("\t6 - Funções com parâmetros por valor - 3\n");
        printf("\t7 - Funções com parâmetros por referência - 1\n");
        printf("\t8 - Funções com retorno - 1\n");
        printf("\t9 - Funções com retorno - 2\n");
        printf("\t10 - Vetor passado como parâmetro\n");
        printf("\t11 - Matriz passada como parâmetro\n");
        printf("\t12 - Struct passada como parâmetro (por valor)\n");
        printf("\t13 - Struct passada como parâmetro (por referência)\n");
        printf("\t14 - Já sei tudo... posso sair!\n");
        printf("\t::Digite sua opção -> ");
        scanf("%d", &op);
        switch (op) {
            case 1: me_ensina_sobre_funcoes();
                break;
            case 2: funcao_antes_do_main();
                break;
            case 3: funcoes_que_ja_conhecemos();
                break;
            case 4: funcao_com_parametro1(5, 'A');
                break;
            case 5:
                printf("Digite o 1º número: ");
                scanf("%d", &num1);
                printf("Digite o 2º número: ");
                scanf("%d", &num2);
                printf("\tO maior número é %d\n\n", maior(num1, num2));
                break;
            case 6:
                x = 2;
                y = 3;
                printf("\n\t\t\tAntes: %d e %d\n", x, y);
                Troca_valor(x, y);
                printf("\t\t\tDepois: %d e %d\n", x, y);
                break;
            case 7:
                x = 2;
                y = 3;
                printf("\n\t\t\tAntes: %d e %d\n", x, y);
                Troca_referencia(&x, &y); //observe que é necessário usar o operador &, já que os parâmetros são por referência
                printf("\t\t\tDepois: %d e %d\n", x, y);
                break;
            case 8: numero = 5;
                dobro = funcao_com_retorno1(numero);
                printf("Dobro de numero = %d\n\n", dobro);
                break;
            case 9: vet = retorna_vetor();
                printf("\n\t\tVeja que aqui já recebi um vetor como retorno de uma função (usando struct). O valor da posição 2 do vetor é: %d\n", vet.v[2]);
                break;
            case 10: vetor_como_parametro(vetor_parametro, 5);
                break;
            case 11: matriz_como_parametro(mat, 3);
                break;
            case 12:
                nota_aluno.nota1 = 5;
                nota_aluno.nota2 = 10;
                nota_aluno.nota3 = 15;
                struct_como_parametro_valor(nota_aluno);
                break;
            case 13:
                nota_aluno.nota1 = 5;
                nota_aluno.nota2 = 10;
                nota_aluno.nota3 = 15;
                struct_como_parametro_referencia(&nota_aluno);
                break;
            case 14: ja_sei_tudo();
                return 0;
        }
        printf("\n\tAcesse outra opção do MENU para saber mais!\n");
        getchar();
        getchar();
        printf("\033[2J\033[H"); //comando para limpar tela no Linux :-)
    } while (op = 9);

    return 0;
}