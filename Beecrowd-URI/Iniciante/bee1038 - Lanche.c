#include <stdlib.h>
#include <stdio.h>

int main () {

    float v[5] = {4.0, 4.5, 5.0, 2.0, 1.5};
    int cod, qtd;

    scanf("%d%d", &cod, &qtd);

    printf("Total: R$ %.2f\n", v[cod-1]*qtd);
    
    return 0;
}