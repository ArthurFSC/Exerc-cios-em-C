#include <stdio.h>
int main(){
 char nome[100], sexo;
 float altura, idade, pesoideal;

 printf("Informe seu nome:");
 scanf("%s", nome);

 printf("Informe seu sexo:");
 scanf("%s", nome);

 printf("Informe sua altura:");
 scanf("%f", &altura);

 printf("Informe sua idade:");
 scanf("%f", &idade);

 if(sexo == 'm' || sexo == 'M'){
    if(altura > 1.70 && idade <= 20){
        pesoideal = (72.7 * altura) - 58;
    }
    else if(altura > 1.70 && idade >= 21 && idade <=39 ){
        pesoideal = (72.7 * altura) - 53;
    }
    else if(altura > 1.70 && idade >=40){
        pesoideal = (72.7 * altura) - 45;
    }
    else if (altura <= 1.70 && idade <=40){
        pesoideal = (72.7 * altura) - 50;
    }
     else if(altura <= 1.70 && idade > 40){
        pesoideal = (72.7 * altura) - 58;
       }
     }
  if(sexo == 'f' || sexo == 'F'){
        if(altura > 1.50){
            pesoideal = (62.1 * altura) - 44.7;
        }
        else if(altura <= 1.50 && idade >= 35){
            pesoideal = (62.1 * altura) - 49;
        }
        else if(altura <= 1.50 && idade <35){
            pesoideal = (62.1 * altura) - 49;
            }
        }
       printf("Nome: %s",nome);
       printf("Peso ideal:%f",pesoideal);
    
 




    return 0;
}
