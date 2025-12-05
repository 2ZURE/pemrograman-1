#include <stdio.h>

int main(){
int sisi_A = 4;
int sisi_B = 5;
int sisi_C = 7;
int harga_tanah_per_meter = 85000;

printf("Diketahui: \n");
printf("Panjang sisi segitiga berturut-turut adalah %d %d, dan %d \n", sisi_A, sisi_B, sisi_C);
printf("Keliling tanah Pak Dengklek adalah %d \n", (sisi_A + sisi_B + sisi_C));
printf("Harga tanah per meter adalah %d \n", harga_tanah_per_meter);
printf("Jawaban: \n");
printf("Biaya yang diperlukan Pak Dengklek adalah : Rp%d", ((sisi_A + sisi_B + sisi_C) * harga_tanah_per_meter));
return 0;
}