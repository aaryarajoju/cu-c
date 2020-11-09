//this program has errors

#include <stdio.h>
#include <stdbool.h>
#define bool _Bool


int rankSavita, numOfBoysAheadOfSavita;
float classSize;
float x, y;
int numOfGirlsBehindSavita;
float numOfGirls, numOfBoys;


int main(){

    inputClass;
    inputRatio;

    again:
    inputRank;
    inputNumBoysAhead;

    if (!valid){
        printf("INVALID RANK/NUM OF BOYS AHEAD OF SAVITA");
        goto again;
    }

    numGirlsBehind;
    top10(rankSavita);

    return 0;
}


int numStudents(float m, float n, float class){
    float num = (m / (m + n)) * class;
    return (int)num;
}


int top10(int rank){
    if (rank <= 10){
        printf("SAVITA IS IN THE TOP 10\n\n");
    } else {
        printf("SAVITA IS NOT IN THE TOP 10\n\n");
    }
}


int numGirlsBehind(int numGirls, int rank, int numBoysAhead){
    numOfGirlsBehindSavita = (int)numGirls - (rank - numBoysAhead);
    printNumOfGirls(numOfGirlsBehindSavita);
}


int printNumOfGirls(int numOfGirls){
    printf("THE NUMBER OF GIRLS BEHIND SAVITA ARE: %d", numOfGirls);
}


float inputClass(){
    printf("Enter the Class Size: ");
    scanf("%f", &classSize);
}


float inputRatio(){
    printf("Enter the ratio of number of girls to the number of boys in the class: ");
    scanf("%f:%f", &x, &y);
}


int inputRank(){
    printf("Enter the rank of Savita: ");
    scanf("%d", &rankSavita);
}


int inputNumBoysAhead(){
    printf("Enter the number of Boys, ahead of Savita: ");
    scanf("%d", &numOfBoysAheadOfSavita); 
}


bool valid(int numBoysAhead, int rank){
    if (numBoysAhead < rank){
        return 1;
    } else {
        return 0;
    }
}
