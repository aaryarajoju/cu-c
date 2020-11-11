// Example : Maximum of Two numbers, using ternary conditional operator

#include <stdio.h>

int main (){

    //initializing the two numbers
    int num1, num2;

    //asking the user to enter two numbers and inputing the numbers
    printf("Enter Two numbers: ");
    scanf("%d %d", &num1, &num2);

    //initializing the max number
    int max;

    //max number gets the value of the greatest number from the ternary operators
    max = (num1 > num2) ? num1 : num2;

    //printing the max number
    printf("maximum : %d\n", max);

    return 0;
}
