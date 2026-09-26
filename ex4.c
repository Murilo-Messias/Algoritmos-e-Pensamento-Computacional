#include <stdio.h> 

int main(){
  
    int idade ;
    printf("informe sua idade: ");
    scanf("%d" , &idade );

    if (idade >= 18) {
		printf("A pessoa e maior de idade.\n");
	} else {
		printf("A pessoa e menor de idade.\n");
	}

	return 0;
}
