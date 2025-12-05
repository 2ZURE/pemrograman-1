#include <stdio.h>
#include <math.h>

int main(){
    float alas = 5;
    float tinggi = 12;
    double hipotenusa = pow(((alas * alas) + (tinggi * tinggi)), 0.5);

    printf("\nDiketahui : \n");
    printf("Alas = %.0f cm \n", alas);
    printf("Tinggi = %.0f cm \n", tinggi);
    
    printf("\nJawab : \n");
    printf("Sisi A = %.0f cm \n", tinggi);
    printf("Sisi B = %.0f cm \n", hipotenusa);
    printf("Sisi C = %.0f cm \n", alas);
    printf("Keliling = %.0f cm \n", alas + tinggi + hipotenusa);
    printf("Luas = %.0f cm \n", (0.5 * alas * tinggi));
    
    return 0; 
}
