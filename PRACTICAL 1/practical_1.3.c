//PRACTICAL 1.3
#include <stdio.h>

int main(){
    
    int distance;
    float timeLostByTrain, speedCar;
    
    printf("Enter the distance travelled from A to B: ");
    scanf("%d", &distance);
    
    printf("Enter the amount of time(in mins), lost by the train while stopping at stations: ");
    scanf("%f", &timeLostByTrain);
    
    speedCar = distance/(3*(timeLostByTrain/60));
    
    printf("The speed of car is: %f\n", speedCar);
    
    return 0;
}
