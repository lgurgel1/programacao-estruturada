#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sorteiaFace(int *resultado) {
    *resultado = rand() % 6;
}

void realizarSimulacao(int resultados[6]) {
    int i;

    for (i = 0; i < 1000000; i++) {
        int resultado;
        sorteiaFace(&resultado);
        resultados[resultado]++;
    }
}

int main() {
    int resultados[6] = {0};

    srand(time(NULL));

    realizarSimulacao(resultados);
    printf("Quantidade de vezes que cada face foi sorteada:\n");
    for (int i = 0; i < 6; i++) {
        printf("Face %d: %d\n", i + 1, resultados[i]);
    }
    int min_ocorrencias = resultados[0];
    for (int i = 1; i < 6; i++) {
        if (resultados[i] < min_ocorrencias) {
            min_ocorrencias = resultados[i];
        }
    }

    if (min_ocorrencias >= 166666) {
        printf("O dado não eh viciado.\n");
    } else {
        printf("O dado eh viciado.\n");
    }

    return 0;
}