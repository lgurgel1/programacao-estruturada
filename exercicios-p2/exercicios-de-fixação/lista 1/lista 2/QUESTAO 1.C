#include <stdio.h>

int main()
{
    int n, x, produto = 1;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &n);

    printf("%d! = ", n); 

    for (x = n; x >= 1; x--) {
        produto = x * produto;

        printf("%d", x);

        
        if (x > 1) {
            printf(" x ");
        }
    }

    printf(" = %d.", produto); 

    return 0;
}
