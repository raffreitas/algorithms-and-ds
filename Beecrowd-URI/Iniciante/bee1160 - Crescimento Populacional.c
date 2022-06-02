#include <stdio.h>

int main () {

  int PA, PB, t, i, anos;
  double G1, G2;

  scanf("%d", &t);

  for(i = 0; i < t; i++){
    scanf("%d %d", &PA, &PB);
    scanf("%lf %lf", &G1, &G2);
    anos = 0;


  while(PA <= PB && anos < 101){
    PA += PA * (G1 / 100);
    PB += PB * (G2 / 100);
    anos++;
  }
  
  if(anos <= 100)
    printf("%d anos.\n", anos);
  else
    printf("Mais de 1 seculo.\n");

  }

  return 0;
}