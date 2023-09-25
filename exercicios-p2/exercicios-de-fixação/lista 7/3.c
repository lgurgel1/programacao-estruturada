#include <stdio.h>


int calcularSoma(int n) {
    if (n <= 0) {
        return 0; 
    } else {
        return n + calcularSoma(n - 1); // Recursivamente, soma n e a soma dos números de 1 a n-1.
    }
}

int main() {
    int N;

   
    do {
        printf("Digite um número inteiro maior que zero: ");
        scanf("%d", &N);

        if (N <= 0) {
            printf("N deve ser maior que zero. Tente novamente.\n");
        }
    } while (N <= 0);

    
    int soma = calcularSoma(N);

    printf("A soma dos números de 1 a %d é: %d\n", N, soma);

    return 0;
}
