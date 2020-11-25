// EXAMPLE: printing the sum of first N natural numbers, using goto

#include <stdio.h>

int main (){
    
    //initializing the variables
    int num; 
    int sum = 0;
    int i = 1;


    //asking the user for inputting a number
    printf("Enter a number: ");
    scanf("%d", &num);

    //calculating the sum
    again:

    sum = sum + i;
    i++;

    if (i <= num){
        goto again;
    }

    //printing the sum
    printf("The sum of first %d numbers is %d\n\n", num, sum);

    return 0;
}
