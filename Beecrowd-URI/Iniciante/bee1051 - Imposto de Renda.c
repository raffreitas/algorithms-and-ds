#include <stdio.h>
#include <stdlib.h>

/*
    Resultado incorreto, falta concertar
*/


int main () {

    float renda, imposto, aux;

    imposto = 0;

    scanf("%f", &renda);

    if(renda <= 2000)
        printf("Isento");
    else if(renda <= 3000){
        aux = renda - 2000;
        imposto += aux * 0.08;
    }
    else if(renda <= 4500){
        aux = renda - 2000;
        imposto += aux * 0.08;
        aux = renda - 3000;
        imposto += aux * 0.18;
    }
    else{
        aux = renda - 2000;
        imposto += aux * 0.08;
        aux = renda - 3000;
        imposto += aux * 0.18;
        aux = renda - 4500;
        imposto += aux * 0.28;
    }

    printf("R$ %.2f\n", imposto);


    return 0;
}