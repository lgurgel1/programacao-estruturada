#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int f;
    int m = 1;
    printf("Digite um numero inteiro para ver seu fatorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("O fatorial de um número negativo não é definido.\n");
    } else if (num == 0) {
        printf("0! = 1\n");
    } else {
        printf("%d! = ", num);
        for (f = num; f >= 1; f--) {
            m = m * f;
            printf("%d", f);
            if (f != 1) {
                printf(" . ");
            }
        }
        printf(" = %d", m);
    }

    return 0;
}
