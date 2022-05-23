#include <stdlib.h>
#include <stdio.h>

int main()
{

  int  hIni, hFim, mIni, mFim;
  int horas, minutos;

  scanf("%d %d %d %d", &hIni, &mIni, &hFim, &mFim);
  
  horas = hFim - hIni;
  minutos = mFim - mIni;

  if (horas <= 0)
    horas += 24;

  if (minutos < 0){
    minutos += 60;
    horas--;
  }

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

  return 0;
}