// Example : Maximum of Three numbers, using ternary conditional operator

#include <stdio.h>

int main (){

    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("maximum : %d\n", (num1 > num2 && num1 > num3) ? num1 : (num2 > num3)? num2: num3);

}
