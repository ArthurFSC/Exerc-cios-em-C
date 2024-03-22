#include <stdio.h>
int main(){

 int segundo, hora, minuto, resto;

 printf("Informe o tempo em segundos:");
 scanf("%d", &segundo);

 hora = segundo / 3600;
 resto = segundo % 3600;
 minuto = resto / 60;
 segundo = resto % 60;

 printf("O tempo equivalente é : %d horas, %d minutos, %d segundos.", hora, minuto, segundo);


    return 0;
}
 
