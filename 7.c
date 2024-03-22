#include <stdio.h>
int main(){

    float t;
     printf("Informe a temperatura atual (Em graus celsius):");
     scanf("%f",&t);
     printf("A temperatura atual em fahreneit é : %.2f",(9*t+160)/5);
    
    return 0;
}