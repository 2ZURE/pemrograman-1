#include <stdio.h>

int main(){ 
    char nama[30], nim[20], paralel[20], ttl[30], alamat[50], hobby[30], no_hp[20];

    printf("Nama                   : ");
    scanf("%[^\n]", nama);
    getchar();

    printf("NIM                    : ");
    scanf("%[^\n]", nim);
    getchar();

    printf("Kelas Paralel          : ");
    scanf("%[^\n]", paralel);
    getchar();

    printf("Tempat/Tanggal Lahir   : ");
    scanf("%[^\n]", ttl);
    getchar();

    printf("Alamat                 : ");
    scanf("%[^\n]", alamat);
    getchar();

    printf("Hobby                  : ");
    scanf("%[^\n]", hobby);
    getchar();

    printf("No. HP                 : ");
    scanf("%[^\n]", no_hp);
    getchar();

    printf("\n");
    
    printf("Nama                   : %s \n", nama);
    printf("NIM                    : %s \n", nim);
    printf("Kelas Paralel          : %s \n", paralel);
    printf("Tempat/Tanggal Lahir   : %s \n", ttl);
    printf("Alamat                 : %s \n", alamat);
    printf("Hobby                  : %s \n", hobby);
    printf("No. HP                 : %s \n", no_hp);
    return 0;
}