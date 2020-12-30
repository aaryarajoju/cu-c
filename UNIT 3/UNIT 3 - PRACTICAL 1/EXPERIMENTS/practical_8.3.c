#include<stdio.h>

void Update_balance(int **p, int a[], int i) {

    *p = &a[i];
    printf(" Amount credited is %d\n", **p);
}

int main() {

    int a[100];
    int n,i,*p;

    printf(" Enter number of persons: ");
    scanf("%d", &n);
    printf("\n");

    p = &a[0];

    for(i=0;i<n;i++) {
        printf("Enter current amount of person %d in account- ",i+1);
        scanf("%d",p);
        p++;
    }

    p = &a[0];

    for (i=0;i<n;i++) {
        if(*p==0) {
            *p = *p + 1000;
            printf("\n Amount is credited to person %d \n", i+1);
            Update_balance(&p,a,i);
        }

        p++;
    }

    printf("\n\n");
    return 0;
}
