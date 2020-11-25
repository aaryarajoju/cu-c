// EXAMPLE: printing fibonacci sequence upto a user specifies limit, using for

#include <stdio.h>

int main (){
    
    int num, term1 = 0, term2 = 1, nextTerm;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++){
        printf("%d\n", term1);
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }

    printf("\n");

    return 0;
}
