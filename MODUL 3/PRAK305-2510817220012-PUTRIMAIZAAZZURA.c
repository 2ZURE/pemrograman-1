#include <stdio.h>

int main(){
    int detik, menit, jam, hari;
    scanf("%d", &detik);
    
    hari = detik / 86400;
    jam = (detik % 86400) / 3600;
    menit = (detik % 3600) / 60;
    detik = detik % 60;

    if (hari == 0) printf("%02d:%02d:%02d", jam, menit, detik);
    else printf("%d hari %02d:%02d:%02d", hari, jam, menit, detik); 
    return 0;
}