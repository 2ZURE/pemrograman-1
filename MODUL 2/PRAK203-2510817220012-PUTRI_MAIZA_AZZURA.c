#include <stdio.h>

int main(){
    float a, b, i, j, x, y = 0;
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);
    printf("%.3f \n", ((a - b) * (i / j) - (x + y)));
    return 0;
}