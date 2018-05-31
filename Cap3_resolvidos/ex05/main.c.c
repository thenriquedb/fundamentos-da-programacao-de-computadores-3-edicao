/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

    5) Faça um programa quereceba o salário de um funcionário,calculee mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.
*/

#include <stdio.h>
int main()

{
float salario,percentual,n_sal,aumento;

printf("Aumento de salario \n \n");

printf("Digite seu atual salario: ");
    scanf("%f",&salario);
printf("Digite o percentual de aumento: ");
    scanf("%f",&percentual);

printf("\n \n DADOS ATUALIZADOS \n\n");

percentual = percentual/100;
aumento = salario * percentual;
n_sal = salario + aumento;

printf("O seu salario teve um aumento de %.2f reais \n",aumento);
printf("Seu novo salario sera de %.2f reais \n",n_sal);

return 0;
}
