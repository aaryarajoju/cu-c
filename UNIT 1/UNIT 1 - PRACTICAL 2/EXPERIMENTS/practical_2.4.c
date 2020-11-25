//PRACTICAL 2.4
//If last day of mth month of the year is Friday then find out nth day(1<=n<=31) of the same month

#include <stdio.h>

int main(void){

    //initializing the variables of month and date
    int month = 0;
    int date = 0;

    //asking the user to input the values of month and date
    printf("Enter the date: ");
    scanf("%d", &date);
    printf("Enter the month: ");
    scanf("%d", &month);

    //switch case for month
    switch (month){
        //if month is Jan/Mar/May/Jul/Aug/Oct/Dec, i.e. 31 days
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:

            //odd days is the remaind of the difference of days, when divided by 7. I.e, (day1-day2)%7
            //swtich case for the number of odd days
            switch ((31-date)%7){

                //if odd days = 0, then it is the same day
                case 0:
                    printf("the day is friday\n");
                    break;

                //if odd days = 1, then it is a day before
                case 1:
                    printf("the day is thursday\n");
                    break;

                // if odd days = 2, then it is two days earlier
                case 2:
                    printf("the day is wednesday\n");
                    break;

                //if odd days = 3, then it is three days earlier
                case 3:
                    printf("the day is tuesday\n");
                    break;

                //if odd days = 4, then it is four days earlier
                case 4:
                    printf("the day is monday\n");
                    break;

                //if odd days = 5, then it is five days earlier
                case 5:
                    printf("the day is sunday\n");
                    break;

                //if odd days = 6, then it is six days earlier
                case 6:
                    printf("the day is saturday\n");
                    break;
            }
            break;

        //if month is Feb, i.e. 28 days
        case 2:

            //odd days is the remaind of the difference of days, when divided by 7. I.e, (day1-day2)%7
            //swtich case for the number of odd days
            switch ((28-date)%7){

                //if odd days = 0, then it is the same day
                case 0:
                    printf("the day is friday\n");
                    break;

                //if odd days = 1, then it is a day before
                case 1:
                    printf("the day is thursday\n");
                    break;

                // if odd days = 2, then it is two days earlier
                case 2:
                    printf("the day is wednesday\n");
                    break;

                //if odd days = 3, then it is three days earlier
                case 3:
                    printf("the day is tuesday\n");
                    break;

                //if odd days = 4, then it is four days earlier
                case 4:
                    printf("the day is monday\n");
                    break;

                //if odd days = 5, then it is five days earlier
                case 5:
                    printf("the day is sunday\n");
                    break;

                //if odd days = 6, then it is six days earlier
                case 6:
                    printf("the day is saturday\n");
                    break;
            }
            break;

        //if month is Apr/Jun/Sep/Nov, i.e 30 days
        case 4:
        case 6:
        case 9:
        case 11:

            //odd days is the remaind of the difference of days, when divided by 7. I.e, (day1-day2)%7
            //swtich case for the number of odd days
            switch ((30-date)%7){

                //if odd days = 0, then it is the same day
                case 0:
                    printf("the day is friday\n");
                    break;

                //if odd days = 1, then it is a day before
                case 1:
                    printf("the day is thursday\n");
                    break;

                // if odd days = 2, then it is two days earlier
                case 2:
                    printf("the day is wednesday\n");
                    break;

                //if odd days = 3, then it is three days earlier
                case 3:
                    printf("the day is tuesday\n");
                    break;

                //if odd days = 4, then it is four days earlier
                case 4:
                    printf("the day is monday\n");
                    break;

                //if odd days = 5, then it is five days earlier
                case 5:
                    printf("the day is sunday\n");
                    break;

                //if odd days = 6, then it is six days earlier
                case 6:
                    printf("the day is saturday\n");
                    break;
            }
            break;
    }
    return 0;
}
