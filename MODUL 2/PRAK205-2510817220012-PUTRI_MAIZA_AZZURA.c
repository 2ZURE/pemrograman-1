#include <stdio.h>
#include <math.h>

int main(){
    float tinggi, hipotenusa = 0;
    scanf("%f", &tinggi); 
    scanf("%f", &hipotenusa); 
    float alas = sqrt((hipotenusa * hipotenusa) - (tinggi * tinggi));
    printf("Alas =  %.0f cm \n", alas);
    printf("Tinggi =  %.0f cm \n", tinggi);
    printf("Keliling =  %.0f cm \n", (alas + tinggi + hipotenusa));
    printf("Luas =  %.0f cm^2 \n", (0.5 * alas * tinggi));
    return 0;
}