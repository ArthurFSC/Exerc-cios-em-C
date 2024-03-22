#include <stdio.h>
int main(){

int n1, n2, n3;
float media;

 printf("Insira o primeiro valor:");
 scanf("%d", &n1);

 printf("Insira o segundo valor:");
 scanf("%d" , &n2);

 printf("Insira o terceior valor:");
 scanf("%d" , &n3);

 media = (n1 + n2 + n3) / 3.0;

 printf("A média dos 3 valores é: %f", media);

    return 0;
}