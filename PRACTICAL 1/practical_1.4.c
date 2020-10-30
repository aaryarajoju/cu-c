//PRACTICAL 1.4
#include <stdio.h>

int main(){

    int positionFromTop, positionFromBottom, numOfStudents;
    
    printf("Enter the position of Sonu from Top: ");
    scanf("%d", &positionFromTop);

    printf("Enter the position of Sonu from Bottom: ");
    scanf("%d", &positionFromBottom);
    
    numOfStudents = positionFromTop + positionFromBottom - 1;
    
    printf("The number of students in the class is: %d\n", numOfStudents);

    return 0;
}
