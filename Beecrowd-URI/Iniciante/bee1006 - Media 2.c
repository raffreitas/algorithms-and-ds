#include <stdio.h>
#include <stdlib.h>

int main () {

    double a, b, c;
    double media;

    scanf("%lf%lf%lf", &a, &b, &c);

    media = (a*2 + b*3 + c*5)/10.0;

    printf("MEDIA = %0.1lf\n", media);

    return 0;
}