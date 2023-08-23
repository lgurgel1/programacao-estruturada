#include <stdio.h>
#include <math.h>

int main()

{
    float distancia, angulo;
    double altura;
    printf("Digite o angulo de decolagem: ");
    scanf("%f", &angulo);
    printf("Digite a distancia percorrida do aviao: ");
    scanf("%f", &distancia);

    altura = sin(angulo) * distancia;
    printf("A altura eh de %f", altura);

    return 0;
}
