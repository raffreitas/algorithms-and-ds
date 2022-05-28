#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i, x;

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        scanf("%d", &x);

        if (x % 2 == 0) {
            if (x > 0)
                printf("EVEN POSITIVE\n");
            else if (x < 0)
                printf("EVEN NEGATIVE\n");
            else
                printf("NULL\n");
        }
        else {
            if (x > 0)
                printf("ODD POSITIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
    }
    return 0;
}