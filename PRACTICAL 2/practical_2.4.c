#include <stdio.h>

int main(void){

    int month = 0;
    int date = 0;

    printf("Enter the date: ");
    scanf("%d", &date);
    printf("Enter the month: ");
    scanf("%d", &month);

    switch (month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:

            switch ((31-date)%7){
                case 0:
                    printf("the day is friday\n");
                    break;
                case 1:
                    printf("the day is thursday\n");
                    break;
                case 2:
                    printf("the day is wednesday\n");
                    break;
                case 3:
                    printf("the day is tuesday\n");
                    break;
                case 4:
                    printf("the day is monday\n");
                    break;
                case 5:
                    printf("the day is sunday\n");
                    break;
                case 6:
                    printf("the day is saturday\n");
                    break;
            }
            break;

        case 2:

            switch ((28-date)%7){
                case 0:
                    printf("the day is friday\n");
                    break;
                case 1:
                    printf("the day is thursday\n");
                    break;
                case 2:
                    printf("the day is wednesday\n");
                    break;
                case 3:
                    printf("the day is tuesday\n");
                    break;
                case 4:
                    printf("the day is monday\n");
                    break;
                case 5:
                    printf("the day is sunday\n");
                    break;
                case 6:
                    printf("the day is saturday\n");
                    break;
            }
            break;

        case 4:
        case 6:
        case 9:
        case 11:

            switch ((30-date)%7){
                case 0:
                    printf("the day is friday\n");
                    break;
                case 1:
                    printf("the day is thursday\n");
                    break;
                case 2:
                    printf("the day is wednesday\n");
                    break;
                case 3:
                    printf("the day is tuesday\n");
                    break;
                case 4:
                    printf("the day is monday\n");
                    break;
                case 5:
                    printf("the day is sunday\n");
                    break;
                case 6:
                    printf("the day is saturday\n");
                    break;
            }
            break;
    }
}
