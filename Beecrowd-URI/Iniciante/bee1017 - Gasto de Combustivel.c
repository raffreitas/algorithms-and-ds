#include <stdio.h>
#include <stdlib.h>

int main () {

    float temp, veloc;

    scanf("%f%f", &temp, &veloc);

    printf("%.3f\n", (temp*veloc) / 12);

    return 0;
}
