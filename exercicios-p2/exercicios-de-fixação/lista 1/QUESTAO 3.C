#include <stdio.h>
int main(){
    float salario, aumento, novo;
    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salario);
    getchar();
    if (salario <= 1500){
        aumento = salario * 20.0 / 100.0;
        novo = salario + aumento;


        printf("O funcionario tera aumento de R$ %.2f e passara a receber R$ %.2f\n ", aumento, novo);

    }
    else if (salario > 1500 && salario <= 2500){

        aumento = salario * 15.0 / 100.0;
        novo = aumento + salario;
        printf("O funcionario tera aumento de R$ %.2f e passara a receber %.2f\n", aumento, novo);
    }
    else if (salario > 2500 && salario <= 4000){

        aumento = salario * 10.0 / 100.0;
        novo = aumento + salario;
        printf("O funcionario tera aumento de R$ %.2f e passara a receber %.2f\n", aumento, novo);
    }
    else{

        aumento = salario * 5.0 / 100.0;
        novo = aumento + salario;
        printf("O funcionario tera aumento de R$ %.2f e passara a receber %.2f\n", aumento, novo);
    }
    char resposta;
    while(resposta == 'S' || resposta == 's'){
        printf("Digite o salario atual do novo funcionario: ");
        scanf("%f", &salario);
        
        }
    if(resposta == 'N' || resposta == 'n'){
        
            printf("Programa encerrado\n");
           
        }
    else if (resposta != 'N' && resposta != 'S')
    {
    
        
            printf("Resposta invalida.\n");
            
        }

    printf("Voce deseja continuar? Responda com S ou N: ");
    scanf("%c", &resposta);

    return 0;
}
