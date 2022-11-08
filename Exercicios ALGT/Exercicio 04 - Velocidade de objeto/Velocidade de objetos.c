#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float vi, a, t;
	
	printf("Digite a velocidade inicial do objeto (km/h): ");
	scanf("%f", &vi);
	
	printf("Digite a aceleracao que o objeto tera (km/h^2): ");
	scanf("%f", &a);
	
	printf("Digite o tempo tomado do objeto ate o destino (h): ");
	scanf("%f", &t);
	
	float v = vi + a*t;
	
	printf("Sua velocidade eh: %.2f", v);
	
	return 0;
}
