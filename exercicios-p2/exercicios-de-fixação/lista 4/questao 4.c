#include <stdio.h>

int main() {
    int tamanho = 100; 
    float vetorX[tamanho]; 
    float soma = 0; 

    
    printf("Digite %d valores para o vetor X:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &vetorX[i]);
        soma += vetorX[i]; 
    }

    printf("Soma dos elementos do vetor X: %.2f\n", soma);

    return 0;
}
