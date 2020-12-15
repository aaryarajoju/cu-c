#include <stdio.h>

int main() {
    float m;
    int n,count=0;

    printf("Enter speed limit issued by university : ");
    scanf("%f", &m);

    printf("Enter strength of class : ");
    scanf("%d",&n);

    float dist[n],t[n];

    printf("Enter %d student details...",n);

    for(int i=0;i<n;i++) {
    printf("\n%d Distance(Km): ",i+1);
    scanf("%f",&dist[i]);

    printf("Time(hour): ");
    scanf("%f",&t[i]);
    }

    for(int i=0;i<n;i++){
        if(m>=(dist[i]/t[i]))
            count++;
        else
            count--;
    }

    if(count==n)
        puts("All students are following the guidelines");
    else if(-1*count==m)
        puts("No one is following the guidelines");
    else
        puts("Some students are following the guidelines");    

    return 0;
}