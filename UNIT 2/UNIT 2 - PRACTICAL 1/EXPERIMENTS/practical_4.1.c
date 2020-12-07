#include <stdio.h>

int main(){
   int n,p,i;
   float m,x,profit=0,loss=0,total;

   printf("Enter no of available item for sale : ");
   scanf("%d", &n);

   float item[n];

   printf("\n******Enter price of each item******\n");

   for(i=0;i<n;i++){
       printf("%d : ",i+1);
       scanf("%f",&item[i]);
   }

   printf("\nEnter the no of items sold in the profit : ");
   scanf("%d",&p);

   printf("Enter the percentage of profit : ");
   scanf("%f",&m);

   printf("\nEnter the percentage of loss in remaining item : ");
   scanf("%f",&x);

   for(i=0;i<p;i++){
       profit+=(m*item[i])/100;
   }

   for(i=p;i<n;i++){
       loss+=(x*item[i])/100;
   }

   total=profit-loss;

   printf("\n\n");

   if(total>0) printf("Salesman get Rs. %.2f profit\n\n",total);
   else if (total<0) printf("Salesman get Rs. %.2f loss\n\n",total*-1);
   else printf("salesman got neither profit nor loss\n\n");

   return 0;
}