#include <stdio.h>
#include <ctype.h>

int main() {
    char sexo;
    char prematuro;
    char resposta = 'S';
    int dias_incubadora = 0;
    int maior_dia_incubadora = 0;
    float porcentagem_recemnascidos = 0;
    float porcentagem_prematuros = 0;
    float porcentagem_prematuros_masculinos = 0;
    float porcentagem_prematuros_femininos = 0;
    float media_incubadora = 0;
    int total_prematuros = 0;
    int total_prematuros_masculino = 0;
    int total_prematuros_feminino = 0;
    int total_recem_nascidos = 0;
    int total_dias_incubadora = 0;

    do {
        printf("Qual o sexo do recem-nascido? Digite M/F: ");
        scanf(" %c", &sexo);
        sexo = toupper(sexo);

        if (sexo != 'M' && sexo != 'F') {
            printf("Resposta inválida.\n");
        } else {
            printf("O recem nascido eh prematuro? Digite S/N: ");
            scanf(" %c", &prematuro);
            prematuro = toupper(prematuro);

            if (prematuro != 'S' && prematuro != 'N') {
                printf("Resposta inválida.\n");
            }

            if (prematuro == 'S') {
                dias_incubadora = 1;
                printf("Digite quantos dias o recem nascido passou na incubadora: ");
                scanf(" %d", &dias_incubadora);
                total_dias_incubadora += dias_incubadora;
                total_prematuros++;

                if (dias_incubadora > maior_dia_incubadora) {
                    maior_dia_incubadora = dias_incubadora;
                }
            }
        }

        if (sexo == 'M') {
            total_prematuros_masculino++;
        } else if (sexo == 'F') {
            total_prematuros_feminino++;
        }

        total_recem_nascidos++;

        printf("Deseja continuar? Digite S/N: ");
        scanf(" %c", &resposta);
        resposta = toupper(resposta);

    } while (resposta == 'S');

    if (total_recem_nascidos > 0) {
        porcentagem_prematuros = ((float)total_prematuros / total_recem_nascidos) * 100;

        if (total_prematuros > 0) {
            porcentagem_prematuros_masculinos = ((float)total_prematuros_masculino / total_prematuros) * 100;
            porcentagem_prematuros_femininos = ((float)total_prematuros_feminino / total_prematuros) * 100;
            media_incubadora = ((float)total_dias_incubadora / total_prematuros);
        }
        
        printf("\nEstatísticas:\n");
        printf("Percentagem de recém-nascidos prematuros em relação ao total: %.2f\n", porcentagem_prematuros);
        printf("Percentagem de recém-nascidos prematuros do sexo masculino: %.2f\n", porcentagem_prematuros_masculinos);
        printf("Percentagem de recém-nascidos prematuros do sexo feminino: %.2f\n", porcentagem_prematuros_femininos);
        printf("Média de dias de permanência dos recém-nascidos prematuros na incubadora: %.2f\n", media_incubadora);
        printf("Maior número de dias que um recém-nascido prematuro permaneceu na incubadora: %d\n", maior_dia_incubadora);
    } else {
        printf("Nenhum recem-nascido registrado.");
    }

    return 0;
}
