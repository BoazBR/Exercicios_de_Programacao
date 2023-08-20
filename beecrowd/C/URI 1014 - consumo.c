#include <stdio.h>

int main(){
	int distancia;
	float combustivel, kmPorLitros;

	scanf("%d", &distancia);
	scanf("%f", &combustivel);

	kmPorLitros = distancia / combustivel;

	printf("%.3f km/l\n", kmPorLitros);


	return 0;
}