#include <stdio.h>
#include <math.h>
int main()

{
    float a, b, c, delta, eq, x1, x2;
    printf("Digite o coeficiente A: ");
    scanf(" %f", &a);
    printf("Digite o coeficiente B: ");
    scanf(" %f", &b);
    printf("Digite o coeficiente C: ");
    scanf(" %f", &c);


delta = pow(b,2) - 4 * a * c;
x1 = (- (b) + sqrt(delta) ) / 2 * a;
x2 = (- (b) - sqrt(delta) ) / 2 * a;
if (delta < 0){

    printf("nao existe raiz real");
}
else if(delta == 0){

    printf("%.1f = %.1f = -%.1f / 2 * %.1f", x1, x2, b, a);
}
else{

    printf("x1 eh %.1f, x2 eh %.1f", x1, x2);
}
    return 0;
}
