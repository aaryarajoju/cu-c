// EXAMPLE: checking if a number is prime or not, using goto

#include <stdio.h>

int main (){
    
    //initializing the variables
    int num;
    int i = 2;
    int lcd;

    //asking the user input for the number to be checked
    printf("Enter a number: ");
    scanf("%d", &num);

    //if case for narrowing the search, i.e. if the num is 2, then it's prime, if it's an even number other than 2, then it's not prime
    if (num == 2){
        printf("The number 2 is prime\n\n");
    } else if (num % 2 == 0){
        printf("The number %d is not a prime number\n\n", num);
    } else {

        //checking if an odd number is prime or not
        
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
