#include <stdio.h>
#include <stdlib.h>

int main () {

    double r, a;

    scanf("%lf", &r);

    a = 3.14159 * (r * r);

    printf("A=%0.4lf\n", a);

    return 0;
}