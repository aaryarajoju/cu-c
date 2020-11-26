#include <stdio.h>

int main(){

    int num = 1;

    do{
        printf("%d\n", (2*num));
        num++;
    } while(num <= 10);
    
    return 0;
}