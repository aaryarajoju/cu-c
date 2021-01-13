#include <stdio.h>

int main() {

    float classSize, numOfGirls, numOfBoys, x, y;
    float percBoys, percGirls;
    int diff;

    printf("Enter the Class Size: ");
    scanf_s("%f", &classSize);

    printf("Enter the ratio of number of girls to the number of boys in the class: ");
    scanf_s("%f:%f", &x, &y);

    numOfGirls = (x / (x + y)) * classSize;
    numOfBoys = (y / (x + y)) * classSize;

    diff = (int)numOfGirls - (int)numOfBoys;

    percBoys = numOfBoys / classSize * 100;
    percGirls = numOfGirls / classSize * 100;

    printf("\n");

    if (diff > -5 && diff < 5) {
        printf("Equal Oppotunities of education are there for both boys and girls\n\n");
    }
    else if (percBoys >= 70) {
        printf("There is gender partiality in education\n\n");
    }
    else if (percGirls >= 70) {
        printf("Girls are dominating in education\n\n");
    }
    else {
        printf("There is no conclusion drawn from the given stats\n\n");
    }

    return 0;
}
