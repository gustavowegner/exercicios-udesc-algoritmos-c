#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float v, vi, a, t;
	
	printf("Digite a velocidade inicial do objeto: ");
	scanf("%f", &vi);
	
	printf("Digite a aceleracao que o objeto tera: ");
	scanf("%f", &a);
	
	printf("Digite o tempo tomado do objeto ate o destino: ");
	scanf("%f", &t);
	
	v= vi + a * t;
	
	printf("Sua velocidade eh: %f", &v);
	
	return 0;
}
