#include <stdio.h>

int main() {
    char sexo, prematuro, continuar;
    int dias_incubadora, total_recem_nascidos = 0, total_prematuros = 0, total_dias_incubadora = 0, maior_dias = 0;

    do {
        printf("Digite o sexo do recém-nascido ('M' para masculino, 'F' para feminino): ");
        scanf(" %c", &sexo);
        
        if (sexo != 'M' && sexo != 'F') {
            printf("Sexo inválido! Digite 'M' para masculino ou 'F' para feminino.\n");
            continue;
        }
        
        printf("O recém-nascido é prematuro? ('S' para sim, 'N' para não): ");
        scanf(" %c", &prematuro);
        
        if (prematuro != 'S' && prematuro != 'N') {
            printf("Resposta inválida! Digite 'S' para sim ou 'N' para não.\n");
            continue;
        }
        
        if (prematuro == 'S') {
            printf("Quantos dias passou na incubadora? ");
            scanf("%d", &dias_incubadora);
            
            if (dias_incubadora < 1) {
                printf("Número inválido de dias na incubadora! Deve ser pelo menos 1.\n");
                continue;
            }
            
            total_prematuros++;
            total_dias_incubadora += dias_incubadora;
            
            if (dias_incubadora > maior_dias) {
                maior_dias = dias_incubadora;
            }
        }
        
        total_recem_nascidos++;
        
        printf("Deseja continuar? ('S' para sim, 'N' para não): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S');

    if (total_recem_nascidos > 0) {
        float percent_prematuros = (float)total_prematuros / total_recem_nascidos * 100;
        float percent_prematuros_masculinos = (float)total_prematuros / total_recem_nascidos * 100;
        float percent_prematuros_femininos = (float)total_prematuros / total_recem_nascidos * 100;
        float media_dias_incubadora = (float)total_dias_incubadora / total_prematuros;

        printf("\nEstatísticas:\n");
        printf("Percentagem de recém-nascidos prematuros em relação ao total: %.2f%%\n", percent_prematuros);
        printf("Percentagem de recém-nascidos prematuros do sexo masculino: %.2f%%\n", percent_prematuros_masculinos);
        printf("Percentagem de recém-nascidos prematuros do sexo feminino: %.2f%%\n", percent_prematuros_femininos);
        printf("Média de dias de permanência dos recém-nascidos prematuros na incubadora: %.2f\n", media_dias_incubadora);
        printf("Maior número de dias que um recém-nascido prematuro permaneceu na incubadora: %d\n", maior_dias);
    } else {
        printf("Nenhum recém-nascido registrado.\n");
    }

    return 0;
}
