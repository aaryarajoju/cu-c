//PRACTICAL 1.4
//How many students are there in the class?

#include <stdio.h>

int main(){

    //initializing the variables
    int positionFromTop, positionFromBottom, numOfStudents;
    
    //asking the user for inputting the position of sonu from the top
    printf("Enter the position of Sonu from Top: ");
    scanf("%d", &positionFromTop);

    //asking the user for inputting the position of sonu from bottom
    printf("Enter the position of Sonu from Bottom: ");
    scanf("%d", &positionFromBottom);
    
    //calculating the total number of students and printing it
    numOfStudents = positionFromTop + positionFromBottom - 1;
    printf("The number of students in the class is: %d\n", numOfStudents);

    return 0;
}
