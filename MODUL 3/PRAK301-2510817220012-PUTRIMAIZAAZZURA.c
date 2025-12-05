#include <stdio.h>

int main(){
    int a, b, container;
    scanf("%d %d", &a, &b);

   if(a > b){
    container = a;
    a = b;
    b = container;
   }

    printf("%d %d", a, b);
    return 0;
}