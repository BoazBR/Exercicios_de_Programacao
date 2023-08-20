#include <stdio.h>

int main(){
	int cod1, cod2, numDePecas1, numDePecas2;
	float valorUnitario1, valorUnitario2, pagar;

	scanf("%d %d %f", &cod1, &numDePecas1, &valorUnitario1);
	scanf("%d %d %f", &cod2, &numDePecas2, &valorUnitario2);

	pagar = numDePecas1 * valorUnitario1 + numDePecas2 * valorUnitario2;

	printf("VALOR A PAGAR: R$ %.2f\n", pagar);
	return 0;
}