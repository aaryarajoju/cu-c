//PRACTICAL 3.4
/*While travelling in a train, you observe some college students pulling the alarm chain simply to get down at their desired point. 
Out of n students m<=n times students pull the chain 
WAP to print if any action needs to be taken if m out of n students pull the chain in the train*/

#include <stdio.h>

int main (){
    
    //initializing the variables
    float numOfStudents, numOfStudentsPullingChain;
    float perc;

    //asking the user for user inputs
    printf("\nEnter the total number of students: ");
    scanf("%f", &numOfStudents);

    printf("Enter the number of students pulling the chain: ");
    scanf("%f", &numOfStudentsPullingChain);

    //if statement for checking the validity of the user inputs
    if (numOfStudentsPullingChain <= numOfStudents){
        
        //calculating the percentage of students
        perc = (numOfStudentsPullingChain / numOfStudents) * 100;

        //if statements to print the required results
        if (perc >= 80){
            printf("\nStrict Action Required\n\n");
        } else if (perc >= 50){
            printf("\nGuidlines to be issued\n\n");
        } else if (perc >= 10){
            printf("\nRestrict the action\n\n");
        } else if (perc < 10){
            printf("\nNo action required\n\n");
        } else {
            printf("\nINVALID!\n\n");
        }

    } else {
        printf("\nINVALID! The number of students pulling the chain cannot be more than the total number of students\n\n");
    }
    

    return 0;
}
