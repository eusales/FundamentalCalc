#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void limpar_buffer() {
    int temp;
    while ((temp = getchar()) != '\n' && temp != EOF); 
}

void sair(){
    system("cls || clear");
    printf("Obrigado por usar a calculadora! Ate a proxima.\n");
    exit(0);
}

void continuar(){

    while (1) {

        char continuar;
        
        printf("Deseja realizar outra operacao? (s/n):\n");
        scanf(" %c", &continuar);
        continuar = tolower(continuar);
        system("cls || clear");
        
        if (continuar == 's') {
            system("cls || clear");
            break; 
            } else if (continuar == 'n') {
                sair();
                } else {
                    printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
                    continue; 
        }
    }
}

void adicao(){

    double num1, num2, resultado;
     
    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    resultado = num1 + num2;
    printf("Resultado: %.2lf + %.2lf = %.2lf\n", num1,num2,resultado);

    continuar();

    
}

void subtracao(){

    double num1, num2, resultado;
     
    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    resultado = num1 - num2;
    printf("Resultado: %.2lf - %.2lf = %.2lf\n", num1,num2,resultado);

    continuar();
}

void multiplicacao(){

    double num1, num2, resultado;
     
    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    resultado = num1 * num2;
    printf("Resultado: %.2lf x %.2lf = %.2lf\n", num1,num2,resultado);

    continuar();
}

void divisao(){

    double num1, num2, resultado;
     
    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);

    
    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    if (num2 == 0.0) {
        printf("Erro: Divisao por zero nao e permitida.\n");

        continuar(0);

    } else {
        resultado = num1 / num2;
        printf("Resultado: %.2lf / %.2lf = %.2lf\n", num1,num2,resultado);
    }

   continuar();

}

int main(){

    int opcao = 1;

    do{
        printf("===============================");
        printf("\n\tCalculadora Simples\n");
        printf("===============================\n");

        printf("Selecione uma operacao:\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");

        printf("Opcao:\n");
        scanf("%d", &opcao);
        limpar_buffer();
        system("cls || clear");

        switch(opcao){
            case 1:
                adicao();
                break;

            case 2:
                subtracao();
                break;

            case 3:
                multiplicacao();
                break;

            case 4:
                divisao();
                break;

            case 5:
                sair();
                break;

            default:
                printf("Digite uma opcao valida\n");
        }
    } while(1);
}