#include <stdio.h>
int main(){
char nome[100];
char sexo;
int totalh, totalm;

  totalh=0;
  totalm=0;
 for(int contador=1;contador<=56;contador++){
    
 
    printf("Informe seu nome:");
    scanf("%s",nome);
   
    printf("Informe seu sexo (M para Masculino, F para Feminino):");
    scanf("%s", &sexo);
    
   
    if(sexo == 'm' || sexo == 'M' ){
     printf("%s, é homem.",nome);
     totalh=totalh+1;
   }
    else if(sexo == 'F' || sexo == 'f'){
     printf("%s, é mulher.",nome);
     totalm=totalm+1;
   }
     printf("O total de homens é: %i\n",totalh);
     printf("O total de mulheres é: %i\n",totalm);
}
 return 0;
}