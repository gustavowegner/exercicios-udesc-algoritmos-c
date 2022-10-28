#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x;
	
	printf("Digite o numero desejado para verificacao: ");
	scanf("%d", &x);
	
	if(x<0){
		printf("Error: Seu numero eh negativo");
	} else {
		if(x%2 == 0){
			printf("Seu numero eh par");
		} else {
			printf("Seu numero eh impar");			
		}		
	

	}
	
	return 0;
}
