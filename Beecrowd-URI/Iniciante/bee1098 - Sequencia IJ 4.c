/*
  Output idêntico ao udebug mas Wrong answer 
*/

#include <stdio.h>

int main () {

  double i, j;
  for(i = 0; i <= 2; i += 0.2){
    
    if(i == 0 || i == 1 || i > 1.8){
      for(j = 1+i; j<=3+i; j++)
        printf("I=%.0lf J=%.0lf\n",i, j);
    }
    else{
      for(j = 1+i ; j <= 3+i; j++)
        printf("I=%.1lf J=%.1lf\n", i, j);
    }
  }

  return 0;
}