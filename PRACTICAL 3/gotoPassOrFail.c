// Example: Printing whether pass or fail, using GOTO

#include <stdio.h>

int main (){

    //initializing the variable
    int marks;

    //getting the user input
    printf("Enter the marks: ");
    scanf("%d", &marks);

    //checking if the marks are above the given threshold or not
    if (marks >= 75){
        goto pass;
    } else {
        goto fail;
    }

    //printing pass or fail, depending on the marks
    pass:
        printf("Congratulations, you've passed!\n");
        goto end;

    fail:
        printf("Better luck next time.\n");
        goto end;

    end:
    return 0;
}
