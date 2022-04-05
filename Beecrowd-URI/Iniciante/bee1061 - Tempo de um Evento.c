#include <stdio.h>
#include <stdlib.h>

/*  
    Problema incompleto;
*/

int main() {

    int dia[2], hora[2], min[2], seg[2];
    int dias, horas, minutos, segundos;
    int i;

    for(i = 0; i < 2; i++) {
        printf("Dia ");
        scanf("%d", &dia[i]);
        scanf("%d" &hora[i]);
        printf(" : ");
        scanf("%d" &min[i]);
        printf(" : ");
        scanf("%d" &seg[i]);
        
    }

    dias = dia[0] - dia[1];

    if((hora[1] - hora[0]) > 0) 
        horas = hora[1] - hora[0];
    else if((hora[1] - hora[2]) < 0)
        horas = 24;
    else
        horas = (24 - hora[0] + hora[1]);
   



    return 0;
}