#include <stdio.h> 
#include <stdlib.h> 

int main() {

    int *ptr; int n,m,i;

    printf("Enter the no. of students :-"); 
    scanf("%d",&n);

    ptr=(int*) malloc(n*sizeof(int));

    printf("Enter the roll no. of %d students :-\n",n); 

    for(i=0;i<n;i++) {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the no. of new students entered after 5 mins. :- ");
    scanf("%d",&m); 

    ptr=realloc(ptr,(n+m)*sizeof(int));

    printf("Enter the roll no. of new students :-\n"); 

    for(i=n;i<n+m;i++) {
        scanf("%d",&ptr[i]);
    }

    printf("Roll no.of all the students are:-"); 

    for(i=0;i<(n+m);i++) {
        printf("\n%d",ptr[i]);
    }

    free(ptr);

    return 0;
}
