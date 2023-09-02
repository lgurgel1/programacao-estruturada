#include <stdio.h>

int main() {
    int tamanho = 5; 
    int vetorA[tamanho], vetorB[tamanho], vetorC[tamanho];


    printf("Digite %d valores para o vetor A:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    
    printf("Digite %d valores para o vetor B:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetorB[i]);
    }

    
    for (int i = 0; i < tamanho; i++) {
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    
    printf("Vetor C (soma de A e B): ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorC[i]);
    }
    printf("\n");

    return 0;
}

