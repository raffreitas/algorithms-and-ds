#include <stdio.h>

int main () {

  int maior, pos, i;
  int valor;

  for(i = 0; i < 100; i++){
    scanf("%d", &valor);
    
    if(i == 0){
      maior = valor;
      pos = i;
    }

    else if(valor > maior){
      maior = valor;
      pos = i;
    }
   
  }

  printf("%d\n%d\n", maior, pos + 1);

  return 0;
}