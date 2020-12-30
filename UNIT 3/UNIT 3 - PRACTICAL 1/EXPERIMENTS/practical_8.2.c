#include <stdio.h>

int *getMax(int *m, int *n) {
    if (*m > *n) {
        return m;
    } else {
        return n;
    }
}

int main(void) {

    int x, y;

    printf(" FIND MAX VALUE\n Enter two integers: ");
    scanf("%d %d", &x,&y);

    int *max = NULL;

    max = getMax(&x, &y);

    printf("\nMax value: %d\n\n", *max);

    return 0;
}
