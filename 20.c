#include <stdio.h>
int main(){
 float valorv, desconto, valorf;
 int anov, ttl2000, ttg;
 char continuar;

 ttl2000=0;
 ttg=0;


 do{
  printf("Informe o ano do veículo:");
  scanf("%d",&anov);
  printf("Informe o valor do veículo:R$");
  scanf("%f",&valorv);
  if(anov<=2000){
   desconto=valorv*0.12;
   ttl2000++;
  }
   else{
    desconto = valorv*0.07;
   }

   valorf=valorv-desconto;
   
   printf("Desconto:%f\n",desconto);
   printf("Valor a ser pago pelo cliente é:R$%f\n",valorf);

   printf("Deseja calcular o desconto para outro veículo?(S para sim, N para nâo)\n");
   scanf("%s", &continuar);

} while (continuar == 's' || continuar == 'S');


printf("Total de carros até 2000:%i\n",ttl2000);
printf("Total geral de carros:%i\n",ttg);

return 0;
}