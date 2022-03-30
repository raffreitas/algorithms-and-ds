#include <stdio.h>
#include <stdlib.h>

int main () {

    int dist;
    float combGasto;

    scanf("%d%f", &dist, &combGasto);

    printf("%0.3f km/l\n", dist / combGasto);

    return 0;
}