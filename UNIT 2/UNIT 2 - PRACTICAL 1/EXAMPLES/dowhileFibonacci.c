// EXAMPLE: printing fibonacci sequence upto a user specifies limit, using do-while

#include <stdio.h>

int main (){
    
    int num, i = 0, term1 = 0, term2 = 1, nextTerm;

    printf("Enter a number: ");
    scanf("%d", &num);

    do{
        printf("%d\n", term1);
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
        i++;
    } while (i < num);

    printf("\n");

    return 0;
}
