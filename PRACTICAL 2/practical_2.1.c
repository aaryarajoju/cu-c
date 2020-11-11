//PRACTICAL 2.1
//Calculate simple interest they will pay and find who will pay the most using ternary operator?

#include <stdio.h>

int main(){

    //initializing the variables
    int amountRam, amountMohan, amountSohan;
    float timeRam, timeMohan, timeSohan;
    float rateRam, rateMohan, rateSohan;
    float interestRam, interestMohan, interestSohan;

    //asking the user to enter the values of loan amount, rate of interest and time, for each of the three people
    printf("Enter Ram's loan amount, rate of interest and time: ");
    scanf("%d %f %f", &amountRam, &rateRam, &timeRam);
    printf("Enter Mohan's loan amount, rate of interest and time: ");
    scanf("%d %f %f", &amountMohan, &rateMohan, &timeMohan);
    printf("Enter Sohan's loan amount, rate of interest and time: ");
    scanf("%d %f %f", &amountSohan, &rateSohan, &timeSohan);

    //calculating the interest amount, using the formula of simple interest
    interestRam = (amountRam*rateRam*timeRam)/100;
    interestMohan = (amountMohan*rateMohan*timeMohan)/100;
    interestSohan = (amountSohan*rateSohan*timeSohan)/100;

    //printing the amount of interest paid by each of the three people
    printf("Interest paid by Ram: %f\n", interestRam);
    printf("Interest paid by Mohan: %f\n", interestMohan);
    printf("Interest paid by Sohan: %f\n", interestSohan);

    //printing the maximum amount of interest paid, by using the ternary operator
    printf("Maximum interest is paid by - ");
    interestRam>interestMohan?(interestRam>interestSohan?printf("Ram\n"):printf("Sohan\n")):(interestMohan>interestSohan?printf("Mohan\n"):printf("Sohan\n"));

    return 0;
}
