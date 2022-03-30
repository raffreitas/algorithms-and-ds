#include <stdlib.h>
#include <stdio.h>

int main () {

    double a, b;

    scanf("%lf%lf", &a, &b);

    printf("MEDIA = %0.5lf\n", (a * 3.5 + b * 7.5)/11.0);

    return 0;
}