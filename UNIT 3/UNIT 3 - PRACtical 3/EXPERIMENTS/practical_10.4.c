#include<stdio.h>
#include <stdlib.h> 

int main() {

    int n,m;

    printf("\n enter number of students in group A\n");
    scanf("%d",&n);

    printf("\n enter number of students in group B\n");
    scanf("%d",&m);

    int *arr1=(int*)malloc(n*sizeof(int));

    int *arr2=(int*)malloc(m*sizeof(int));

    printf("\nenter marks for Group A Students\n");

    for(int i=0;i<n;i++) {
        scanf("%d",&arr1[i]);   
    }

    printf("\n enter marks for Group B Students\n");

    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }

    float sum=0;

    for(int i=0;i<n;i++) { 
        sum=sum+arr1[i];
    }

    for(int i=0;i<m;i++) {
    sum=sum+arr2[i];
    }

    float avg=sum/(n+m);

    printf("\n Aggregate marks=%f",avg);

    return 0;
}
