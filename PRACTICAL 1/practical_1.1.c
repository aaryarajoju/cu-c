#include <stdio.h>

int main()

{

   char name[20];

   int age;

   long long contact_num;

   float perc;

   

   printf("Enter name in capital letters: ");

   scanf("%s", name);

   printf("Enter age: ");

   scanf("%d", &age);

   

   printf("Enter contact number: ");

   scanf("%lld", &contact_num);

   printf("Enter perc in 12th: ");

   scanf("%f", &perc);

   

   printf("Name= %s", name);

   printf("\nAge= %d", age);

   printf("\nPhone Number= %lld", contact_num);

   printf("\nPerc =%.2f", perc);

   return 0;

}