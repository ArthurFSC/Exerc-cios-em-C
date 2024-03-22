#include <stdio.h>
int main(){
float numero;

 printf("Escreva um número:");
 scanf("%f",&numero);
    if(numero >= 100 && numero <= 200){
        printf("O número está no intervalo de 100 a 200.");
    }
    else {
        printf("O número não está no intervalo de 100 a 200.");
    };


    return 0;
}