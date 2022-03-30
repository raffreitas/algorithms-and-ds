#include <stdio.h>
#include <stdlib.h>

int main () {

    int id[2], number[2];
    float price[2], total = 0;

    scanf("%d%d%f", &id[0], &number[0], &price[0]);
    scanf("%d%d%f", &id[1], &number[1], &price[1]);

    total = (number[0] * price[0]) + (number[1] * price[1]);

    printf("VALOR A PAGAR: R$ %0.2f\n", total);

    return 0;
}