#include <stdio.h>

int main(){

int numeroAtual = 1;
int soma = 0;
int numeroFinal;

printf("Digite o até que numero vai a soma: ");
scanf("%d", &numeroFinal);

for(numeroAtual = 1; numeroAtual <= numeroFinal; numeroAtual++){

soma = soma = numeroAtual;
}

printf("A soma de 1 até %d e: %d\n", numeroFinal, soma);

return 0;
}
