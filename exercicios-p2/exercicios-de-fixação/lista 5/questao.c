#include <stdio.h>

void preencher_vetor(float vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Informe a nota do aluno %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }
}

void calcular_medias(float notas_primeira_avaliacao[], float notas_segunda_avaliacao[], float medias[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        medias[i] = (notas_primeira_avaliacao[i] * 2 + notas_segunda_avaliacao[i] * 3) / 5;
    }
}

void exibir_vetor(float vetor[], int tamanho, char nome[]) {
    printf("%s:\n", nome);
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f\n", vetor[i]);
    }
}

void avaliar_situacao(float medias[], int situacoes[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (medias[i] >= 7.0) {
            situacoes[i] = 1;
        } else if (medias[i] >= 4.0) {
            situacoes[i] = 2;
        } else {
            situacoes[i] = 3;
        }
    }
}

void calcular_percentuais(int situacoes[], int tamanho, float *percent_aprovados, float *percent_recuperacao, float *percent_reprovados) {
    int aprovados = 0, recuperacao = 0, reprovados = 0;

    for (int i = 0; i < tamanho; i++) {
        if (situacoes[i] == 1) {
            aprovados++;
        } else if (situacoes[i] == 2) {
            recuperacao++;
        } else {
            reprovados++;
        }
    }

    *percent_aprovados = (float)aprovados / tamanho * 100;
    *percent_recuperacao = (float)recuperacao / tamanho * 100;
    *percent_reprovados = (float)reprovados / tamanho * 100;
}

float encontrar_menor_media(float medias[], int tamanho) {
    float menor_media = medias[0];
    for (int i = 1; i < tamanho; i++) {
        if (medias[i] < menor_media) {
            menor_media = medias[i];
        }
    }
    return menor_media;
}

float encontrar_maior_media(float medias[], int tamanho) {
    float maior_media = medias[0];
    for (int i = 1; i < tamanho; i++) {
        if (medias[i] > maior_media) {
            maior_media = medias[i];
        }
    }
    return maior_media;
}

float calcular_media_turma(float medias[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += medias[i];
    }
    return soma / tamanho;
}

int calcular_alunos_abaixo_media(float media_turma, float medias[], int tamanho) {
    int abaixo_media = 0;
    for (int i = 0; i < tamanho; i++) {
        if (medias[i] < media_turma) {
            abaixo_media++;
        }
    }
    return abaixo_media;
}

int main() {
    int num_alunos = 60;
    float notas_primeira_avaliacao[num_alunos];
    float notas_segunda_avaliacao[num_alunos];
    float medias[num_alunos];
    int situacoes[num_alunos];

    preencher_vetor(notas_primeira_avaliacao, num_alunos);
    preencher_vetor(notas_segunda_avaliacao, num_alunos);

    calcular_medias(notas_primeira_avaliacao, notas_segunda_avaliacao, medias, num_alunos);

    avaliar_situacao(medias, situacoes, num_alunos);

    float percent_aprovados, percent_recuperacao, percent_reprovados;
    calcular_percentuais(situacoes, num_alunos, &percent_aprovados, &percent_recuperacao, &percent_reprovados);

    float menor_media = encontrar_menor_media(medias, num_alunos);
    float maior_media = encontrar_maior_media(medias, num_alunos);

    float media_turma = calcular_media_turma(medias, num_alunos);

    int abaixo_media = calcular_alunos_abaixo_media(media_turma, medias, num_alunos);

    exibir_vetor(notas_primeira_avaliacao, num_alunos, "Notas da Primeira Avaliação");
    exibir_vetor(notas_segunda_avaliacao, num_alunos, "Notas da Segunda Avaliação");
    exibir_vetor(medias, num_alunos, "Médias");
    exibir_vetor(situacoes, num_alunos, "Situações dos Alunos");

    printf("Percentual de alunos aprovados: %.2f%%\n", percent_aprovados);
    printf("Percentual de alunos em recuperação: %.2f%%\n", percent_recuperacao);
    printf("Percentual de alunos reprovados: %.2f%%\n", percent_reprovados);
    printf("Menor média na turma: %.2f\n", menor_media);
    printf("Maior média na turma: %.2f\n", maior_media);
    printf("Média da turma: %.2f\n", media_turma);
    printf("Alunos abaixo da média da turma: %d\n", abaixo_media);

    return 0;
}
