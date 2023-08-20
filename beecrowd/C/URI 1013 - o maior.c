#include <stdio.h>

int main(){
	int a, b, maior;

	scanf("%d %d %d", &a, &b, &maior);

	if(a > maior){
		maior = a;
	}

	if(b > maior) {
		maior = b;
	}

	printf("%d eh o maior\n", maior);
	return 0;
}