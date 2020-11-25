// EXAMPLE: printing the factorial of a number, using goto

#include <stdio.h>

int main (){
    
    //initializing the variables
    int num;
    long long factorial = 1;

    //inputting the number from user
    printf("Enter the number: ");
    scanf("%d", &num);

    //initializing the incrementor
    int i = 0;

    //calculating the factorial
    again:
    i++;
    factorial = i * factorial;
    
    if (i < num){
        goto again;
    }

    //printing the value of the factorial
    printf("The required factorial is equal to %lld\n\n", factorial);

    return 0;
}
