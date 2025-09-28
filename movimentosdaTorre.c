#include <stdio.h>

/*
   Programa: Simulação do movimento da Torre
   Regra: A Torre move-se em linha reta horizontal ou vertical.
   Aqui, ela vai andar 5 casas para a direita.
   Estrutura usada: for
*/

int main() {
    int movimentosTorre = 5;

    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentosTorre; i++) {
        printf("Direita (casa %d)\n", i);
    }

    return 0;
}
