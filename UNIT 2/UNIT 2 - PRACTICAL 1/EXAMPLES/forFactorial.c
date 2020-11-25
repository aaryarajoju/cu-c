// EXAMPLE: printing the factorial of a number, using for

#include <stdio.h>

int main (){
    
    int num;
    long long factorial = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        factorial = i * factorial;
    }

    printf("The required factorial is equal to %lld\n\n", factorial);

    return 0;
}
