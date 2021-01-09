#include<stdio.h>
#include<stdlib.h>

int main() {

    int n,i;

    printf("\tRUNTIME MEMORY ALLOCATION\n");
    printf("Enter max number of characters you want to input\n");
    scanf("%d",&n);

    char *p = (char*)malloc(n*sizeof(char));

    if(p==NULL) {
        printf("Memory allocation fails..");
        exit(0);
    }

    puts("Enter string please");

    for(i=0;i<n;i++) {
        scanf("%c",p+i);
    }

    *(p+i)= '\0';

    printf("You wrote %s",p);

    fflush(stdin);

    printf("\nEnter new size\n");
    scanf("%d",&n);

    p= realloc(p,n*sizeof(char));

    puts("\nEnter new string please");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        scanf("%c",p+i);
    }

    *(p+i)= '\0';

    printf("You wrote %s\n",p);

    free(p);

    return 0;
}
