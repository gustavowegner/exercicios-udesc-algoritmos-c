#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	printf("Digite um número: ");
	scanf("%i", &n);
	
	int fat = 1;
	
	while (n > 0){
		fat = fat * n;
		n = n - 1;
	}
	
	printf("Fatorial: %i\n", fat);
	return 0;
}
