// EXAMPLE: printing the factorial of a number, using do-while

#include <stdio.h>

int main (){
    
    int num;
    long long factorial = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    int i = 1;

    do{
        factorial = i * factorial;
        i++;
    } while(i <= num);

    printf("The required factorial is equal to %lld\n\n", factorial);

    return 0;
}
