#include <stdio.h>
#include <stdlib.h>

int main()
{

    float renda, imposto, aux, aux2, aux3;

    imposto = 0;

    scanf("%f", &renda);

    if (renda <= 2000)
        printf("Isento\n");
    else
    {
        if (renda <= 3000)
        {
            aux = renda - 2000;
            imposto += aux * 0.08;
        }
        else if (renda <= 4500)
        {
            aux = renda - 2000;
            aux2 = aux - 1000;
            aux -= aux2;
            imposto += (aux * 0.08) + (aux2 * 0.18);
        }
        else if (renda > 4500)
        {
            aux = renda - 2000;
            aux2 = aux - 1000;
            aux3 = aux2 - 1500;
            aux -= aux2;
            aux2 -= aux3;
            imposto += (aux * 0.08) + (aux2 * 0.18) + (aux3 * 0.28);
        }
        
        printf("R$ %.2f\n", imposto);
    }
   

    return 0;
}