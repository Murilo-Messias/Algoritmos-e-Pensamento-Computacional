#include <stdio.h>

int main() {
    int numero;
    int resultado;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= 10; i++) {
        resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
    }

    return 0;
}