#include <stdio.h>
#include <stdlib.h>

int main () {

    double a, b, c;
    double area;

    scanf("%lf%lf%lf", &a, &b, &c);

    if((a + b) > c && (a + c) > b && (c + b) > a)
        printf("Perimetro = %.1lf\n", a + b + c);
    else{
        area = ((a+b)*c)/2.0;
        printf("Area = %.1lf\n", area);

    }

    return 0;
}