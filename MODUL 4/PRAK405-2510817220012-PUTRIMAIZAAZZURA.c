#include <stdio.h>

int main() {
    int kelipatan, baris;
    int total = 0;
    scanf("%d %d", &baris, &kelipatan);

    for(int i = 1; i <= baris; i++){ 
        int jumlah = 0; 
        printf("(");
        for(int j = i; j >= 1; j--){
            jumlah += j * kelipatan;
            printf("%d * %d", j , kelipatan);
            if(j > 1) printf(") + (");
        }
        printf(") = %d \n", jumlah);
        total += jumlah;
    }
    printf("%d \n", total);

    return 0;
}