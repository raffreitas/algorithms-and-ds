#include <stdio.h>
#include <stdlib.h>

int main() {

    float val;
    int i, cont = 0;

    for (i = 0; i < 6; i++){

        scanf("%f", &val);

        if(val > 0)
            cont++;
        
    }
    
    printf("%d valores positivos\n", cont);
    
    return 0;
}