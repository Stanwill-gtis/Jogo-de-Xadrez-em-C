#include <stdio.h>

/*
   Programa: Simulação do movimento do Bispo
   Regra: O Bispo move-se sempre na diagonal.
   Aqui, ele vai andar 5 casas na diagonal "Cima, Direita".
   Estrutura usada: while
*/

int main() {
    int movimentosBispo = 5;
    int j = 1;

    printf("Movimento do Bispo:\n");
    while (j <= movimentosBispo) {
        printf("Cima, Direita (casa %d)\n", j);
        j++;
    }

    return 0;
}
