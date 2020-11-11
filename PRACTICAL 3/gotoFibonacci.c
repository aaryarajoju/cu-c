// EXAMPLE: printing fibonacci sequence upto a user specifies limit, using goto

#include <stdio.h>

int main (){
    
    //initializing the variables
    int num, i = 1, term1 = 0, term2 = 1, nextTerm;

    //getting the user input
    printf("Enter a number: ");
    scanf("%d", &num);

    //generating the fibonacci sequence
    again:

    printf("%d\n", term1);
    nextTerm = term1 + term2;
    term1 = term2;
    term2 = nextTerm;

    if (i < num){
        i++;
        goto again;
    }

    printf("\n");

    return 0;
}
