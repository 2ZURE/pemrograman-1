#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    
    if(N == 0) printf("Nol");
    else if (N > 0) printf("Positif");
    else printf("Negatif");
    return 0;
}