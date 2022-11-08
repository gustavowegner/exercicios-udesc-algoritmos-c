#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int sal, fin;
	
	printf("Digite o salario para verificacao: ");
	scanf("%d", &sal);
	printf("Digite o financiamento pretendido para verificacao: ");
	scanf("%d", &fin);
	
	if(fin <= 5*sal){
		printf("O seu financiamento sera liberado");
	} else {
		printf("O seu financiamento nao sera liberado\n");
		printf("Obrigado por nos consultar.");
	}
	
	return 0;
}
