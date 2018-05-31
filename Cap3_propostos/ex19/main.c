/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3 - Exercicios Propostos

19) Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se usar 18 W
de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule e mostrea sua área (em m
2) e a potência de iluminação que deverá ser uti  */

#include <stdio.h>
int main()

{
    float comp,larg,area,ilum;

    printf("CALCULO DA POENCIA DE ILUMINACAO \n \n");

    printf("Digite o comprimento do comodo: ");
        scanf("%f",&comp);
    printf("Digite a largura do comodo: ");
        scanf("%f",&larg);

// Calculo
area=comp*larg;
ilum=area*1.8;

printf("Seu comodo possui %.2f metros quadrados.\n",area);
printf("Sera necessario %.2f Watts para ilumina-lo.",ilum);
}
