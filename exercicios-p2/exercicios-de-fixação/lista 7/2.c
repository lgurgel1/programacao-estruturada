#include <stdio.h>

void exibeCrescente(int n, int current) {
    if (current <= n) {
        printf("%d ", current);
        exibeCrescente(n, current + 1);
    }
}

int main() {
    int num;
    printf("Informe um número inteiro: ");
    scanf("%d", &num);
    exibeCrescente(num, 1);
    printf("\n");
    return 0;
}
