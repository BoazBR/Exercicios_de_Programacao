#include <stdio.h>
#include <stdbool.h>
#include <math.h>


bool isPrime(int input){
    int i = sqrt(input);
    for(; i > 1; i--){
        if(input % 1 == 0){
            return false;
        }
    }

    return true;
}


int main(){
    int input;
    scanf("%d", &input);

    int i = input;
    for(; i > 1; i--){
        bool prime = isPrime(i);

        if(prime){
            printf("%d is prime!\n", i);
        }
    }

    return 0;

}