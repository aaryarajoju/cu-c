// EXAMPLE: checking if a number is prime or not, using goto

#include <stdio.h>

int main (){
    
    int num;
    int i = 2;
    int lcd;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 2){
        printf("The number 2 is prime\n\n");
    } else if (num % 2 == 0){
        printf("The number %d is not a prime number\n\n", num);
    } else {


        again:

        if (num % i == 0){
            lcd = i;
            goto print;
        }

        i++;
        
        if (i <= num){
            goto again;
        }

        print:
        if (lcd == num){
            printf("The number %d is prime\n\n", num);
        } else {
            printf("The number %d is not a prime number\n\n", num);
        }

    }

    return 0;
}
