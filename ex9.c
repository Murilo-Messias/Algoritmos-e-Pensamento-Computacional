#include <stdio.h>

int main() {
    float nota;
    int contador = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Digite a nota: ");
        scanf("%f", &nota);

        if (nota >= 6) {
            contador = contador + 1;
        }
    }

    printf("Notas maiores ou iguais a 6: %d", contador);

    return 0;
}