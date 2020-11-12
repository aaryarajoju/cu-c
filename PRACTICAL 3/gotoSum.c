// EXAMPLE: printing the sum of first N natural numbers, using goto

#include <stdio.h>

int main (){
    
    int num; 
    int sum = 0;
    int i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);


    again:

    sum = sum + i;
    i++;

    if (i <= num){
        goto again;
    }


    printf("The sum of first %d numbers is %d\n\n", num, sum);

    return 0;
}
