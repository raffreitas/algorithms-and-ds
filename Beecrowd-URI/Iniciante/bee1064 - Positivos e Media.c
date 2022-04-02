#include <stdio.h>
#include <stdlib.h>

int main() {

    float val, media = 0;
    int i, cont = 0;

    for (i = 0; i < 6; i++){

        scanf("%f", &val);

        if(val > 0){
            cont++;
            media += val;
        }
        
    }
    
    printf("%d valores positivos\n", cont);
    printf("%.1f\n", media/cont);
    
    return 0;
}