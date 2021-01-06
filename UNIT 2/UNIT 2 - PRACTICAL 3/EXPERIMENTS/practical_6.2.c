#include <stdio.h>
#include <string.h>

int main() {

    int l;
    char str[20]; printf("Enter string : \n");

    scanf("%[^\n]%*c", str);

    l=strlen(str);

    for(int i=1; i<=l; i++) {

        for(int j=0,k=0;k!=l; j++) {

            for(k=j; k<(j+i); k++) {
                printf("%c", str[k]);
            }

            printf(",");

        }
    }

    return 0;
}
