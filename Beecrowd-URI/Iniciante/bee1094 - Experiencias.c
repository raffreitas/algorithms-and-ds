#include <stdio.h>

int main () {

  int i, n, quant;
  int rato=0, sapo=0, coelho=0;
  float total=0;
  char tipo;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%d %c", &quant, &tipo);

    switch (tipo){
      case 'C':
        coelho += quant;
        break;
      case 'R':
        rato += quant;
        break;
      case 'S':
        sapo += quant;
        break;
    }
    total += quant;
  }

  printf("Total: %.0f cobaias\n", total);
  printf("Total de coelhos: %d\n", coelho);
  printf("Total de ratos: %d\n", rato);
  printf("Total de sapos: %d\n", sapo);
  printf("Percentual de coelhos: %.2f %%\n", (coelho / total) * 100);
  printf("Percentual de ratos: %.2f %%\n", (rato / total) * 100);
  printf("Percentual de sapos: %.2f %%\n", (sapo / total) * 100);
  
  return 0;
}