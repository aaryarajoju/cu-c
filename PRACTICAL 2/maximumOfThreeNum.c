// Example : Maximum of Three numbers, using ternary conditions

#include <stdio.h>

int main (){

    int num1, num2, num3, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("maximum : %d\n", (num1 > num2 && num1 > num3) ? num1 : (num2 > num3)? num2: num3);

}
