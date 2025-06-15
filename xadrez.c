#include <stdio.h>

//Variáveis de suporte i (para loops) e completo (para manejar os loops aninhados do cavalo e do bispo).

int i;
int completo = 0;

//funções recursivas para as três peças que se movem em linha reta.

void Rainha(int rcasas) {
    if (rcasas > 0) {
        printf("Esquerda\n");
        Rainha(rcasas-1);
    }
}

void Bispo(int bcasas) {
    completo = 0;
    if (bcasas > 0) {
        while (completo == 0) {
            for (i = 0; i < 1; i++) {
                printf("Cima\n");
            }
            printf("Direita\n");
            completo++;
        }
        Bispo(bcasas-1);
    }

}

void Torre(int tcasas) {
    if (tcasas > 0) {
        printf("Direita\n");
        Torre(tcasas-1);
    }


}

//Código principal. Declara a peça que vai se mover e, em seguida, dita os movimentos.

int main() {
    printf("Movimento da Torre:\n");
    Torre(5);

    printf("\nMovimento do Bispo\n");
    Bispo(5);

    printf("\nMovimento da Rainha:\n");
    Rainha(8);

    printf("\nMovimento do Cavalo:\n");
    while (completo == 0) {
        for (i = 0; i < 2; i++) {
            printf("Cima\n");
        }
        printf("Direita\n");
        completo++;
    }
return 0;
}

