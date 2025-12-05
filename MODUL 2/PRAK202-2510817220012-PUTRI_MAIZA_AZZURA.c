#include <stdio.h>

int main(){
    float a, b = 0;

    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &a);
    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &b);
    printf("Hasil dari penjumlahan nilai pertama \"%.0f\" dan nilai kedua \"%.1f\" adalah \" %.2f\" ", a, b, a+b);

    printf("\n\n");

    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &a);
    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &b);
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \" %.2f\" ", a, b, a+b);
}