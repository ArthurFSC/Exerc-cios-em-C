#include <stdio.h> 
int main(){
 int numero;

 printf("Informe um valor inteiro:");
 scanf("%d", &numero);

 if(numero % 2 == 0){
    printf("Este número é par.");
 }

 else{
    printf("Este número é ímpar.");
 }
   return 0; 
}