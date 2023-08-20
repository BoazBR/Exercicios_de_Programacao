#include <stdio.h>

int main(){
	char nome[30];
	float salario, vendas, total;

	scanf("%s", &nome);
	scanf("%f", &salario);
	scanf("%f", &vendas);

	total += salario + 15 * (vendas / 100);

	printf("TOTAL = R$ %.2f\n", total);
	return 0;
}