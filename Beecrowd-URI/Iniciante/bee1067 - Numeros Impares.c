#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, i;

    scanf("%d", &num);

    for(i = 1; i <= num; i++)
        if(i % 2 != 0)
            printf("%d\n", i);

    return 0;
}