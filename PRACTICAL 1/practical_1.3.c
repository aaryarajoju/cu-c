//PRACTICAL 1.3
//Write a C program to compute the speed of car

#include <stdio.h>

int main(){
    
    //initializing the variables
    int distance;
    float timeLostByTrain, speedCar;
    
    //asking the user for inputting the distance between A and B
    printf("Enter the distance travelled from A to B: ");
    scanf("%d", &distance);
    
    //asking the user to input the amount of time that was lost by the train due to stopping at the stations
    printf("Enter the amount of time(in mins), lost by the train while stopping at stations: ");
    scanf("%f", &timeLostByTrain);
    
    //calculating the speed of car and printing it
    speedCar = distance/(3*(timeLostByTrain/60));
    printf("The speed of car is: %f\n", speedCar);
    
    return 0;
}
