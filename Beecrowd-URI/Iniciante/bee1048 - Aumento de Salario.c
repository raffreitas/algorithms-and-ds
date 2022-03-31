#include <stdlib.h>
#include <stdio.h>

int main () {

    float salario, newSalario;

    scanf("%f", &salario);

    if(salario <= 400){
        newSalario = salario + (salario * 0.15);
        printf("Novo salario: %.2f\n", newSalario);
        printf("Reajuste ganho: %.2f\n", newSalario - salario);
        printf("Em percentual: 15 %%\n");
    }
    else if(salario <= 800){
        newSalario = salario + (salario * 0.12);
        printf("Novo salario: %.2f\n", newSalario);
        printf("Reajuste ganho: %.2f\n", newSalario - salario);
        printf("Em percentual: 12 %%\n");
    }
    else if(salario <= 1200){
        newSalario = salario + (salario * 0.1);
        printf("Novo salario: %.2f\n", newSalario);
        printf("Reajuste ganho: %.2f\n", newSalario - salario);
        printf("Em percentual: 10 %%\n");
    }
    else if(salario <= 2000){
        newSalario = salario + (salario * 0.07);
        printf("Novo salario: %.2f\n", newSalario);
        printf("Reajuste ganho: %.2f\n", newSalario - salario);
        printf("Em percentual: 7 %%\n");
    }
    else{
        newSalario = salario + (salario * 0.04);
        printf("Novo salario: %.2f\n", newSalario);
        printf("Reajuste ganho: %.2f\n", newSalario - salario);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}