#include <stdio.h>
#include <stdlib.h>

int main () {

    int number, hours;
    float hWage;

    scanf("%d%d%f", &number, &hours, &hWage);

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %0.2f\n", hours * hWage);
        
    return 0;
}