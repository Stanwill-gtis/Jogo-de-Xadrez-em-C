#include <stdio.h>

/*
   Programa: Simulação do movimento da Rainha
   Regra: A Rainha pode mover-se em todas as direções.
   Aqui, ela vai andar 8 casas para a esquerda.
   Estrutura usada: do-while
*/

int main() {
    int movimentosRainha = 8;
    int k = 1;

    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda (casa %d)\n", k);
        k++;
    } while (k <= movimentosRainha);

    return 0;
}
