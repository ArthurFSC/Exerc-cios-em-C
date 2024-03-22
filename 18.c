#include <stdio.h>
int main(){
   
 int idade;
 
  for(int contador=1;contador<=75;contador++){
    printf("Informe sua idade:");
    scanf("%d",&idade);

    if(idade>=18){
        printf("Maior de idade.\n");
     }
     else{
        printf("Menor de idade.\n");
     };
   };

   return 0;
}