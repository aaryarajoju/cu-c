//PRACTICAL 2.1
#include <stdio.h>

int main(){

    int amountRam, amountMohan, amountSohan;
    float timeRam, timeMohan, timeSohan;
    float rateRam, rateMohan, rateSohan;
    float interestRam, interestMohan, interestSohan;

    printf("Enter Ram's loan amount, rate of interest and time: ");
    scanf("%d %f %f", &amountRam, &rateRam, &timeRam);
    printf("Enter Mohan's loan amount, rate of interest and time: ");
    scanf("%d %f %f", &amountMohan, &rateMohan, &timeMohan);
    printf("Enter Sohan's loan amount, rate of interest and time: ");
    scanf("%d %f %f", &amountSohan, &rateSohan, &timeSohan);

    interestRam = (amountRam*rateRam*timeRam)/100;
    interestMohan = (amountMohan*rateMohan*timeMohan)/100;
    interestSohan = (amountSohan*rateSohan*timeSohan)/100;

    printf("Interest paid by Ram: %f\n", interestRam);
    printf("Interest paid by Mohan: %f\n", interestMohan);
    printf("Interest paid by Sohan: %f\n", interestSohan);

    printf("Maximum interest is paid by - ");
    interestRam>interestMohan?(interestRam>interestSohan?printf("Ram\n"):printf("Sohan\n")):(interestMohan>interestSohan?printf("Mohan\n"):printf("Sohan\n"));

    return 0;
}
