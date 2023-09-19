#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherVetor(int vet[], int tam) {
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++) {
        vet[i] = (rand() % 100) + 1;
    }
}

int gerarInteiro() {
    return (rand() % 100) + 1;
}

void exibirVetor(int vet[], int tam) {
    int i;
    printf("Numeros gerados: \n");
    for (i = 0; i < tam; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

void compararValores(int vet[], int tam, int valor) {
    int i;
    int encontrados[tam]; 
    int qtdEncontrados = 0; 

    for (i = 0; i < tam; i++) {
        if (valor == vet[i]) {
            encontrados[qtdEncontrados] = i;
            qtdEncontrados++;
        }
    }

    if (qtdEncontrados > 0) {
        printf("O numero %d foi encontrado em %d posicoes: ", valor, qtdEncontrados);
        for (i = 0; i < qtdEncontrados; i++) {
            printf("%d ", encontrados[i]);
        }
    } else {
        printf("Numero nao encontrado no vetor. ");
    }
    printf("\n");
}

int main() {
    const int tam = 1000;
    int vetAlea[tam];
    int numAlea;

    preencherVetor(vetAlea, tam);
    printf("Digite um numero aleatorio entre 1 e 100: ");
    scanf("%d", &numAlea);

    while (numAlea < 1 || numAlea > 100) {
        printf("Resposta incorreta. Digite um numero aleatorio entre 1 e 100: ");
        scanf(" %d", &numAlea);
    }

    exibirVetor(vetAlea, tam);
    compararValores(vetAlea, tam, numAlea);

    return 0;
}
