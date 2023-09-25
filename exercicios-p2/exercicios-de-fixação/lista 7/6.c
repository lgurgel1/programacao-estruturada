#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}


void imprimirFibonacci(int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N deve ser um número inteiro positivo.\n");
        return 1;
    }

    printf("Série de Fibonacci com %d termos:\n", N);
    imprimirFibonacci(N);

    return 0;
}
