#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	printf("Digite um n�mero: ");
	scanf("%i", &n);
	
	int fat = 1;
	int cont; 
	
	for( cont = 1 ; cont <= n ; cont++ ) {
		fat = fat * cont;
	}
	
	printf("Fatorial de %i �: %i\n", n, fat);
	return 0;
}
