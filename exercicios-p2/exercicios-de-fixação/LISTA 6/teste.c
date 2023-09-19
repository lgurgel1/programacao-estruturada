#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
    char resposta = 'S';
    int tamanho = 9;
    int vetVoto[tamanho];

    do {
        printf("Tem outro eleitor querendo votar? Digite S/N: ");
        scanf(" %c", &resposta); // Corrija para &resposta para atualizar a variável
        resposta = toupper(resposta);
        
        if (resposta != 'S' && resposta != 'N') {
            printf("Resposta incorreta. Digite S para Sim ou N para Não.\n");
        }
    } while (resposta != 'S' && resposta != 'N'); // Continue enquanto a resposta não for S nem N

    return 0;
}
