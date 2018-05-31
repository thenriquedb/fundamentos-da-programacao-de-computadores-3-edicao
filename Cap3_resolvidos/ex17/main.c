/*  Exercios do livro Fundamentos de programção Pascal,C,C++ ,Java 3º Edição
    Capitulo 3

17) Um trabalhador recebeu seu salário e o depositou em sua conta bancária. Esse trabalhador emitiu dois
cheques e agora deseja saber seu saldo atual. Sabe-se que cada operação bancária de retirada paga
CPMF de 0,38% e o saldo inicial da conta está zerado..*/

#include <stdio.h>
int main()

{
float sal,cpmf=1,saldo;

printf("Digite seu salario: ");
    scanf("%f",&sal);
printf("\n \n");
// CPMF seracalculada pelo salario vezes 0.38% e como sera emitido 2 cheques multiplica-se por 2
    cpmf=(sal*0.38/100)*2;
    saldo=sal-cpmf;

printf("Seu saldo atual será de %.2f reais",saldo);
return 0;
}
