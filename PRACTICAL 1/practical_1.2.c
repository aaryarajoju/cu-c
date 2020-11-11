//PRACTICAL 1.2
//Write a program to find the total number of smaller cubes obtained

#include <stdio.h>
#include <math.h>

int main(){

    //initializing the variables
    int side, newSide, num;

    //asking the user for inputting the length of side of the original cube
    printf("Enter the side of the original painted cube: ");
    scanf("%d", &side);

    //asking the user for inputting the length of side if the cube it was cut into
    printf("Enter the side of the cube, it was cut into: ");
    scanf("%d", &newSide);

    //calculatinf the number of cubes that would be generated, and printing it
    num = pow((side/newSide),3);
    printf("The number of cubes generated are: %d\n", num);

    return 0;
}
