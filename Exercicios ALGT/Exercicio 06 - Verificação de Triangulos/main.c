#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int retaA, retaB, retaC;
	
	printf("Digite o valor para a reta AB: ");
	scanf("%d", &retaA);
	
	printf("Digite o valor para a reta AB: ");
	scanf("%d", &retaB);
	
	printf("Digite o valor para a reta AB: ");
	scanf("%d", &retaC);
	
	if ( retaA == retaB && retaA == retaC){
		printf("O seu triangulo � equ�latero!");
	} else {
		if ( retaA != retaB && retaA != retaC && retaB != retaC ){
			printf("O seu triangulo � escaleno!");
		} else {
			printf("O seu triangulo � is�celes!");
		}
	}
	return 0;
}
