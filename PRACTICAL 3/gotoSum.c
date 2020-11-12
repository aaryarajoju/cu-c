// EXAMPLE: printing the sum of first N natural numbers, using goto

#include <stdio.h>

int main (){
    
    int num; 
    int sum = 0;
    int i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i; i<=num; i++){
        sum = sum + i;
    }

    printf("The sum of first %d numbers is %d\n\n", num, sum);

    return 0;
}
