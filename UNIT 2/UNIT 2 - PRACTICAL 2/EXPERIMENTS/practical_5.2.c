#include <stdio.h>

void input(int rows, int columns){
    int matrix[rows][columns];

    for(int i=0;i<rows;i++)
        for(int j=0;j<columns;j++)
            scanf("%d",&matrix[i][j]);

}

void add(int a[r][c], int b[r][c]){

    int sum[r][c]

}

void subtract(int a[r][c], int b[r][c]){

    int diff[r][c];

}

void multiply(int a[r1][c1], int b[r2][c2]){

    int product[r1][c2];

}

void transpose(int a[r][c]){

    int transposeMatrix

}

int main(){

    int rowsA, columnsA, rowsB, columnsB;

    printf("Enter the number of rows and columns of matrix 1");
    scanf("%d %d", &rowsA, &columnsA);

    printf("Enter the number of rows and columns of matrix 2");
    scanf("%d %d", &rowsB, &columnsB);

    int a[rowsA][columnsA];
    int b[rowsB][columnsB];

    puts("\n\nEnter the elements of the 1st matrix: ");
    a[rowsA][columnsA] = input(rowsA, columnsA);

    puts("\n\nEnter the elements of the 2nd matrix: ");
    b[rowsB][columnsB] = input(rowsB, columnsB);
    
    int selection;

    printf("\n\nOperations: \n 1)Addition \n 2)Subtraction \n 3)Multiplication \n 4)Transpose \n Selection: ");
    scanf("%d", &selection)

    switch(selection){
        case 1:
                prints("\n\nThe addition of A and B: ");
                if(rowsA == rowsB && columnsA == columnsB)  add(a[rowsA][columnsA], b[rowsB][columnsB]);
                else    printf("Invalid!")
                break;

        case 2:
                prints("\n\nThe subtraction of A and B: ");
                if(rowsA == rowsB && columnsA == columnsB)  subtract(a[rowsA][columnsA], b[rowsB][columnsB]);
                else    printf("Invalid!")
                break;

        case 3:
                prints("\n\nThe multiplication of A and B: ");
                if(rowsB == columnsA)  multiply(a[rowsA][columnsA], b[rowsB][columnsB]);
                else    printf("Invalid!")
                break;

        case 4:
                printf("\n\nTranspose of A: ")
                transpose(a[rowsA][columnsA]);
                printf("\n\nTranspose of B: ")
                transpose(b[rowsB][columnsB]);
                break;

        default:
                printf("Enter a valid selection")
    }

    printf("\n\n")

    returm 0;
}