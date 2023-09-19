#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um numero inteiro maior do que zero: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("O numero deve ser maior do que zero.\n");
        return 1; // Saída de erro
    }

    for (int i = num; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n"); // Nova linha após cada linha de números
    }

    return 0;
}

