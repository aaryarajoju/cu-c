#include <stdio.h>
#include <math.h>

int main (){
    
    //initializing a variable
    int num;
    int input;

    //asking the user what they want to do
    printf("Select one of the following: \n");
    printf("1) Even or Odd\
            2) Positive or Negative\
            3) Square\
            4) Square Root\
            5) End\n\n");

    //asking the user for an input number
    printf("Enter a number: ");
    scanf("%d", &num);


    //switch case for executing a particular task
    switch (input)
    {
    case 1:
        goto evenOrOdd;
        break;

    case 2:
        goto positiveOrNegative;
        break;

    case 3:
        goto square;
        break;

    case 4:
        goto root;
        break;

    case 5:
        goto end;
        break;
    
    default:
        goto end;
        break;
    }
    goto end;


    //even or odd
    evenOrOdd:
    if (num%2 == 0){
        printf("\nThe number %d is EVEN\n\n", num);
    } else {
        printf("\nThe number %d is ODD\n\n", num);
    }
    goto end;


    //positive or negative
    positiveOrNegative:
    if (num > 0){
        printf("\nThe number %d is POSITIVE\n\n", num);
    } else if (num == 0){
        printf("\nThe number %d is NEITHER POSITIVE NOR NEGATIVE\n\n", num);
    } else {
        printf("\nThe number %d is NEGATIVE\n\n", num);
    }
    goto end;


    //square
    square:
    int squareNum;
    squareNum = num*num;
    printf("\nThe square of the number %d is %d", num, squareNum);
    goto end;


    //square root
    root:
    int rootNum;
    rootNum = sqrt(num);
    printf("\nThe square-root of the number %d is %d", num, rootNum);
    goto end;


    end:
    return 0;
}