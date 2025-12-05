#include <stdio.h>

int main(){
    int pilihan;
    float a, b;

    while(1){
        printf("Pilih program \n");
        printf("1. Penjumlahan \n");
        printf("2. Pengurangan \n");
        printf("3. Perkalian \n");
        printf("4. Pembagian \n");
        printf("5. Exit \n");
        
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        if(pilihan == 5) break; 
        if(pilihan > 5 || pilihan < 1){
            printf("Input anda salah, silahkan coba lagi \n");
            continue;
        }

        printf("Masukkan nilai pertama : ");
        scanf("%f", &a);
        printf("Masukkan nilai kedua : ");
        scanf("%f", &b);

        switch(pilihan){
            case 1:
                printf("Hasil penjumlahan antara %.2f dan %.2f adalah %.2f \n", a, b, a + b);
                break;
            case 2:
                printf("Hasil pengurangan antara %.2f dan %.2f adalah %.2f \n", a, b, a - b);
                break;
            case 3:
                printf("Hasil perkalian antara %.2f dan %.2f adalah %.2f \n", a, b, a * b);
                break;
            case 4:
                if (b != 0) printf("Hasil pembagian antara %.2f dan %.2f adalah %.2f \n", a, b, a / b); else printf("Hasil pembagian tidak terdefinisi \n");
        }
    }
    printf("Terima kasih, telah menggunakan kalkulator Putri Maiza Azzura \n");
}