#include <stdio.h>

int main() {
    float media;
    int frequencia;

    printf("Digite a media: ");
    scanf("%f", &media);

    printf("Digite a frequencia: ");
    scanf("%d", &frequencia);

    if (media < 6) {
        printf("Reprovado");
    } else if (frequencia < 75) {
        printf("Reprovado");
    } else {
        printf("Aprovado");
    }

    return 0;
}