#include <stdio.h>

int main(){
	int total, cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;
	scanf("%d", &total);

	printf("%d\n", total);

	while(total >= 100){
		total -= 100;
		cem += 1;
	}

	while(total >= 50){
		total -= 50;
		cinquenta += 1;
	}

	while(total >= 20){
		total -= 20;
		vinte += 1;
	}

	while(total >= 10){
		total -= 10;
		dez += 1;
	}

	while(total >= 5){
		total -= 5;
		cinco += 1;
	}

	while(total >= 2){
		total -= 2;
		dois += 1;
	}

	while(total >= 1){
		total -= 1;
		um += 1;
	}



	printf("%d nota(s) de R$ 100,00\n", cem);
	printf("%d nota(s) de R$ 50,00\n", cinquenta);
	printf("%d nota(s) de R$ 20,00\n", vinte);
	printf("%d nota(s) de R$ 10,00\n", dez);
	printf("%d nota(s) de R$ 5,00\n", cinco);
	printf("%d nota(s) de R$ 2,00\n", dois);
	printf("%d nota(s) de R$ 1,00\n", um);

	return 0;
}