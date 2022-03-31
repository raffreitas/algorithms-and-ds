#include <stdio.h>
#include <stdlib.h>

int main () {

    int hIni, hFim;

    scanf("%d%d", &hIni, &hFim);

    if((hFim - hIni) > 0)
        printf("O JOGO DUROU %d HORA(S)\n", hFim - hIni);
    else if((hFim - hIni) == 0)
        printf("O JOGO DUROU 24 HORA(S)\n");
    else if((hFim - hIni < 0)){
        printf("O JOGO DUROU %d HORA(S)\n", (24 - hIni) + hFim);
    }

    return 0;
}