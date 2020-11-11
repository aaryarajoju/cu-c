// Example : Maximum of Four numbers, using ternary conditional operator

#include <stdio.h>

int main (){

    int num1, num2, num3, num4, num5;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    int max;
    max = (num1>num2 && num1>num3 && num1>num4)? num1 : (num2>num3 && num2>num4)? num2: (num3>num4)? num3: num4;

    printf("maximum : %d\n", max);

}
