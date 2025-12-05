#include <stdio.h>

int main(){
    float jari_jari, tinggi = 0;
    scanf("%f", &jari_jari);
    scanf("%f", &tinggi);
    printf("Volume = %.2f \n", (22.0/7 * jari_jari * jari_jari * tinggi));
    printf("Luas = %.2f \n", ((2 * 22.0/7 * jari_jari * (jari_jari + tinggi))));
    printf("Keliling = %.2f \n\n", (2 * 22.0/7 * jari_jari));
    return 0;
}