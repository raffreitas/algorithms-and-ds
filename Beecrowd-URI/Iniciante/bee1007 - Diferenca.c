#include <stdio.h>
#include <stdlib.h>

int main () {

    int a, b, c, d;
    int diferenca;

    scanf("%d%d%d%d", &a, &b, &c, &d);

    diferenca = ((a * b) -( c * d));

    printf("DIFERENCA = %d\n", diferenca);

    return 0;
}