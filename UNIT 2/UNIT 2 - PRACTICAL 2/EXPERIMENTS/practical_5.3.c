#include <stdio.h>

int main() {
    int n;

    printf(“Enter no of goods: “);
    scanf("%d", &n);

    float cost[n],x,y,p,total=0;

    printf("Enter cost of %d goods\n",n);

    for(int i=0;i<n;i++) {
        printf("%d : ",i+1);
        scanf("%f",&cost[i]);
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(cost[j]<cost[i]) {
                cost[j]+=cost[i];
                cost[i]=cost[j]-cost[i];
                cost[j]-=cost[i];
            }
        }
    }

    printf("Loss on most expensive thing : ");
    scanf("%f",&x);

    printf("Gain on cheapest thing : ");
    scanf("%f",&y);

    if(n>2) {
        printf("Gain on rest of the thing : "); scanf("%f",&p);
    }

    for(int i=0;i<n;i++) {
        if(cost[n-1]==cost[i])
            total+=(y*cost[i])/100;
        else if(cost[0]==cost[i])
            total-=(x*cost[i])/100;
        else
            total+=(p*cost[i])/100;
    }         

    if(total<0)
        printf("Rs. %.2f loss on goods",total*-1);
    else if(total>0)
        printf("Rs. %.2f gain on goods",total);
    else
        printf("Neither gain nor loss on goods");

    return 0;
}