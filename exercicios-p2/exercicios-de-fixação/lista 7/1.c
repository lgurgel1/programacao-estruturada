#include <stdio.h>

void hanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 1) {
        printf("Mova disco 1 de %c para %c\n", origem, destino);
    } else {
        hanoi(n - 1, origem, auxiliar, destino);
        printf("Mova disco %d de %c para %c\n", n, origem, destino);
        hanoi(n - 1, auxiliar, destino, origem);
    }
}

int main() {
    int nDiscos;

    printf("Informe a quantidade de discos (1 a 64): ");
    scanf("%d", &nDiscos);

    if (nDiscos < 1 || nDiscos > 64) {
        printf("Número de discos fora do intervalo permitido.\n");
        return 1;
    }

    printf("\nSolução da Torre de Hanoi com %d disco(s):\n", nDiscos);
    hanoi(nDiscos, 'A', 'C', 'B');

    return 0;
}
