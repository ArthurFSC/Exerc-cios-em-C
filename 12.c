#include <stdio.h>
int main(){

float custof, percdist, imp, custoc;
 printf("Informe o custo de fábrica do carro:");
 scanf("%f",&custof);
 percdist=0.28;
 imp=0.45;
 custoc=custof+(custof*imp)+(custof*percdist);
 printf("O valor de venda ao consumidor é:%.2f",custoc);



    return 0;
}