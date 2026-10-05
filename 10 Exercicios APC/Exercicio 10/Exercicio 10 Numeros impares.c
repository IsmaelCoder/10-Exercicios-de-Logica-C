#include <stdio.h>

int main(){

int limite;

printf("Digite um numero inteiro positivo: ");
scanf("%d", &limite);

    for(int acumuladora = 1; acumuladora <= limite; acumuladora++){

        if(acumuladora % 2 != 0){
        printf("%d\n", acumuladora);
        }

}

return 0;
};

