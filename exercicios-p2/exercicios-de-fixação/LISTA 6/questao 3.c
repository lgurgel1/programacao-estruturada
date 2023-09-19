#include <stdio.h>

int main() {
    int votos[9] = {0}; // Inicializa um vetor para armazenar os votos de cada candidato e votos nulos/brancos
    char continuar;

    do {
        int voto;
        printf("Digite o número do candidato (0 a 8): ");
        scanf(" %d", &voto);

        if (voto >= 0 && voto <= 8) {
            votos[voto]++; // Incrementa o contador de votos do candidato escolhido
        } else {
            votos[0]++; // Se o voto for inválido, conta como nulo
        }

        printf("Outro eleitor quer votar? (s/n): ");
        scanf(" %c", &continuar); // Espaço em branco antes do %c limpa o buffer

    } while (continuar == 's' || continuar == 'S');

    // Calcula o total de votos
    int totalVotos = 0;
    for (int i = 0; i < 9; i++) {
        totalVotos += votos[i];
    }

    printf("\nResultado da eleição:\n");
    for (int i = 1; i < 9; i++) {
        float percentual = (float)votos[i] / totalVotos * 100;
        printf("Candidato %d: %.2f%%\n", i, percentual);
    }

    float percentualBrancos = (float)votos[0] / totalVotos * 100;
    float percentualNulos = (float)votos[9] / totalVotos * 100;

    printf("Votos em branco: %.2f%%\n", percentualBrancos);
    printf("Votos nulos: %.2f%%\n", percentualNulos);

    return 0;
}