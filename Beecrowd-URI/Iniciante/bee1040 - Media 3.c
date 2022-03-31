#include <stdio.h>
#include <stdlib.h>

int main () {

    float n1, n2, n3, n4, nf;
    float media;

    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);

    media = (n1*2 + n2*3 + n3*4 + n4*1)/10.;

    printf("Media: %.1f\n", media);

    
    if(media >= 7.0)
        printf("Aluno aprovado.\n");
    
    else if(media < 5.0)
        printf("Aluno reprovado.\n");
    
    else{
        printf("Aluno em exame.\n");
        scanf("%f", &nf);
        printf("Nota do exame: %.1f\n", nf);
        media = (media + nf) / 2.0;
        
        if(media > 5.0)
            printf("Aluno aprovado.\n");
        else
             printf("Aluno reprovado.\n");
        
        printf("Media final: %.1f\n", media);
    } 

    return 0;
}