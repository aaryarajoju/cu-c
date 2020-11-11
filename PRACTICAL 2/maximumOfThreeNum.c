// Example : Maximum of Three numbers, using ternary conditional operator

#include <stdio.h>

int main (){

    //initializing the three numbers
    int num1, num2, num3;

    //asking the user to enter three numbers and inputing the numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    //initializing the max number
    int max;

    //max number gets the value of the greatest number from the ternary operators
    max = (num1 > num2 && num1 > num3) ? num1 : (num2 > num3)? num2: num3;

    //printing the max number
    printf("maximum : %d\n", max);

    return 0;
}
