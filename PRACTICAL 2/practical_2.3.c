//PRACTICAL 2.3
//Write a C program to find out year in which Mr. Kavi was born

#include <stdio.h>

int main(){

    //initializing the variables
    int m, y, n, r;

    //inputing the values of m, y, n and r from the user
    printf("Enter the values of m, y(1900<=y<=2019), n, r(1<=r<=12): ");
    scanf("%d %d %d %d",&m,&y,&n,&r);

    //initializing the variables of the yob of Kavi and the class of Kavi
    int yearKavi, classKavi;

    //calculating the the YOB of Kavi and printing it
    yearKavi = y - n + m;
    printf("Mr. Kavi is born in the year %d\n", yearKavi);

    //if case for checking if the class of his brother is valid
    if (r >= 1 && r <= 12){

        //claculating the class of Kavi
        classKavi = r - (m - n);

        //printing out pre-primary if class is below 1
        if (classKavi < 1){
            printf("Mr. Kavi is in Pre-Primanry\n");
        }

        //printing out college if class is above 12
        else if (classKavi > 12){
            printf("Mr. Kavi is in college\n");
        }

        //printing out the class of Kavi if he's not in either college or pre-primary
        else {
            printf("Mr. Kavi is in the class %d\n", classKavi);
        }

    }

    return 0;
}
