#include <stdio.h>

int main() {

    char nome[50];
    int idade;
    float altura;

    printf("Qual e o seu nome: ");
    scanf("%49s", nome);

    printf("Qual a sua idade: ");
    scanf("%d", &idade);

    printf("Qual a sua altura: ");
    scanf("%f", &altura);

    printf("\nNome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);

    return 0;
}