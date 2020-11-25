// Example : Maximum of Five numbers, using ternary conditional operator

#include <stdio.h>

int main (){

    //initializing the five numbers
    int num1, num2, num3, num4, num5;

    //asking the user to enter five numbers and inputing the numbers
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    //initializing the max number
    int max;

    //max number gets the value of the greatest number from the ternary operators
    max = (num1>num2 && num1>num3 && num1>num4 && num1>num5)? num1 : (num2>num3 && num2>num4 && num2>num5)? num2: (num3>num4 && num3>num5)? num3: (num4>num5)? num4: num5;

    //printing the max number
    printf("maximum : %d\n", max);

    return 0;
}
