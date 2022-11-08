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
		printf("O seu triangulo é equílatero!");
	} else {
		if ( retaA != retaB && retaA != retaC && retaB != retaC ){
			printf("O seu triangulo é escaleno!");
		} else {
			printf("O seu triangulo é isóceles!");
		}
	}
	return 0;
}
