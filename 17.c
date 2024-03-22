#include <stdio.h>
int main(){
int qn = 0;
int numero;

 for(int contador=1;contador<=80;contador++){
    printf("Insira um número: ");
    scanf("%d", &numero);

    if(numero >=10 && numero <=150){ 
        qn=qn+1;
        }
    if(contador==80){
     printf("A quantidade de números nesse intervalo é:%d",qn);
    } 
}
    return 0;
}
