#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, x;
	int num = 1;
	
	printf("Digite qual numero quer descobrir os multiplos: ");
	scanf("%d", &x);
	
	printf("Digite at� que numero quer descobrir os multiplos: ");
	scanf("%d", &n);
	
	int cont;
	
	for(cont = 1 ; cont >= n ; cont++ ) {
		if ( num % x == 0) {
			printf("%d � multiplo de %d\n", num, n);
			num++;
		} else {
			printf("%d", num);
			num++;
		}	
	}
	
	return 0;
}
