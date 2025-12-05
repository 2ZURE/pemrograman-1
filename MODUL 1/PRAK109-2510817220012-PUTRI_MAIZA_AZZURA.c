#include <stdio.h>

int main(){
    int jumlah_pasukan = 958730;
    int jumlah_pahlawan = 5;
    int pembagian_musuh = jumlah_pasukan / jumlah_pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d \n", jumlah_pasukan);
    printf("Jumlah pahlawan = %d \n", jumlah_pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d \n", pembagian_musuh);
    return 0;
}