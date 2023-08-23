#include <stdio.h>
#include <math.h>
int main()
{
float raio, c, a, v;
printf("Informe o valor do raio: ");
scanf("%f", &raio);
c = 2 * M_PI * raio;
a = M_PI * pow(raio, 2);
v = 3.0 / 4.0 * M_PI * pow(raio, 3);
printf("O comprimento da circunferencia com raio %f eh %f\n", raio, c);
printf("A area do circulo de raio %f eh %f\n", raio, a);
printf("O volume da esfera de raio %f eh %f", raio, v);
    return 0;
}
