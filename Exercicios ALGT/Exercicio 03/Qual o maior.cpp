#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b, c;
	
	printf("Digite o numero A: ");
	scanf("%d", &a);
	printf("Digite o numero B: ");
	scanf("%d", &b);
	printf("Digite o numero C: ");
	scanf("%d", &c);
	
	if(a > b && a > c) {
		printf("A eh o maior dos numeros."); 
	} else {
		if(b > a && b > c) {
			printf("B eh o maior dos numeros."); 
		} else {
			printf("C eh o maior dos numeros.");
		}
	}
	
	return 0;
}
