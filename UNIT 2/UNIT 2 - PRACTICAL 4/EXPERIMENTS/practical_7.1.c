#include <stdio.h>
#include <math.h>

int max_of_four(float a, float b, float c, float d) {

    return (int) fmax(fmax(fmax(a, b), c), d);
}

int main() {

    float a,b,c,d;

    printf("Enter any 4 numbers: ");
    scanf("%f, %f, %f, %f", &a, &b, &c, &d);

    printf("Largest out of 4 no is : %d\n\n", max_of_four(a,b,c,d));

    return 0;
}
