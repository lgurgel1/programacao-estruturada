#include <stdio.h>

int calcularMDC(int x, int y) {
    if (x == y) {
        return x;
    } else if (x > y) {
        return calcularMDC(x - y, y);
    } else {
        return calcularMDC(x, y - x);
    }
}

int main() {
    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    if (num1 < 0 || num2 < 0) {
        printf("Por favor, insira números inteiros positivos.\n");
    } else {
        int mdc = calcularMDC(num1, num2);
        printf("O MDC de %d e %d é: %d\n", num1, num2, mdc);
    }

    return 0;
}
