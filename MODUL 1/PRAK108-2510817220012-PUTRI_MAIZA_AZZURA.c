#include <stdio.h>

int main(){
    float total_jarak = 14;
    float total_putaran = 5;
    float keliling = total_jarak / total_putaran;
    float jari_jari = (keliling) / (2 * 3.14);

    printf("Diketahui: \n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran \n", total_putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer \n \n", total_jarak);
    printf("Jawaban: \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %0.2f Kilometer \n", jari_jari );
    
    return 0;
}