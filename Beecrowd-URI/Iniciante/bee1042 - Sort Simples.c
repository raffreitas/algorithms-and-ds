#include <stdio.h>
#include <stdlib.h>

int main () {

    int a, b, c;
 
    scanf("%d%d%d", &a, &b, &c);

     if(a>b && a>c){
        if(b>c){
            printf("%d\n%d\n%d\n\n", c, b, a);
            printf("%d\n%d\n%d\n", a, b, c);
        }
        else{
            printf("%d\n%d\n%d\n\n", b, c, a);
            printf("%d\n%d\n%d\n", a, b, c);
        }
     }

    if(b>a && b>c){
        if(a>c){
            printf("%d\n%d\n%d\n\n", c, a, b);
            printf("%d\n%d\n%d\n", a, b, c);
        }
        else{
            printf("%d\n%d\n%d\n\n", a, c, b);
            printf("%d\n%d\n%d\n", a, b, c);
        }
    }

    if(c>a && c>b){
        if(a>b){
            printf("%d\n%d\n%d\n\n", b, a, c);
            printf("%d\n%d\n%d\n", a, b, c);
        }
        else{
            printf("%d\n%d\n%d\n\n", a, b, c);
            printf("%d\n%d\n%d\n", a, b, c);
        }
    }

    return 0;

}