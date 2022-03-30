#include <stdio.h>
#include <stdlib.h>

int main () {

    char name[25];
    double salary, sales, total;
    
    scanf("%s", &name);
    scanf("%lf%lf", &salary, &sales);

    total = salary + (sales * 0.15);
    
    printf("TOTAL = R$ %0.2lf\n", total);

    return 0;
}