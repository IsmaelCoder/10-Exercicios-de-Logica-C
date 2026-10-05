#include <stdio.h>

int main(){
int contadora = 10;

do{
    if (contadora > 0){
        printf("%d\n", contadora);
    }
    else{
        printf("Fim da contagem!\n");
    }
    contadora--;

}while(contadora >= 0);


return 0;
}
