#include <stdio.h>

int main(){
    int max, i = 0;
    scanf("%d", &max);

    while (i <= max){
        int j = i;

        while (j >= 0){
            printf("%d ", j);
            j--;
        }   

        printf("\n");
        i++;
    }  
}