#include <stdio.h>
int main(){
float n1, n2, n3, md;
char nome[100];

printf("Escreva seu nome:");
scanf("%s",nome);
printf("Informe sua primeira nota no semestre:");
scanf("%f",&n1);
printf("Informe sua segunda nota no semestre:");
scanf("%f",&n2);
printf("Informe sua terceira nota no semestre:");
scanf("%f",&n3);
md=(n1+n2+n3)/3;
if(md>=7){
    printf("%s, você está Aprovado.",nome);
}
if(md<=5){
    printf("%s, você está Reprovado.",nome);
}
if(md>5 && md<7){
    printf("%s, você está de Recuperação.",nome);
}


    return 0;
}