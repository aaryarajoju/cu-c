#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array : ");
    scanf("%d",&n);

    int a[n],temp;

    printf("Enter %d numbers...",n);

    for(int i=0;i<n;i++) {
        printf("\n%d : ",i+1);
        scanf("%d",&a[i]);
    }
    
    for(int i=n-5;i<n;i++) {
        for(int j=i;j>0;j--) {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
        }
    }

    puts("Modified series...");

    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    
    return 0;
}