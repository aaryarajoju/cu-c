//PRACTICAL 2.3
#include <stdio.h>

int main(){

    int m, y, n, r;

    printf("Enter the values of m, y(1900<=y<=2019), n, r(1<=r<=12): ");
    scanf("%d %d %d %d",&m,&y,&n,&r);

    int yearKavi, classKavi;

    yearKavi = y - n + m;
    printf("Mr. Kavi is born in the year %d\n", yearKavi);

    if (r >= 1 && r <= 12){

        classKavi = r - (m - n);

        if (classKavi < 1){
            printf("Mr. Kavi is in Pre-Primanry\n");
        }
        else if (classKavi > 12){
            printf("Mr. Kavi is in college\n");
        }
        else {
            printf("Mr. Kavi is in the class %d\n", classKavi);
        }

    }

    return 0;
}
