//PRACTICAL 2.2
//Write a program to input two integers from user by using single scanf. Compute and display the value for a& b, a| b, a f b.

#include <stdio.h>

int main(){

    //initializing two variables
    int a, b;

    //asking the user to input two numbers
    printf("Enter the values of a and b: ");
    scanf("%d %d",&a, &b);

    //printing out the resutls of using the bit wise operators
    printf("Output of a&b is: %d\n", a&b);
    printf("Output of a|b is: %d\n", a|b);
    printf("Output of a^b is: %d\n", a^b);

    return 0;
}
