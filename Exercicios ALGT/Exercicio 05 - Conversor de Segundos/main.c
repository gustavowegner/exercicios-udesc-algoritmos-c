#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x;
	
	printf("Digite a quantidade de segundos que voce deseja converter: ");
	scanf("%d", &x);
	
	int horas = x / 3600;
	int resto = x % 3600;
	int min = resto / 60;
	int seg = resto % 60;
	
	printf("Sua quantidade de segundos foi convertido em %dh %dmin %ds\n", horas, min, seg);
	
	
	return 0;
}
