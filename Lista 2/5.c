#include <stdio.h>
int main(){
 int x, y, z;

  printf("Informe o valor de x:");
  scanf("%d", &x);

  printf("Informe o valor de y:");
  scanf("%d", &y);

  printf("Informe o valor de z:");
  scanf("%d", &z);

  if(x == y && y == z){
    printf("Esse triângulo é equilátero.");
  }
  else if(x == y || z == x || z == y ){
    printf("Esse triângulo é isósceles.");
  }
  else{
    printf("Esse triângulo é escaleno.");
  }
    return 0;
}