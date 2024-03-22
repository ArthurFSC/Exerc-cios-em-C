#include <stdio.h>
int main(){

float valor1, valor2;
 printf("Escreva o primeiro número:");
 scanf("%f",&valor1);
 printf("Escreva o segundo número:");
 scanf("%f",&valor2);
 if(valor1>valor2) printf("O maior número é:%.2f",valor1);
 else printf("O maior número é:%.2f",valor2);



    return 0;
}