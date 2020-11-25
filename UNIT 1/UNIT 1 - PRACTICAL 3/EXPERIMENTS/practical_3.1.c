//PRACTICAL 3.1
/*In a class of n students the boys to girls ratio is p:q. Find no. boys and girls in the class.
WAP to find if there is a gender partiality or equality in education*/

#include <stdio.h>

int main (){
    
    //initiating the variables
    float classSize, numOfGirls, numOfBoys, x, y;
    float percBoys, percGirls;
    int diff;

    //user-input for class size
    printf("Enter the Class Size: ");
    scanf("%f", &classSize);

    //user input for the ratio of girls to boys
    printf("Enter the ratio of number of girls to the number of boys in the class: ");
    scanf("%f:%f", &x, &y);

    //calculating the number of students
    numOfGirls = (x / (x + y)) * classSize;
    numOfBoys = (y / (x + y)) * classSize;

    //difference between the number of students
    diff = numOfGirls - numOfBoys;

    //percentages of the students
    percBoys = numOfBoys / classSize * 100;
    percGirls = numOfGirls / classSize * 100;

    printf("\n");

    //printing the conclusion
    if (diff > -5 && diff < 5){
        printf("Equal Oppotunities of education are there for both boys and girls\n\n");
    } else if (percBoys >= 70){
        printf("There is gender partiality in education\n\n");
    } else if (percGirls >= 70){
        printf("Girls are dominating in education\n\n");
    } else {
        printf("There is no conclusion drawn from the given stats\n\n");
    }

    return 0;
}
