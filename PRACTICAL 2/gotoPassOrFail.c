// Example: Checking whether pass or fail, using GOTO

#include <stdio.h>

int main (){

    int marks;

    printf("Enter the marks: ");
    scanf("%d", &marks);

    if (marks >= 75){
        goto pass;
    } else {
        goto fail;
    }

    pass:
        printf("Congratulations, you've passed!\n");
        goto end;

    fail:
        printf("Better luck next time.\n");
        goto end;

    end:
    return 0;
}
