#include <stdio.h>

void preencherVetor(float vet[], int tamanho){
    int i;
    for (i = 0; i < tamanho; i++){
    printf("Mes %d: ", i + 1);
    scanf("%f", &vet[i]);
    
    }


}

float calcular_lucro(float ganhos[], int tamanho, float gastos[], float lucros[]){
    int i;
    float s = 0;
    for (i = 0;i < tamanho; i++){

        lucros[i] = ganhos[i] - gastos[i];
        s += lucros[i]; 

    }


}

void exibirVetor(float vet[], int tamanho){

    int i;
    float s = 0;
    for(i = 0; i < tamanho;i++){
        printf("Mes %d = R$%.2f\n", i + 1, vet[i]);
        s += vet[i];

    }
    printf("Total: R$%.2f\n", s);




}





int main(int argc, char const *argv[])
{
    int meses = 12;
    float ganhos[meses], gastos[meses], lucros[meses];
    printf("Informe os ganhos da empresa em cada mes:\n");
    preencherVetor(ganhos, meses);
    printf("Informe os gastos da empresa em cada mes:\n");
    preencherVetor(gastos, meses);
    calcular_lucro(ganhos, meses, gastos, lucros);
    printf("Ganhos:\n");
    exibirVetor(ganhos, meses);
    printf("Gastos:\n");
    exibirVetor(gastos, meses);
    printf("Lucros:\n");
    exibirVetor(lucros, meses);



    return 0;
}
