#include <stdio.h>
#include <stdlib.h>

int main () {

    int idadeDias;

    scanf("%d", &idadeDias);

    printf("%d ano(s)\n",idadeDias / 365);
    idadeDias = idadeDias % 365;
    printf("%d mes(es)\n", idadeDias / 30);
    idadeDias = idadeDias % 30;
    printf("%d dia(s)\n", idadeDias);


    return 0;
}