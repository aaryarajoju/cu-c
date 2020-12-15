#include<stdio.h>

int main() {

    int choice,r1,c1,r2,c2;

    printf("Enter row and column size of 1st matrix:");
    scanf("%d%d",&r1,&c1);
    printf("Enter row and column size of 2nd matrix:");
    scanf("%d%d",&r2,&c2);

    int a[r1][c1],b[r2][c2],c[r1][c2];

    puts("Enter 1st matrix element...");

    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            scanf("%d",&a[i][j]);

    puts("Enter 2nd matrix element...");

    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            scanf("%d",&b[i][j]);

    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose\nYourchoice:");
    scanf("%d",&choice);

    switch(choice) {

    case 1:
        if(r1!=r2||c1!=c2) {
            puts("Addition not possible");
            break;
        }
        for(int i=0;i<r1;i++)
            for(int j=0;j<c1;j++)
                a[i][j]+=b[i][j];
        puts("Addition of two matrix is...");
        for(int i=0;i<r1;i++) {
            for(int j=0;j<c1;j++)
                printf("%d",a[i][j]);
            printf("\n");
        }
        break;

    case 2:
        if(r1!=r2||c1!=c2) {
            puts("Subtraction not possible");
            break;
        }
        for(int i=0;i<r1;i++)
            for(int j=0;j<c1;j++)
                a[i][j]-=b[i][j];
        puts("Subtraction of two matrix is...");
        for(int i=0;i<r1;i++) {
            for(int j=0;j<c1;j++)
                printf("%d",a[i][j]);
        printf("\n");
        }
        break;

    case 3:
        if(c1!=r2) {
            puts("Multiplication not possible");
            break;
        }
        for(int i=0;i<r1;i++) {
            for(int j=0;j<c2;j++) {
                c[i][j]=0;
                for(int k=0;k<c1;k++)
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
        puts("Multiplication of two matrix is...");
        for(int i=0;i<r1;i++) {
            for(int j=0;j<c2;j++)
            printf("%d",c[i][j]);
            printf("\n");
        }
        break;

    case 4:
        puts("Transpose of 1st matrix is...");
        for(int i=0;i<c1;i++) {
            for(int j=0;j<r1;j++)
            printf("%d",a[j][i]);
            printf("\n");
        }
        puts("Transpose of 2nd matrix is...");
        for(int i=0;i<c2;i++) {
            for(int j=0;j<r2;j++)
            printf("%d",b[j][i]);
            printf("\n");
        }
        break;

    default:
        puts("Invalid input! Please try again");
        break;
    }

    return 0;
}