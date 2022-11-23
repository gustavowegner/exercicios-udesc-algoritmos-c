#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int n, i, resto;
	
	printf("Digite quantos números deseja: ");
	scanf("%d", &n);
	
	int cont = 1;
	
	while ( cont <= n ) {
		if (cont%2 == 0 ){
			cont++;
		} else {
			printf("%i\n", cont);
			cont++;
		}
	}
	return 0;
}
