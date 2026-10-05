#include <stdio.h>

int main(){

int acumuladora = 0;
int soma = 0;

    do{
    printf("Digite um numero(0 para parar): ");
    scanf("%d", &acumuladora);
    soma = soma + acumuladora;
    }while (acumuladora != 0);

printf("A soma de todos os numeros digitados é: %d", soma);

return 0;
};
