#include <stdio.h>

int main(){
	int segundos, minutos = 0, horas = 0;
	scanf("%d", &segundos);

	while(segundos >= 60){
		segundos -= 60;
		minutos += 1;
	}

	while(minutos >= 60){
		minutos -= 60;
		horas += 1;
	}

	printf("%d:%d:%d\n", horas, minutos, segundos);

	return 0;
}