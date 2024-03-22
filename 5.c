#include <stdio.h>
int main(){

   float nota1, nota2, nota3;
   char nome[100];

   printf("Informe seu nome:");
   scanf("%s",nome);
   printf("Insira a sua primeira nota no período semestral:");
   scanf("%f",&nota1);
   printf("Insira a sua segunda nota no período semestral:");
   scanf("%f",&nota2);
   printf("Insira a sua terceira nota no período semestral:");
   scanf("%f",&nota3);
   printf("%s, a média das suas notas no semestre é:%2.f",nome,(nota1+nota2+nota3)/3);

    return 0;
}