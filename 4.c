#include <stdio.h>
int main(){

   float salario, totalv;
   char nome[100];

   printf("Informe seu nome:");
   scanf("%s",nome);
   printf("Informe a quantidade do seu salário:");
   scanf("%f", &salario);
   printf("Informe o total de vendas efetuadas:");
   scanf("%f", &totalv);
   printf("%s, O seu salário neste mês é %2.f",nome, (salario)+(totalv*0.15));



    return 0;
}