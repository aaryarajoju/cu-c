// Example : Maximum of Two numbers, using ternary conditional operator

#include <stdio.h>

int main (){

    int num1, num2;

    printf("Enter Two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("maximum : %d\n", (num1 > num2) ? num1 : num2);

}
