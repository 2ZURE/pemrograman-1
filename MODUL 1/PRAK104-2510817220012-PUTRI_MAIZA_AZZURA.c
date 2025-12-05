#include <stdio.h>

int main() {
    double harga_sepatu_A = 400000;
    double harga_sepatu_B = 350000;
    printf("Harga sepatu A adalah %.0f \n", harga_sepatu_A);
    printf("Harga sepatu B adalah %.0f \n", harga_sepatu_B);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.0f \n", (harga_sepatu_A * (1 - 0.13)));
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.0f \n", (harga_sepatu_B * (1 - 0.21)));
    return 0;
}