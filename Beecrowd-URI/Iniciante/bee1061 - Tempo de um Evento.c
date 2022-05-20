/*
    Há um caso de teste que não funciona 
    Wrong answer (100%)
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{

    char dia[4], c;
    int dIni, dFim, hIni, hFim, mIni, mFim, sIni, sFim;
    int dias, horas, minutos, segundos;

    scanf("%s %d", dia, &dIni);
    scanf("%d %c %d %c %d", &hIni, &c, &mIni, &c, &sIni);

    scanf("%s %d", dia, &dFim);
    scanf("%d %c %d %c %d", &hFim, &c, &mFim, &c, &sFim);

    dias = dFim - dIni;
    horas = hFim - hIni;
    minutos = mFim - mIni;
    segundos = sFim - sIni;

    if (horas < 0){
        horas += 24;
        dias--;
    }

    if (minutos < 0){
        minutos += 60;
        horas--;
    }

    if (segundos < 0){
        segundos += 60;
        minutos--;
    }

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}