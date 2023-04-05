#include <stdio.h>

int main() {
    char operador;
    float num1, num2, resultado;

    printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &operador);

    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    switch(operador) {
        case '+':
            resultado = num1 + num2;
            printf("%.2f + %.2f = %.2f", num1, num2, resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("%.2f - %.2f = %.2f", num1, num2, resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("%.2f * %.2f = %.2f", num1, num2, resultado);
            break;

        case '/':
            if (num2 == 0) {
                printf("Erro! Não é possível dividir por zero.");
            } else {
                resultado = num1 / num2;
                printf("%.2f / %.2f = %.2f", num1, num2, resultado);
            }
            break;

        default:
            printf("Erro! Operador inválido.");
    }

    return 0;
}
