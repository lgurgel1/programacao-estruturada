#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherVetor(int vet[], int tam){
    int i;
    srand(time(NULL));
    for(i = 0; i < tam; i++)
    {
        
        vet[i] = (rand() % 100) + 1;
    }

}

int gerarInteiro(int numero){


    srand(time(NULL));
    numero = (rand() % 100) + 1;
    return numero;


}

void exibirVetor(int vet[], int tam){
    int i;
    printf("Numeros gerados: \n");
    for(i = 0; i < tam; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int compararValores(int vet[], int tam, int valor){
    int i;

        if (valor == vet[i]){

            printf("O numero %d foi encontrado na posicao %d", valor, i);

        }

        else{

            printf("Numero nao encontrado no vetor. ");
        }


    return valor;


}
int main(int argc, char const *argv[])
{
    const int tam = 1000;
    int vetAlea[tam];
    int numAlea;
    preencherVetor(vetAlea, tam);
    printf("Digite um numero aleatorio entre 1 e 100: ");
    scanf("%d", &numAlea);
    while (numAlea < 1 || numAlea > 100){
        printf("Resposta incorreta. Digite um numero aleatorio entre 1 e 100: ");
        scanf(" %d", &numAlea);

    }
    exibirVetor(vetAlea, tam);
    compararValores(vetAlea, tam, numAlea);



    return 0;
}
