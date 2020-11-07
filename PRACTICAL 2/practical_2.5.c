//PRACTICAL 2.5
// this program has ERRORS!!

#include <stdio.h>

int main (){
    int rankOfSavita, numBoysAheadOfSavita, numOfGirlsBehindSavita;
    int classSize, numOfGirls, numOfBoys;
    int x, y;

    printf("Enter the Class Size: ");
    scanf("%d", &classSize);

    printf("%d\n", classSize);

    printf("Enter the ratio of number of girls to the number of boys in the class: ");
    scanf("%d:%d", &x, &y);

    printf("%d %d\n", x, y);

    numOfGirls = (x / (x + y)) * classSize;
    numOfBoys = (y / (x + y)) * classSize;

    printf("%d %d\n", numOfGirls, numOfBoys);

    printf("Enter the rank of Savita: ");
    scanf("%d", &rankOfSavita);

    again:
    printf("Enter the number of Boys, ahead of Savita: ");
    scanf("%d", &numBoysAheadOfSavita);
    printf("\n");

    numOfGirlsBehindSavita = numOfGirls - (rankOfSavita - numBoysAheadOfSavita);

    if (numBoysAheadOfSavita < rankOfSavita) {
        printf("The number of girls behind Savita are: %d\n\n", numOfGirlsBehindSavita);
    } else {
        printf("INVALID\n\n");
        goto again;
    }

    if (rankOfSavita < 10){
        printf("Savita is in the top 10");
    } else {
        printf("Savita is not in the top 10");
    }

    return 0;
}
