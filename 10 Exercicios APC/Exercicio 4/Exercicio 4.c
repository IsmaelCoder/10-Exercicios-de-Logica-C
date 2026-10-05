#include <stdio.h>

int main(){

int inteiro;
int contadora = 1;
printf("Digite um numero inteiro positivo: ");
scanf("%d", &inteiro);

while(contadora <= 10){

printf("%d x %d = %d\n", contadora, inteiro, inteiro * contadora);

contadora++;
}

return 0;
}
