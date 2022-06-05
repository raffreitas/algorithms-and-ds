#include <stdio.h>

int main () {

  int i, j, n=3, x=5;

  for(i = 1; i <= 9; i += 2){
    x += 2;
    n += 2;
    for(j = x; j >= n; j--)
      printf("I=%d J=%d\n", i, j);
  }

  return 0;
}