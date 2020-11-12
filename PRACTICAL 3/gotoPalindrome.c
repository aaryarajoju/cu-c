// EXAMPLE: check if a number is a palindrom or not, using goto

#include <stdio.h>

int main (){
    
    //initializing the variables
    int num, reverseNum;
    int remainder, rev = 0, n;

    //asking the user for an input
    printf("Enter a number: ");
    scanf("%d", &num);

    //calculating the reverse of the user input
    n = num;

    again:
    remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    
    if (n > 0){
        goto again;
    }

    reverseNum = rev;

    //checking if the number is a palindrome
    if (num == reverseNum){
        printf("The number %d is a palindrome\n\n", num);
    } else {
        printf("The number %d is not a palindrome\n\n", num);
    }

    return 0;
}


/*
int n, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d", rev);
*/