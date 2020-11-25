//PRACTICAL 1.5
//Write a program to calculate and print the number of days to be taken to complete the work if A and B work together

#include <stdio.h>

    int main() {

        //initializing the variables
        int workA, workB, workAB;

        //asking the user to input the number of days taken by each of the person to do the task alone
        printf("Enter time taken(number of days) by 1st person (A) to complete the task: ");
        scanf("%d", &workA);
        printf("Enter time taken(number of days) by 2nd person (B) to complete the task: ");
        scanf("%d", &workB);

        //calculating the number of days it would take for both of them to do the work, and printing it
        workAB = (workA * workB) / (workA + workB);
        printf("Number of days taken if both work together: %d\n", workAB);

        return 0;
    }