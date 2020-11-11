// Example : Maximum of Five numbers, using ternary conditional operator

#include <stdio.h>

int main (){

    int num1, num2, num3, num4, num5;

    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    int max;
    max = (num1>num2 && num1>num3 && num1>num4 && num1>num5)? num1 : (num2>num3 && num2>num4 && num2>num5)? num2: (num3>num4 && num3>num5)? num3: (num4>num5)? num4: num5;

    printf("maximum : %d\n", max);

}
