#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    char str[50];
    int i, l, d=0, lc=0, uc=0,s=0, count=0;

    printf("Enter string : \n");
    scanf("%[^\n]s",str);

    l=strlen(str);

    for(i=0;i<l;i++) {

        if(!isdigit(str[i]))
            d+=1;

        if(!islower(str[i]))
            lc+=1;

        if(!isupper(str[i]))
            uc+=1;

        if(!(str[i]=='!' || str[i]=='@' || str[i]=='#' || str[i]=='$' || str[i]=='%' || str[i]=='^' || str[i]=='&' || str[i]=='*' || str[i]=='(' || str[i]==')' || str[i]=='-' || str[i]=='+'))
            s+=1;
    }

    if(d==l)
        count+=1;

    if(lc==l)
        count+=1;

    if(uc==l)
        count+=1;

    if(s==l)
        count+=1;

    if(count>6-l)
        printf("Password is strong with %d number of characters", l);

    else
        printf("Number of characters needs to be added are: %d",6-l);

    return 0;
}