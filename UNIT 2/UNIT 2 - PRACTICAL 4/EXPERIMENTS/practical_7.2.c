#include <stdio.h> 
#include <stdlib.h>

int factorial(int n) {
    if(n==0) 
        return 1;

    else
        return n*factorial(n-1);
}

int main() {

    int n;

    printf("Enter no to find factorial : "); scanf("%d", &n);

    if (n >= 0)
        printf("Factorial of given no %d is : %d", n, factorial(n));

    else
        printf("Not Possible");

    return 0;
}
