#include <stdio.h>

#define MAX_SIZE 50

void inserirValor(int vetor[], int *tamanho, int valor) {
    if (*tamanho < MAX_SIZE) {
        vetor[*tamanho] = valor;
        (*tamanho)++;
    } else {
        printf("O vetor está cheio. Não é possível inserir mais elementos.\n");
    }
}

void buscarValor(int vetor[], int tamanho, int valor) {
    printf("Posições onde o valor %d foi encontrado:\n", valor);
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void exibirVetor(int vetor[], int tamanho) {
    printf("Valores no vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetorA[MAX_SIZE];
    int vetorB[MAX_SIZE];
    int tamanhoA = 0;
    int tamanhoB = 0;

    int opcao;

    do {
        printf("\nMenu Principal\n");
        printf("Opções:\n");
        printf("1 - Inserir novo valor\n");
        printf("2 - Procurar valor\n");
        printf("3 - Exibir vetor\n");
        printf("0 - Encerrar programa\n");
        printf("Informe a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                int valor;
                printf("Informe o valor a ser inserido: ");
                scanf("%d", &valor);

                if (valor % 2 == 0) {
                    inserirValor(vetorA, &tamanhoA, valor);
                } else {
                    inserirValor(vetorB, &tamanhoB, valor);
                }
                break;
            }
            case 2: {
                int valor;
                printf("Informe o valor a ser procurado: ");
                scanf("%d", &valor);

                if (valor % 2 == 0) {
                    buscarValor(vetorA, tamanhoA, valor);
                } else {
                    buscarValor(vetorB, tamanhoB, valor);
                }
                break;
            }
            case 3: {
                int escolha;
                printf("Informe o vetor a ser exibido (1 para A, 2 para B): ");
                scanf("%d", &escolha);

                if (escolha == 1) {
                    exibirVetor(vetorA, tamanhoA);
                } else if (escolha == 2) {
                    exibirVetor(vetorB, tamanhoB);
                } else {
                    printf("Opção inválida.\n");
                }
                break;
            }
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}
