//PRACTICAL 2.5
//How many girls are after her rank? Also find whether she is among top 10 students of the class or not?

#include <stdio.h>

int main (){
    
    //initializing variables
    int rankOfSavita, numBoysAheadOfSavita, numOfGirlsBehindSavita;
    float classSize, numOfGirls, numOfBoys, x, y;

    //asking the user to input the number of students in the class
    printf("Enter the Class Size: ");
    scanf("%f", &classSize);

    //asking the user to input the ratio of gorls to boys in the format x:y
    printf("Enter the ratio of number of girls to the number of boys in the class: ");
    scanf("%f:%f", &x, &y);

    //calculating the number of girls and boys
    numOfGirls = (x / (x + y)) * classSize;
    numOfBoys = (y / (x + y)) * classSize;

    //asking the user to input the rank of savita
    printf("Enter the rank of Savita: ");
    scanf("%d", &rankOfSavita);

    //defining a section called again to execute again, if the condition is ot met
    again:

    //asking the user to input the number of boys infront of savita
    printf("Enter the number of Boys, ahead of Savita: ");
    scanf("%d", &numBoysAheadOfSavita);
    printf("\n");

    //calculating the nukber of girls behind savita
    numOfGirlsBehindSavita = (int)numOfGirls - (rankOfSavita - numBoysAheadOfSavita);

    //printing the number of girls behind savita, if it is valid or making the program goto again
    if (numBoysAheadOfSavita < rankOfSavita) {
        printf("THE NUMBER OF GIRLS BEHIND SAVITA ARE: %d\n\n", numOfGirlsBehindSavita);
    } else {
        printf("INVALID\n\n");
        goto again;
    }

    //checking of savita is in the top 10 or not, and printing that accordingly
    if (rankOfSavita <= 10){
        printf("SAVITA IS IN THE TOP 10\n\n");
    } else {
        printf("SAVITA IS NOT IN THE TOP 10\n\n");
    }

    return 0;
}
