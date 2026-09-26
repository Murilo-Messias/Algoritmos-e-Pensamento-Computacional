#include <stdio.h>

int main() {

    float nota1, nota2, media;
    printf("Primeira nota: ");
    scanf("%d" , &nota1);

    printf("Segunda nota: ");
    scanf("%d" , &nota2);

    media= (nota1 + nota2) / 2.0f;
    printf("Media: %.2f\n", media);


    return 0 ;

   

}