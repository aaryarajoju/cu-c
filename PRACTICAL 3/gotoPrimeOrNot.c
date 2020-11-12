// EXAMPLE: checking if a number is prime or not, using goto

#include <stdio.h>

int main (){
    
    int num;
    int i = 3;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 2){
        printf("The number 2 is prime\n\n");
    } else if (num % 2 == 0){
        printf("The number %d is not a prime number\n\n", num);
    } else {

        

    }

    return 0;
}


/*
int isPrime(long n) {
    if (n==2){
        return 1;
    } else if (n%2==0){
        return 2;
    } else {
        for (int i = 3; i < (int)n; i++) {
            if ((int)n%i==0){
                return (int)i;
            }
        } 
    }
    return 1;
}
*/