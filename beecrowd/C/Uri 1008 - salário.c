#include <stdio.h>

int main(){
	int num, horasTrabalhadas;
	float salarioPorHora, salario;

	scanf("%d", &num);
	scanf("%d", &horasTrabalhadas);
	scanf("%f", &salarioPorHora);

	salario = salarioPorHora * horasTrabalhadas;

	printf("NUMBER = %d\n", num);
	printf("SALARY = U$ %.2f\n", salario);

	return 0;
}