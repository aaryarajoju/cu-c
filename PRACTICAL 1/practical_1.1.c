//Practical 1.1
#include <stdio.h>

int main(){

   char name[20];
   int age;
   long phone;
   float percentage;

   printf("Enter name: ");
   scanf("%s", name);
   printf("Enter age: ");
   scanf("%d", &age);
   printf("Enter contact number: ");
   scanf("%ld", &phone);
   printf("Enter perc in 12th: ");
   scanf("%f", &percentage);

   printf("Name= %s\n", name);
   printf("Age= %d\n", age);
   printf("Phone Number= %ld\n", phone);
   printf("Percentage= %.2f\n", percentage);

   return 0;
}
