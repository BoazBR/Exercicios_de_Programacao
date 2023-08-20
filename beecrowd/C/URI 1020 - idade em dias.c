#include <stdio.h>

int main(){
	int dias, meses = 0, anos = 0;
	scanf("%d", &dias);

	while(dias >= 365){
		dias -= 365;
		anos += 1;
	}

	while(dias >= 30){
		dias -= 30;
		meses += 1;
	}

	printf("%d ano(s)\n", anos);
	printf("%d mes(es)\n", meses);
	printf("%d dia(s)\n", dias);

	return 0;
}