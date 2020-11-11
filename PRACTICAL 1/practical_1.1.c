//PRACTICAL 1.1
//Write a program to input details of a under-graduate student

#include <stdio.h>

int main(){

   //initializing the variables
   char name[20];
   int age;
   long phone;
   float percentage;

   //asking the user for user input about the student details
   printf("Enter name: ");
   scanf("%s", name);
   printf("Enter age: ");
   scanf("%d", &age);
   printf("Enter contact number: ");
   scanf("%ld", &phone);
   printf("Enter perc in 12th: ");
   scanf("%f", &percentage);

   //printing the detail entered
   printf("Name= %s\n", name);
   printf("Age= %d\n", age);
   printf("Phone Number= %ld\n", phone);
   printf("Percentage= %.2f\n", percentage);

   return 0;
}
