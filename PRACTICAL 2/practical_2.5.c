//PRACTICAL 2.5

#include <stdio.h>

int main (){
    int rankOfSavita, numBoysAheadOfSavita, numOfGirlsBehindSavita;
    float classSize, numOfGirls, numOfBoys, x, y;

    printf("Enter the Class Size: ");
    scanf("%f", &classSize);

    printf("Enter the ratio of number of girls to the number of boys in the class: ");
    scanf("%f:%f", &x, &y);

    numOfGirls = (x / (x + y)) * classSize;
    numOfBoys = (y / (x + y)) * classSize;

    printf("Enter the rank of Savita: ");
    scanf("%d", &rankOfSavita);

    again:
    printf("Enter the number of Boys, ahead of Savita: ");
    scanf("%d", &numBoysAheadOfSavita);
    printf("\n");

    numOfGirlsBehindSavita = (int)numOfGirls - (rankOfSavita - numBoysAheadOfSavita);

    if (numBoysAheadOfSavita < rankOfSavita) {
        printf("THE NUMBER OF GIRLS BEHIND SAVITA ARE: %d\n\n", numOfGirlsBehindSavita);
    } else {
        printf("INVALID\n\n");
        goto again;
    }

    if (rankOfSavita <= 10){
        printf("SAVITA IS IN THE TOP 10\n\n");
    } else {
        printf("SAVITA IS NOT IN THE TOP 10\n\n");
    }

    return 0;
}
