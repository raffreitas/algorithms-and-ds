#include <stdlib.h>
#include <stdio.h>

int main () {


    int tempSeg, tempMin, tempHora;

    scanf("%d", &tempSeg);

    tempHora = tempSeg / 3600;
    tempSeg = tempSeg % 3600;
    tempMin = tempSeg / 60;
    tempSeg = tempSeg % 60;

    printf("%d:%d:%d\n", tempHora, tempMin, tempSeg);
    

    return 0;
}