//PRACTICAL 1.5
#include <stdio.h>

int main(){

    int workA, workB, workAB;
    
    printf("Enter time taken(number of days) by 1st person (A) to complete the task: ");
    scanf("%d",&workA);
    printf("Enter time taken(number of days) by 2nd person (B) to complete the task: ");
    scanf("%d",&workB);
    
    workAB = (workA * workB) / (workA + workB);
    
    printf("Number of days taken if both work together: %d\n", workAB);

    return 0;
}
