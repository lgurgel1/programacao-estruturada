#include <stdio.h>

int main() {
    int tamanho = 10; 
    int vetorA[tamanho], vetorB[tamanho];

    printf("Digite %d valores para o vetor A:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < tamanho; i++) {
        if (i % 2 == 0) {
            vetorB[i] = vetorA[i] / 2;
        } else {
            vetorB[i] = vetorA[i] * 3;
        }
    }

    printf("\nVetor A: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorA[i]);
    }

    printf("\nVetor B: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorB[i]);
    }
    printf("\n");

    return 0;
}
