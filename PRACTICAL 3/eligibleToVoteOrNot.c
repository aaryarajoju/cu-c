// EXAMPLE: check if a a person is eligible to vote or not

#include <stdio.h>

int main (){
    
    //initializing the variable
    int age;

    //inputting the user's age
    printf("Enter age: ");
    scanf("%d", &age);

    //checking if age is greater than or equal to 18
    if (age >= 18){
        printf("The person is eligible to vote\n\n");
    } else {
        printf("The person is not eligible to vote\n\n");
    }

    return 0;
}
