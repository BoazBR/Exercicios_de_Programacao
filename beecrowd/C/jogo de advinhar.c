#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num, cont = 3, maxValue = 20, randomNum;
    srand(time(NULL));
    randomNum = rand() % maxValue + 1;

    printf("***Jogo da adivinhação!***\n");
    printf("Escolha um número entre 0 e %d: ", maxValue);
    scanf("%d", &num);
    
    while(cont > 0){
        if(num == randomNum){
        	printf("Parabéns, você acertou!!!\n");
        	return 0;

        } else if(cont > 1) {

        	if(num > randomNum){
        		puts("\nVocê errou, o número é MENOR!");
        	} else {
        		puts("\nVocê errou, o número é MAIOR!");
        	}
        	scanf("%d", &num);


        } else {
        	printf("Você fracassou miseravelmente! A resposta certa é %d\n", randomNum);
        }
        cont --;
    }
    return 0;
}