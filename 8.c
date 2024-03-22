#include <stdio.h>
int main(){

float vdol, real, conv;
 printf("Informe a quantia monteária em USD a ser convertida para R$:");
 scanf("%f",&real);
 vdol=4.95;
 conv=real*vdol;
 printf("A quantia monetária em R$ é: %.2f",conv);


    return 0;
}