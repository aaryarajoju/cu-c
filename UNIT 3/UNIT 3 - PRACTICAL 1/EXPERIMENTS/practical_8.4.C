#include<stdio.h>

struct sp { char name[100]; } s[100];

int eligible() { printf("ELIGIBLE :)\n\n\n"); }         

int not_eligible() { printf("NOT ELIGIBLE :(\n\n\n"); }

int main() {
    int n, i, j;
    double scoreTable[100][5];

    printf("\nEnter number of students- ");
    scanf("%d",&n);

    double sum[n],cgpa[n];

    for(i = 1; i <= n; i++) {

        printf("\n%d. Enter student's name- ", i);
        scanf("%s",&s[i-1].name);

        for(j = 1 ; j <= 5; j++) {
            printf("\tEnter the CGPA (0-10) in Sem %d- ",j);
            scanf("%lf", &scoreTable[i-1][j-1]);
        }
    }

    printf("\n\n");

    for(i = 0; i < n; i++) {
        sum[i]=0;

        for(j = 0; j < 5; j++) {
            sum[i]= sum[i]+ scoreTable[i][j];
        }

        cgpa[i]= (double)sum[i]/5.0;

        printf("Student's name : %s , C.G.P.A : %0.2lf \t: ", s[i].name, cgpa[i]);

        if(cgpa[i] >=8) {
            eligible();
        } else {
            not_eligible();                     
        }
    }
    return 0;
}