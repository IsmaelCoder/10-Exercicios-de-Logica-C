#include <stdio.h>

int main(){

 int caixas[10];
 int acumuladora = 0;

 for(int posicao = 0; posicao <= 9; posicao++){
    printf("Digite %d valores inteiros: ", posicao + 1);
    scanf("%d", &caixas[posicao]);

    if(caixas[posicao] < 0){
        acumuladora++;
    };
 }

printf("Total de valores negativos informados: %d", acumuladora);


return 0;
}
