#include <stdio.h>

int main(){

    float distancia, gasto;
    
    printf("Informe a distância percorrida:");
    scanf("%f",&distancia);
    printf("Informe a quantidade de combustível consumida no percurso:");
    scanf("%f", &gasto );
    printf("O consumo médio de combustível do automóvel (em litros por kmh)é:%2.f",distancia/gasto);
    


    return 0;
}