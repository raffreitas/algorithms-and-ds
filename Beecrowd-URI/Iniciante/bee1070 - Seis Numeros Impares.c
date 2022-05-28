#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, i;

    scanf("%d", &num);

    for(i = num; i < num + 12; i++)
        if(i % 2 != 0)
            printf("%d\n", i);

    return 0;
}