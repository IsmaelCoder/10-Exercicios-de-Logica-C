#include <stdio.h>

int main() {
    int caixas[10];  // 10 caixinhas vazias: caixas[0] ate caixas[9]
    int soma = 0;    // vai guardar o total acumulado

    for (int posicao = 0; posicao <= 9; posicao++) {
        // "posicao" e o dedo que aponta pra uma caixinha de cada vez (0, 1, 2... 9)

        printf("Digite um numero para a caixa[%d]: ", posicao);

        // &caixas[posicao] = "o ENDERECO da caixinha apontada agora"
        // o scanf precisa saber ONDE guardar o numero digitado
        scanf("%d", &caixas[posicao]);

        // caixas[posicao] (sem &) = "o VALOR que ja esta dentro da caixinha apontada"
        // aqui so estamos lendo o que foi guardado, por isso sem &
        soma = soma + caixas[posicao];
    }

    // soma (sem &) porque so queremos MOSTRAR o valor, nao guardar nada nele
    printf("A soma de todos os valores e: %d", soma);

    return 0;
}
