//PRACTICAL 2.5

#include <stdio.h>

int main (){
    int rankOfSavita, numBoysAheadOfSavita, numOfGirlsBehindSavita;
    float classSize;
    float numOfGirls, numOfBoys;
    float x, y;

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
        printf("The number of girls behind Savita are: %d\n\n", numOfGirlsBehindSavita);
    } else {
        printf("INVALID\n\n");
        goto again;
    }

    if (rankOfSavita < 10){
        printf("Savita is in the top 10\n\n");
    } else {
        printf("Savita is not in the top 10\n\n");
    }

    return 0;
}
