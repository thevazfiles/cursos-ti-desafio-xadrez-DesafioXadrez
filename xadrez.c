#include <stdio.h>
#include <stdlib.h>

int main() {

    //Variáveis de controle para as estruturas de repetição.
    int movimentoBispo = 0, movimentoRainha = 0;

    // Strings usadas para representar direções de movimento.
    char direita[] = "Direita";
    char esquerda[] = "Esquerda";
    char cima[] = "Cima";
    char baixo[] = "Baixo";

    // String de quantidade de casas do cavalo.
    int casasVertical = 2; // Movimento Vertical: Dias casas para baixo.
    int casasHorizontal = 1; // Movimento Horizontal: Uma casa para a esquerda.

    // Movimentação da TORRE: 5 casas para a direita.
    // Estrutura utilizada: FOR
    printf("\n1 - Movimentação da TORRE: \n");

    for (int movimentoTorre = 0; movimentoTorre < 5; movimentoTorre++) {
        printf("%s\n", direita);
    }

    // Movimentação do BISPO: 5 casas na diagonal para a direita.
    // Estrutura utilizada: WHILE

    printf("\n2 - Movimentação do BISPO: \n");

    while (movimentoBispo < 5) {
        printf("%s, %s\n", cima, direita);
        movimentoBispo++; // incrementa o contador do número de movimentos.
    }

    // Movimentação da RAINHA: 8 casas para a esquerda.
    // Estrutura utilizada: DO-WHILE

    printf("\n3 - Movimentação da RAINHA: \n");

    do{
        printf("%s\n", esquerda);
        movimentoRainha++; // incrementa o contador do número de movimentos.
    } while (movimentoRainha < 8); 

    // Movimentação do CAVALO: 2 casas para baixo. - Estrutura utilizada: FOR
    // Movimentação do CAVALO: 1 casa para a esquerda. - Estrutura utilizada: WHILE

    printf("\n4 - Movimentação do CAVALO");

    // Loop Externo (FOR): Simula as 2 casas para BAIXO (Movimento Vertical)
    // Utilizado o FOR, pois o número de repetições (casasVertical = 2) é fixo.
    for (int i = 0; i < casasVertical; i++) {
        printf("%s\n", baixo);

        // Após concluir o movimento vertical, executa o movimento horizontal.
        if (i == casasVertical - 1) {
            int j = 0;
            while (j < casasHorizontal) {
                printf("%s\n", esquerda);
                j++;
               
            }
        }
    }

    return 0;
}
