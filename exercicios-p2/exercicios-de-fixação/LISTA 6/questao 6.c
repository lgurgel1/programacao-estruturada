#include <stdio.h>

#define MAX_SIZE 100

int buscar_valor(int vetor[], int qtd_preenchida, int valor) {
    for (int i = 0; i < qtd_preenchida; i++) {
        if (vetor[i] == valor) {
            return i;
        }
    }
    return -1;
}

void inserir_valor(int vetor[], int *qtd_preenchida, int valor) {
    if (*qtd_preenchida >= MAX_SIZE) {
        printf("O vetor está cheio. Não é possível inserir mais valores.\n");
        return;
    }
    if (buscar_valor(vetor, *qtd_preenchida, valor) != -1) {
        printf("O valor já existe no vetor. Não é permitida a inserção de valores repetidos.\n");
        return;
    }
    vetor[*qtd_preenchida] = valor;
    (*qtd_preenchida)++;
    printf("Valor %d inserido com sucesso!\n", valor);
}

void exibir_vetor(int vetor[], int qtd_preenchida) {
    printf("Valores no vetor: ");
    for (int i = 0; i < qtd_preenchida; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void remover_valor(int vetor[], int *qtd_preenchida, int valor) {
    int posicao = buscar_valor(vetor, *qtd_preenchida, valor);
    if (posicao == -1) {
        printf("O valor não foi encontrado no vetor.\n");
        return;
    }

    for (int i = posicao; i < *qtd_preenchida - 1; i++) {
        vetor[i] = vetor[i + 1];
    }

    (*qtd_preenchida)--;
    printf("Valor %d removido com sucesso!\n", valor);
}

int main() {
    int vetorA[MAX_SIZE], vetorB[MAX_SIZE];
    int qtd_preenchidaA = 0, qtd_preenchidaB = 0;
    int opcao, valor;

    while (1) {
        printf("Menu Principal\n");
        printf("Opções:\n");
        printf("1 - Inserir novo valor\n");
        printf("2 - Procurar valor\n");
        printf("3 - Exibir vetor\n");
        printf("4 - Remover valor\n");
        printf("0 - Encerrar programa\n");
        printf("Informe a opção desejada: ");
        
        if (scanf("%d", &opcao) != 1) {
            // Lida com entrada inválida (não é um número)
            printf("Entrada inválida. Por favor, insira um número válido.\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
            continue;
        }

        switch (opcao) {
            case 1:
                printf("Informe o valor a ser inserido: ");
                scanf("%d", &valor);
                if (valor % 2 == 0) {
                    inserir_valor(vetorA, &qtd_preenchidaA, valor);
                } else {
                    inserir_valor(vetorB, &qtd_preenchidaB, valor);
                }
                break;
            case 2:
                printf("Informe o valor a ser procurado: ");
                scanf("%d", &valor);
                if (valor % 2 == 0) {
                    int posicao = buscar_valor(vetorA, qtd_preenchidaA, valor);
                    if (posicao != -1) {
                        printf("O valor %d foi encontrado na posição %d do vetor A.\n", valor, posicao);
                    } else {
                        printf("O valor %d não foi encontrado no vetor A.\n", valor);
                    }
                } else {
                    int posicao = buscar_valor(vetorB, qtd_preenchidaB, valor);
                    if (posicao != -1) {
                        printf("O valor %d foi encontrado na posição %d do vetor B.\n", valor, posicao);
                    } else {
                        printf("O valor %d não foi encontrado no vetor B.\n", valor);
                    }
                }
                break;
            case 3:
                printf("Informe o vetor a ser exibido (1 para A, 2 para B): ");
                scanf("%d", &valor);
                if (valor == 1) {
                    exibir_vetor(vetorA, qtd_preenchidaA);
                } else if (valor == 2) {
                    exibir_vetor(vetorB, qtd_preenchidaB);
                } else {
                    printf("Opção inválida.\n");
                }
                break;
            case 4:
                printf("Informe o valor a ser removido: ");
                scanf("%d", &valor);
                if (valor % 2 == 0) {
                    remover_valor(vetorA, &qtd_preenchidaA, valor);
                } else {
                    remover_valor(vetorB, &qtd_preenchidaB, valor);
                }
                break;
            case 0:
                printf("Encerrando o programa.\n");
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
