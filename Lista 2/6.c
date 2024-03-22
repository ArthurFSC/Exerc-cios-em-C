#include <stdio.h>
int main(){
 float n1, n2, n3;
  printf("Informe o primeriro valor:")
  scanf("%f", &n1)

  printf("Informe o segundo valor:")
  scanf("%f", %n2)

  printf("Informe o terceiro valor:")
  scanf("%f", &n3)

  if(n1 > n3 || n1 > n2){
    printf("%f, é o maior valor", n1)
  }
  else if(n2 > n1 || n2 > n3){
    printf("%f, é o maior valor.", n2)
  }
  else{
    printf("%f, é o maior valor.", n3)
    }
    
  return 0;
}