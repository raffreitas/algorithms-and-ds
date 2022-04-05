#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, i, cont = 0;

    for(i = 0; i < 5; i++) {
        scanf("%d", &num);
        if(num % 2 == 0)
            cont++;        
    }

    printf("%d valores pares\n", cont);
    
    return 0;
}