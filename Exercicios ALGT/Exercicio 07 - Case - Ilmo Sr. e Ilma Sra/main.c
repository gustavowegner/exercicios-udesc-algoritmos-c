#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	char sexo;
	char nome[30];
		
	printf("Por favor digite F se seu sexo for feminino ou M se for Masculino: ");
	scanf("%c", &sexo);
	
	printf("Por favor digite o nome que gostaria de ser referido: ");
	scanf("%s", &nome);
	
	switch(sexo){
		case 'F':
		case 'f':
			printf("Ilma Sra. %s, seja muito bem-vinda!", nome);
		break;
		
		case 'M':
		case 'm':
			printf("Ilmo Sr. %s, seja muito bem-vindo!", nome);
		break;
		
		default:
			printf("\nAconteceu algum erro!");
			break;
	}
	
	return 0;
}
