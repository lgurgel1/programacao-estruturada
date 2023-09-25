#include <stdio.h>

double calcularPotencia(double x, int y) {
    if (y == 0) {
        return 1;
    } else if (y == 1) {
        return x;
    } else {
        return x * calcularPotencia(x, y - 1);
    }
}

int main() {
    double x;
    int y;

    printf("Digite o valor de X (real): ");
    scanf("%lf", &x);

    printf("Digite o valor de Y (inteiro maior ou igual a zero): ");
    scanf("%d", &y);

    if (y < 0) {
        printf("Y deve ser maior ou igual a zero.\n");
    } else {
        double resultado = calcularPotencia(x, y);
        printf("%lf elevado a %d é igual a %lf\n", x, y, resultado);
    }

    return 0;
}
