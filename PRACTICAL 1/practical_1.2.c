//PRACTICAL 1.2
#include <stdio.h>
#include <math.h>

int main(){

    int side, newSide, num;

    printf("Enter the side of the original painted cube: ");
    scanf("%d", &side);

    printf("Enter the side of the cube, it was cut into: ");
    scanf("%d", &newSide);

    num = pow((side/newSide),3);
    printf("The number of cubes generated are: %d\n", num);

    return 0;
}
