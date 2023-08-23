#include <stdio.h>

int main() {
    char caracter;
    
    printf("Digite um caractere: ");
    scanf("%c", &caracter);
    
    if ((caracter >= 'a' && caracter <= 'z') || (caracter >= 'A' && caracter <= 'Z')) {
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' ||
            caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U') {
            printf("%c eh uma letra e uma vogal", caracter);
        } else {
            printf("%c eh uma letra e uma consoante", caracter);
        }

        if (caracter >= 'a' && caracter <= 'z') {
            printf(" minuscula\n");
        } else {
            printf(" maiuscula\n");
        }
    } else if (caracter >= '0' && caracter <= '9') {
        printf("%c eh um digito numerico\n", caracter);
    } else {
        printf("%c eh um simbolo\n", caracter);
    }
    
    return 0;
}
