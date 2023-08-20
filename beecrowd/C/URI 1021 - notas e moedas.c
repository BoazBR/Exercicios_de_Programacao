#include <stdio.h>

int main(){
	double total;
	int cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;
	int cinquentaCentavos = 0, vinteECincoCentavos = 0, dezCentavos = 0, cincoCentavos = 0, umCentavo = 0;
	scanf("%lf", &total);
	int totalNotas = total;
	int totalMoedas = (total - totalNotas) * 100;

	while(totalNotas >= 100){
		cem ++;
		totalNotas -= 100;
	}

	while(totalNotas >= 50){
		cinquenta ++;
		totalNotas -= 50;
	}

	while(totalNotas >= 20){
		vinte ++;
		totalNotas -= 20;
	}

	while(totalNotas >= 10){
		dez ++;
		totalNotas -= 10;
	}

	while(totalNotas >= 5){
		cinco ++;
		totalNotas -= 5;
	}

	while(totalNotas >= 2){
		dois ++;
		totalNotas -= 2;
	}

	while(totalNotas >= 1){
		um ++;
		totalNotas -= 1;
	}

	printf("totalMoedas: %d\n", totalMoedas);

	while(totalMoedas >= 50){
		cinquentaCentavos ++;
		totalMoedas -= 50;
	}

	printf("totalMoedas: %d\n", totalMoedas);

	while(totalMoedas >= 25){
		vinteECincoCentavos ++;
		totalMoedas -= 25;
	}

	printf("totalMoedas: %d\n", totalMoedas);

	while(totalMoedas >= 10){
		dezCentavos ++;
		totalMoedas -= 10;
	}

	printf("totalMoedas: %d\n", totalMoedas);

	while(totalMoedas >= 5){
		cincoCentavos ++;
		totalMoedas -= 5;
	}

	printf("totalMoedas: %d\n", totalMoedas);

	while(totalMoedas >= 1){
		umCentavo ++;
		totalMoedas -= 1;
	}


	printf("totalMoedas: %d\n", totalMoedas);

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100,00\n", cem);
	printf("%d nota(s) de R$ 50,00\n", cinquenta);
	printf("%d nota(s) de R$ 20,00\n", vinte);
	printf("%d nota(s) de R$ 10,00\n", dez);
	printf("%d nota(s) de R$ 5,00\n", cinco);
	printf("%d nota(s) de R$ 2,00\n", dois);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1,00\n", um);
	printf("%d moeda(s) de R$ 0,50\n", cinquentaCentavos);
	printf("%d moeda(s) de R$ 0,25\n", vinteECincoCentavos);
	printf("%d moeda(s) de R$ 0,10\n", dezCentavos);
	printf("%d moeda(s) de R$ 0,05\n", cincoCentavos);
	printf("%d moeda(s) de R$ 0,01\n", umCentavo);


	return 0;
}